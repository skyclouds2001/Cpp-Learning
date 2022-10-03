//#include<iostream>
//using namespace std;
//
//class Area {
//public:
//	int length;
//	int* pos;
//	int size;
//	Area() {
//		this->length = 0;
//		this->size = SIZE;
//		this->pos = new int[SIZE];
//	}
//private:
//	const int SIZE = 20000;
//};
//
//int main() {
//	Area array = Area();
//
//	int t = 0, i = 0;
//	while (cin >> t) {
//		array.pos[i] = t;
//		++i;
//		++array.length;
//
//		if (array.length == array.size) {
//			int* q = new int[2 * array.size];
//			array.size *= 2;
//			memcpy(q, array.pos, sizeof(int) * array.length);
//			delete array.pos;
//			array.pos = q;
//		}
//	}
//
//	for (int i = 0, j = array.length - 1; i < j; ++i, --j) {
//		swap(array.pos[i], array.pos[j]);
//	}
//
//	for (int i = 0; i < array.length; ++i) {
//		cout << array.pos[i] << " ";
//	}
//
//	return 0;
//}