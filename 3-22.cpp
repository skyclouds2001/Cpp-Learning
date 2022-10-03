//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//int length;
//
//struct Node {
//	char c;
//	Node* next;
//
//	Node(char c, Node* next) {
//		this->c = c;
//		this->next = next;
//	}
//};
//
//Node* head = NULL;
//
//void input(string s) {
//	Node* pos = NULL;
//
//	for (unsigned i = 0; i < s.length(); ++i) {
//		Node n = Node(s[i], NULL);
//
//		if (pos == NULL) {
//			head = &n;
//			pos = &n;
//		}
//		else {
//			pos->next = &n;
//			pos = &n;
//		}
//	}
//
//	length = s.length();
//}
//
//int main() {
//	string s;
//	cin >> s;
//	input(s);
//	stack<char> sta = stack<char>();
//
//	Node* pos = head;
//
//	for (unsigned i = 0; i < s.length() / 2; ++i) {
//		sta.push(pos->c);
//		pos = pos->next;
//	}
//
//	if (s.length() % 2 == 1) {
//		pos = pos->next;
//	}
//
//	while (pos != NULL && sta.top() == pos->c) {
//		pos = pos->next;
//		sta.pop();
//	}
//
//	cout << (pos == NULL) << endl;
//
//	return 0;
//}
