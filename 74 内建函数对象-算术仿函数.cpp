#include<iostream>
#include<functional> 
#include<algorithm>
using namespace std;

//	算数仿函数   

int main() {
	
//	plus  加 
	plus<int> p;
	cout<< p(50, 30)<<endl;
//	minus  减 
//	multiplies  乘 
//	divides  除 
//	modulus  取模 
//	negate  取反 
	negate<int> n;
	cout<< n(50)<<endl;
	
	return 0;
} 
