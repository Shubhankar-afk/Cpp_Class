//Program works because the number of parameters passed at function call

#include <iostream>
using namespace std;

int add(int a, int b){
	return a+b;
}

int add(int a, int b, int c){
	return a+b+c;
}

int main(){
	int a, b, c;
	cout<<"Enter 3 numbers: ";
	cin>>a>>b>>c;
	cout<<a<<" + "<<b<<" = "<<add(a, b)<<endl;
	cout<<a<<" + "<<b<<" + "<<c<<" = "<<add(a, b, c);
}