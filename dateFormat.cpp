#include <iostream>
#include <cstdlib>
using namespace std;

class Date{
	public:
		int day;
		int month;
		int year;

		istream & operator >> (istream &in);
		ostream & operator << (ostream &out);
};

istream & operator >> (istream &in, Date &date){
	cout<<"Enter the year: ";
	in>>date.year;
	cout<<"Enter the month: ";
	in>>date.month;
	cout<<"Enter the day: ";
	in>>date.day;

	//Accounting for leap years and date constraints otherwise exit

	if(date.year<0 || date.month>12 || date.day>31){
		cout<<"You have seleceted invalid parameters for the date.";
		exit(0);
	}

	else if(date.year%4==0){
		if(date.year&100==0 && date.year%400==0){
			switch (date.month){
				case 1:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 2:
				if(date.day<=29)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 3:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 4:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 5:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 6:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 7:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 8:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 9:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 10:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 11:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 12:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}
			}
		}
		switch (date.month){
				case 1:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 2:
				if(date.day<=29)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 3:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 4:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 5:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 6:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 7:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 8:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 9:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 10:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 11:
				if(date.day<=30)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}

				case 12:
				if(date.day<=31)
					return in;
				else{
					cout<<"You have seleceted invalid parameters for the date.";
					exit(0);
				}
		}
	}

	else{
		if(date.month==2){
			if(date.day<=28)
				return in;
			else
				exit(0);
		}
	}

	return in;
}

ostream & operator << (ostream &out, Date &date){
	out<<date.day<<":"<<date.month<<":"<<date.year;
	return out;
}

int main(){
	Date date1;
	cout<<"Enter the date"<<endl;
	cin>>date1;
	cout<<"The entered date is: ";
	cout<<date1;
	return 0;
}