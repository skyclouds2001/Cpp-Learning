#include<iostream>
using namespace std;
int a,b;
const int c=0,d=0;
char ss[]="sssssssssss";
void ff(void)
{
	static int i=0,j=0;
	int k,l;
	cout<<&i<<endl;
	cout<<&j<<endl;
	putchar('\n');
	
	cout<<&k<<endl;
	cout<<&l<<endl;
	putchar('\n');
}
int main()
{
	int e,f;
	const int g=0,h=0;
	char s[]="sssssssssss";
	
	cout<<&a<<endl;
	cout<<&b<<endl;
	putchar('\n');
	
	cout<<&c<<endl;
	cout<<&d<<endl;
	putchar('\n');
	
	cout<<&e<<endl;
	cout<<&f<<endl;
	putchar('\n');
	
	cout<<&g<<endl;
	cout<<&h<<endl;
	putchar('\n');
	
	printf("0x%x\n",s);
	putchar('\n');
	
	printf("0x%x\n",ss);
	putchar('\n');
	
	ff();
	
	int *p=new int(10);
	cout<<*p<<'\t'<<p<<endl;
	delete p;
	
	return 0;
 } 
