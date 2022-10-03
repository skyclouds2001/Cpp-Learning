//#include<iostream>
//#include<cstdio>
//using namespace std;
//
//class Node {
//public:
//	int value;
//	Node* next;
//
//	Node(int value, Node* next) {
//		this->value = value;
//		this->next = next;
//	}
//};
//
//int main() {
//	Node* head = NULL;
//	Node* head0 = NULL;
//
//	//input
//	int t = 0;
//	Node* s = NULL, * pos = NULL;
//	while (cin >> t) {
//		s = new Node(t, NULL);
//		if (pos != NULL)
//			pos->next = s;
//		else
//			head = s;
//		pos = s;
//		s = NULL;
//	}
//
//	//change
//	Node* p = head, * q = NULL;
//	while (p != NULL) {
//		q = head0;
//		head0 = p;
//		p = p->next;
//		head0->next = q;
//		q = NULL;
//	}
//
//	//output
//	Node* r = head0;
//	while (r != NULL) {
//		cout << r->value << " ";
//		r = r->next;
//	}
//	cout << endl;
//
//	return 0;
//}
