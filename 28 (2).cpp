//#include<iostream>
//using namespace std;
//
//struct Node {
//	int value;
//	Node* next;
//};
//
//Node* head = NULL,* head1 = NULL,* head2 = NULL;
//
//int main() {
//	// load();
//
//	while (head1 != NULL || head2 != NULL) {
//		Node* pos = NULL;
//		if (head1 == NULL)
//			pos = head2, head2 = head2->next;
//		else if (head2 == NULL)
//			pos = head1, head1 = head1->next;
//		else if (head1->value < head2->value)
//			pos = head1, head1 = head1->next;
//		else
//			pos = head2, head2 = head2->next;
//
//		pos->next = head;
//		head = pos;
//	}
//
//	return 0;
//}
