#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long num, temp;
	int i=0, count=0;
	int forward[50], reverse[50];
	cout<<"Enter a number to check for palindrome: ";
	cin>>num;
	temp=num;
	while(temp!=0){
		reverse[i]=temp%10;
		i++;
		count++;
		temp/=10;
	}
	for(i=0; i<count; i++){
		forward[i]=reverse[(count-1)-i];
	}
	temp=0;
	/*
	//Test code to check if values are placed correctly.
	for(i=0; i<count; i++){
		cout<<"Forward: "<<forward[i]<<" Reverse: "<<reverse[i]<<endl;
	}*/
	
	for(i=0; i<count; i++){
		if(forward[i]==reverse[i]){
			if(temp==count-1){
				cout<<"The given number is a palindrome!";
			}
			temp++;
		}
		else if(forward[i]!=reverse[i]){
			cout<<"The given number is not a plaindrome!";
			break;
		}
	}
	return 0;
}