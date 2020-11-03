#include <iostream>
using namespace std;

class CString{
	public:
		string aString;

		CString operator + (CString secondString){
			CString newString;
			int i;
			for(i=0; secondString.aString[i]; i++)
				;
			for(int j=0; j<i; j++){
				aString+=secondString.aString[i];
			}
			for(i=0; aString[i]; i++)
				;
			for(int j=0; j<i; i++){
				newString.aString+=aString;
			}
			return newString;
		}

		bool operator == (CString secondString){
			CString newString;
			int i, j;
			for(i=0; aString[i]; i++)
				;
			for(j=0; secondString.aString[j]; j++)
				;
			if(i!=j)
				return false;
			for(i=0; i<j; i++){
				if(aString[i]==secondString.aString[i])
					return true;
			}
			return false;
		}

};

int main(){

	CString str1, str2;
	string addedString;
	cout<<"Enter first string: ";
	getline(cin, str1.aString);
	cout<<"Enter second string: ";
	getline(cin, str2.aString);

	addedString = str1.aString + str2.aString;
	cout<<"Combinations of both strings: "<<addedString<<endl;
	
	if(str1.aString==str2.aString)
		cout<<"Both the strings are same"<<endl;
	else
		cout<<"Both the strings are different"<<endl;
	return 0;

}