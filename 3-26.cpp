//#include<iostream>
//using namespace std;
//
//class Queue {
//public:
//	int* sequ;  //pos
//	int rear;   //end
//	int quelen;   //len
//
//	const int SIZE = 100;
//
//	void push(int value){
//		if (this->quelen == SIZE)
//			exit(OVERFLOW);
//
//		++this->quelen;
//
//		++this->rear;
//		if (this->rear == SIZE)
//			this->rear = 0;
//		
//		this->sequ[this->rear] = value;
//	}
//	int pop() {
//		if (this->quelen == 0)
//			exit(OVERFLOW);
//
//		int value = this->sequ[this->rear];
//
//		--this->quelen;
//
//		if (this->rear == 0)
//			this->rear = SIZE;
//		--this->rear;
//
//		return value;
//	}
//	bool isFilled() {
//		return this->quelen >= SIZE;
//	}
//
//	Queue() {
//		this->rear = 0;
//		this->quelen = 0;
//		this->sequ = new int[SIZE];
//	}
//	~Queue() {
//		this->rear = 0;
//		this->quelen = 0;
//		delete this->sequ;
//		this->sequ = NULL;
//	}
//};
//
//void test(){
//	Queue q;
//	for (int i = 1; i < 50; ++i)
//		q.push(i);
//	for (int i = 1; i < 12; ++i)
//		cout << q.pop() << endl;
//}
//
//int main() {
//	test();
//	return 0;
//}
