#include <iostream>
using namespace std;

static int count=1;

class Parent{
public:
	Parent(){
		cout<<"This is parent called "<<count<<" times\n";
		count+=1;
	}
};

class Child1 : public Parent{
public:
	Child1(){
		cout<<"This is child1\n";
	}
};

class Child2 : public Parent{
public:
	Child2(){
		cout<<"This is child2\n";
	}
};

class Child3 : public Parent{
public:
	Child3(){
		cout<<"This is child3\n";
	}
};

int main(){
	Child1 child1;
	Child2 child2;
	Child3 child3;
	return 0;
}