#include<iostream>
#include<functional> 
#include<algorithm>
using namespace std;

//	�����º���   

int main() {
	
//	plus  �� 
	plus<int> p;
	cout<< p(50, 30)<<endl;
//	minus  �� 
//	multiplies  �� 
//	divides  �� 
//	modulus  ȡģ 
//	negate  ȡ�� 
	negate<int> n;
	cout<< n(50)<<endl;
	
	return 0;
} 
