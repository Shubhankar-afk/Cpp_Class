#include<iostream>
using namespace std;
int main(){
	int var1, var2, var3;
	cout<<"Enter the first number: ";
	cin>>var1;
	cout<<"Enter the second number: ";
	cin>>var2;
	cout<<"Enter the third number: ";
	cin>>var3;
	if(var1>=var2&&var1>=var3){
		cout<<var1<<" is the greatest number.";
	}
	else if(var2>=var1&&var2>=var3){
		cout<<var2<<" is the greatest number.";
	}
	else if(var3>=var2&&var3>=var3){
		cout<<var3<<" is the greatest number.";
	}
}