#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std;

//	����bool���͵ķº���    ν��
//	һԪν��  

class Great{
	public:
		bool operator() (int v) {
			return v > 5;
		}
};

int main() {
	
	vector<int> v;
	for(int i = 0; i < 10; ++i) {
		v.push_back(i * i * i - 3 * i * i + 2);
	}
	
	//	find_if()����һ��ָ�����ҵ����ݵĵ�����  
	vector<int>::iterator it = find_if(v.begin(), v.end(), Great());
	
	if(it == v.end())
		cout<< "Unfound"<<endl;
	else
		cout<< "Found"<<endl;
	
	// system("pause");
	
	return 0;
} 
