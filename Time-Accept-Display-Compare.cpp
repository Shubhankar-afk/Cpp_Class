#include <iostream>
using namespace std;

//Class of name "Time" declared
class Time{
	public:

		//Class public members declared
		int hours;
		int minutes;
		int seconds;
		int totalSeconds;

		//Operator == overloaded to compare times
		bool operator == (Time time){

			if(totalSeconds==time.totalSeconds){
				return true;
			}
			return false;
		}
		//Operator overloading of insertion and extraction operator
		ostream & operator<<(ostream &out);
		istream & operator>>(istream &in);
};

ostream & operator<<(ostream &out, Time &time){
	out<<time.hours<<":"<<time.minutes<<":"<<time.seconds;
	time.totalSeconds = 3600*time.hours + 60*time.minutes + time.seconds;
	return out;
}

istream & operator>>(istream &in, Time &time){
	cout<<"Enter the time using the HH/MM/SS format\n";
	in>>time.hours>>time.minutes>>time.seconds;
	return in;
}

int main(){

	Time time1;
	cin>>time1;
	cout<<"Time 1: ";
	cout<<time1<<endl;
	Time time2;
	cin>>time2;
	cout<<"Time 2: ";
	cout<<time2<<endl;
	Time time3;
	if(time1==time2)
		cout<<"Time1 = Time 2";
	return 0;
}