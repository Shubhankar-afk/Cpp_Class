#include <iostream>
using namespace std;

//Class of name "Time" declared
class Time{
	public:

		//Class public members declared
		int hours;
		int minutes;
		int seconds;

		//Function to accept time from user and storin it in objects
		void accept(){
			cout<<"Hours: ";
			cin>>hours;
			cout<<"Minutes: ";
			cin>>minutes;
			cout<<"Seconds: ";
			cin>>seconds;
		}

		//Function to display the time
		void display(){
			 cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
		}

		//Funtion to compare times
		void checkEquality(Time obj1, Time obj2){
			if(obj1.hours==obj2.hours && obj1.minutes==obj2.minutes && obj1.seconds==obj2.seconds){
				cout<<"Time 1 and Time 2 are equal.\n";
			}
		}
		
};

int main(){
	int count=0;
	cout<<"Enter the time using the HH/MM/SS format\n";
	Time time1;
	time1.accept();
	cout<<"Time 1: ";
	time1.display();
	cout<<"Enter the time using the HH/MM/SS format\n";
	Time time2;
	time2.accept();
	cout<<"Time 2: ";
	time2.display();
	Time time3;
	time3.checkEquality(time1, time2);
	return 0;
}