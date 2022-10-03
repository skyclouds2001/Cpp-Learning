//#pragma warning(disable:4996)
//
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
//int read(bool & flag) {
//	char t = 0;
//	int value = 0;
//	bool sym = true;
//
//	do {
//		if (scanf("%c", &t) == EOF || t == '\n') {
//			flag = false;
//			return value;
//		}
//	} while (t < '0' || t > '9');
//
//	do {
//		value *= 10;
//		value += (t - '0');
//		if (scanf("%c", &t) == EOF || t == '\n') {
//			flag = false;
//			return value;
//		}
//	} while (t >= '0' && t <= '9');
//
//	return sym ? value : -value;
//}
//
//int add(Node* & head) {
//	int t = 0;
//	bool flag = true;
//	Node* s = NULL, * pos = NULL;
//	while (flag) {
//		int t = read(flag);
//		if(t < 0)
//			return 0;
//		
//		
//		s = new Node(t, NULL);
//		if (pos != NULL)
//			pos->next = s;
//		else
//			head = s;
//		pos = s;
//		s = NULL;
//		
//		if (!flag)
//			return 0;
//	}
//	return 0;
//}
//
//int main() {
//	Node* head1 = NULL, * head2 = NULL;
//	Node* head0 = NULL;
//
//	//input
//	add(head1);
//	add(head2);
//
//	//do
//	Node* p = head1, * q = head2, * s = NULL;
//	int t = 0;
//	while (p != NULL || q !=NULL) {
//		if (p == NULL) {
//			s = q->next;
//			q->next = head0;
//			head0 = q;
//			q = s;
//		}
//		else if (q == NULL) {
//			s = p->next;
//			p->next = head0;
//			head0 = p;
//			p = s;
//		}
//		else if (p->value < q->value) {
//			s = p->next;
//			p->next = head0;
//			head0 = p;
//			p = s;
//		}
//		else {
//			s = q->next;
//			q->next = head0;
//			head0 = q;
//			q = s;
//		}
//	}
//
//	//output
//	Node* r = head0;
//	while (r != NULL) {
//		printf("%d ", r->value);
//		r = r->next;
//	}
//
//	return 0;
//}
