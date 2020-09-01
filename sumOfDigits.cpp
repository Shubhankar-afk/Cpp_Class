#include <iostream>
using namespace std;
int main(){
	long long num, temp, sum=0;
	cout<<"Enter the number to reverse: ";
	cin>>num;
	while(num>0){
		temp=num%10;
		sum+=temp;
		num/=10;
	}
	cout<<sum;
}