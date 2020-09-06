#include<iostream>
#include <algorithm>
using namespace std;

//Function to convert a string to uppercase
string upperCase(string s1){
	transform(s1.begin(), s1.end(), s1.begin(), :: toupper);
	return s1;
}

//Function to convert a string to lowercase
string lowerCase(string s1){
	transform(s1.begin(), s1.end(), s1.begin(), :: tolower);
	return s1;
}

int main (){
	string name;
	cout<<"Enter your name: ";
	getline(cin, name);
	cout<<"You wrote your name as: "<<name<<endl;
	cout<<"Your name in uppercase: "<<upperCase(name)<<endl;
	cout<<"Your name in lowercase: "<<lowerCase(name)<<endl;
}