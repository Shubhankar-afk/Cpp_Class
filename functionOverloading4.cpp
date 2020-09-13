//Program doesn't work because of ambiguous function call, since same number of arguments and same data type of arguments

#include <iostream>
using namespace std;

void function(int a){
	cout<<"Value of a: "<<a<<endl;
}

int function(int &b){
	cout<<"Value of b: "<<b<<endl;
	return 0;
}

int main(){
	int x=10;
	function(x);
	return 0;
}