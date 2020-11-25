#include <iostream>
using namespace std;

double divisionFunc(int, int);

int main(){

	int numerator, denominator;
	double quotient;
	cout<<"Enter the numerator: ";
	cin>>numerator;
	cout<<"Enter the denominator: ";
	cin>>denominator;
	quotient = divisionFunc(numerator, denominator);
	cout<<"Quotient = "<<quotient;
	int n =9;
	cout<<n;
	return 0;
}

double divisionFunc(int num1, int num2){
	/*try{
		if(num2 != 0)
			return double(num1)/double(num2);
		else
			throw num2;
	}
	catch(int num2){
		cout<<"(Undefined) ";
		return 0;
	}*/

	return double(num1)/double(num2);
}