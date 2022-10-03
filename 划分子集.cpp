//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//const int SIZE = 9;
//
//int relation[SIZE][SIZE] = {
//	{0, 1, 0, 0, 0, 0, 0, 0, 0},
//	{1, 0, 0, 0, 1, 1, 0, 1, 1},
//	{0, 0, 0, 0, 0, 1, 1, 0, 0},
//	{0, 0, 0, 0, 1, 0, 0, 0, 1},
//	{0, 1, 0, 1, 0, 1, 1, 0, 1},
//	{0, 1, 1, 0, 1, 0, 1, 0, 0},
//	{0, 0, 1, 0, 1, 1, 0, 0, 0},
//	{0, 1, 0, 0, 0, 0, 0, 0, 0},
//	{0, 1, 0, 1, 1, 0, 0, 0, 0}
//};
//
//int group[SIZE] = { 0 };
//
//bool isOut[SIZE] = { 0 };
//
//int main(int argc, const char* args) {
//	for (int i = 0; i < SIZE; ++i) {
//		group[i] = 0;
//		isOut[i] = false;
//	}
//
//	int groupNum = 0;
//	int isOutNum = 0;
//	int groupElementNum = 0;
//
//	do {
//		isOutNum = 0;
//		groupElementNum = 0;
//
//		for (int i = 0, j = 0; i < SIZE; ++i) {
//			if (isOut[i])
//				continue;
//
//			for (j = 0; j < groupElementNum; ++j) {
//				if (relation[i][j] == 1) {
//					break;
//				}
//			}
//
//			if (j == groupElementNum) {
//				group[i] = groupNum;
//				++isOutNum;
//				++groupElementNum;
//				isOut[i] = true;
//			}
//		}
//
//		++groupNum;
//	} while (isOutNum < SIZE);
//
//	cout << "×éÊý£º" << groupNum << endl;
//
//	return 0;
//}
