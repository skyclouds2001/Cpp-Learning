//#include<iostream>
//#include<cctype>
//#include<cstdlib>
//#include<cmath>
//using namespace std;
//
//class Node {
//public:
//	Node* next = NULL;
//	char index = 0;
//
//	/*Node(char index = ' ', Node* next = NULL) {
//		this->index = index;
//		this->next = next;
//	}*/
//};
//
//Node* head0 = NULL, * head[3] = { NULL, NULL, NULL };
//const int NUMBER = 100;
//
///* 生成单链表 */
////void upload(void) {
////	srand(time(NULL));
////
////	head0 = new Node;
////	head0->index = (char)(int)(rand() * 127);
////	head0->next = NULL;
////	Node* p = NULL, * q = head0;
////	for (int i = 1; i < NUMBER; ++i) {
////		p = new Node;
////		p->index = (char)(int)(rand() * 127);
////		p->next = NULL;
////		q->next = p;
////		q = q->next;
////	}
////}
//
//int main() {
//	/*upload();*/
//	Node* p = head0;
//
//	while (p != NULL) {
//		char t = p->index;
//		int k = 2;
//
//		if (isalpha(t))
//			k = 0;
//		if (isdigit(t))
//			k = 1;
//
//		if (head[k] == NULL) {
//			head[k] = p;
//			p = p->next;
//			head[k]->next = head[k];
//		}
//		else {
//			Node* q = p;
//			p = p->next;
//			q->next = head[k]->next;
//			head[k]->next = q;
//		}
//	}
//
//	return 0;
//}
