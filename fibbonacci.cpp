#include <iostream>
using namespace std;
void fib(int a);

int main(){
	int a, b, count;
	cout<<"Enter the number of fibbonacci iterations: ";
	cin>>count;
	fib(count);
	return 0;
}

void fib(int count){
	int a=0, b=1, i=0, c;
	do{
		if(i==0){
			cout<<a<<endl;
		}
		if(i==1){
			cout<<b<<endl;
		}
		c=a+b;
		if(i>1){
			a=b;
			b=c;
			cout<<c<<endl;
		}
		i++;
		count--;
	}while(count);
}