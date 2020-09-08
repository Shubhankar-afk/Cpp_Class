#include<iostream>
using namespace std;
int main(){
	void *ptr;
	int a=9;
	float b=9.1;
	ptr=&a;
	cout<<"Address of a: "<<&a<<", Value of a: "<<a<<endl;
	cout<<"Address ptr pointing to: "<<ptr<<", Value of ptr: "<<*(int*)ptr<<endl;
	ptr=&b;
	cout<<"Address of b: "<<&b<<", Value of b: "<<b<<endl;
	cout<<"Address ptr pointing to: "<<ptr<<", Value of ptr: "<<*(float*)ptr<<endl;
	return 0;
}