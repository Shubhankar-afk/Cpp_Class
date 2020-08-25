#include <iostream>
using namespace std;
int main(){
	int num, reverse;
	cout<<"Enter the number to reverse: ";
	cin>>num;
	while(num>0){
		reverse=num%10;
		cout<<reverse;
		num/=10;
	}
}