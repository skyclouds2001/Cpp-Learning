//#include<iostream>
//using namespace std;
//
//struct Node {
//	int value;
//	Node* next;
//
//	Node(Node & n) {
//		this->next = n.next;
//		this->value = n.value;
//	}
//	Node() {
//		this->next = NULL;
//		this->value = 0;
//	}
//};
//
//class SeqList {
//public:
//	static const int SIZE = 1024;
//	Node value[SIZE];
//	int length;
//	int start;
//};
//
//SeqList seq;
//
//int main() {
//	Node ls;
//	int k;
//	cin >> k;
//
//	for (int i = seq.length + seq.start; i >= seq.start; --i) {
//		seq.value[i + k] = seq.value[i];
//		seq.value[i] = Node();
//	}
//	seq.start = k;
//
//	return 0;
//}
