//#include<iostream>
//using namespace std;
//
//struct Node {
//	int value;
//	Node* next;
//};
//
//struct SeqList {
//	////Node** pos;
//	int length;
//};
//
//Node* head = NULL, * headE = NULL;
//SeqList* seq = NULL;
//
//int main() {
//	// load();
//
//	// ˳���
//	int length = 0;
//	Node* p = head;
//	while (p != NULL) {
//		++length;
//		p = p->next;
//	}
//
//	seq = new SeqList;
//	seq->length = length;
//	seq->pos = new Node*[length];
//
//	p = head;
//	int k = length - 1;
//	while (k >= 0) {
//		seq->pos[k] = p;
//		p = p->next;
//		--k;
//	}
//
//	// ��������
//	while (head != NULL) {
//		Node* p = head;
//		head = head->next;
//		p->next = headE;
//		headE = p;
//	}
//
//	return 0;
//}
