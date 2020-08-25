#include <iostream>
using namespace std;
int main(){
	float f, c;
	int choice;
	cout<<"Press 1 to calculate temperature in Fahrenheit\nOr 2 to calculate temperature in Celcius: ";
	cin>>choice;
	if(choice==1){
		cout<<"Enter temprature in Celcius: ";
		cin>>c;
		f=(9.0*c/5.0)+32;
		cout<<"Temperature in Fahrenheit is: "<<f;
	}
	else if(choice==2){
		cout<<"Enter temperature in Fahrenheit: ";
		cin>>f;
		c=(f-32)*(5.0/9.0);
		cout<<"Temperature in Celcius is: "<<c;		
	}
	return 0;
}