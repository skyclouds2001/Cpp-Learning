//#include<iostream>
//using namespace std;
//
//struct Node {
//	int value;
//};
//
//class Area {
//public:
//	int length;
//	Node* pos;
//	int size;
//	Area() {
//		this->length = 0;
//		this->size = SIZE;
//		this->pos = new Node[SIZE];
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
//		array.pos[i].value = t;
//		++i;
//		++array.length;
//
//		if (i == array.size) {
//			Node* q = new Node[2 * array.size];
//			array.size *= 2;
//			memcpy(q, array.pos, sizeof(Node) * array.length);
//			delete array.pos;
//			array.pos = q;
//		}
//	}
//	--array.length;
//	int k = array.pos[array.length].value;
//	array.pos[array.length].value = 0;
//	// over impossible
//
//	for (int j = array.length - 1; j >= 0 ; --j) {
//		array.pos[j + k] = array.pos[j];
//	}
//	for (int j = 0; j < k; ++j) {
//		array.pos[j] = array.pos[j + array.length];
//	}
//
//	for (int i = 0; i < array.length; ++i) {
//		cout << array.pos[i].value << " ";
//	}
//
//	return 0;
//}
