#include<bits/stdc++.h>
using namespace std;

const int SIZE=10;

template<typename T>
class MYARRAY{
	public:
		T *p;
		int arraysize;
		int arraynum;
		MYARRAY(int V)
		{
			this->arraysize=(V/SIZE+1)*SIZE;
			this->p=new T[this->arraysize];
			this->arraynum=0;
		}
		~MYARRAY()
		{
			if(p)	delete [] p;
			this->p=NULL;
			this->arraysize=0;
			this->arraynum=0;
		}
		MYARRAY(const MYARRAY &arr)
		{
			this->arraynum=arr.arraynum;
			this->arraysize=arr.arraysize;
			this->p=new T[arr.arraysize];
			for(int i=0;i<this->arraynum;++i)
				(this->p)[i]=(arr.p)[i];
		}
		MYARRAY & operator=(MYARRAY &arr)		//=> a=b=c
		{
			if(this->p)
			{
				delete [] this->p;
				this->p=NULL;
				this->arraynum=0;
				this->arraysize=0;
			}
			this->arraynum=arr.arraynum;	//???
			this->arraysize=arr.arraysize;
			this->p=new T[this->arraysize];
			for(int i=0;i<this->arraynum;++i)
				this->p[i]=arr.p[i];
		}
		void push(const T & val)
		{
			if(this->arraysize==this->arraynum)
				return;
			this->p[this->arraynum]=val;
			this->arraynum++;
		}
		void pop(void)
		{
			if(this->arraynum==0)
				return;
			this->arraynum--;
			this->p[this->arraynum]=0;
		}
		T operator[](int index)
		{
			return this->p[index];
		}
};

class PERSON{
	public:
		int age;
		string name;
};

int main()
{
	MYARRAY<int> p1(17),p2(34);
	MYARRAY<PERSON> p3(12);
	PERSON s1;
	
	return 0;
}
