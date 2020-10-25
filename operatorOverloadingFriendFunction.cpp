#include <iostream>
using namespace std;
class Student{
	char grade;
	public:
		string name;
		int rollNum;

		friend istream & operator >> (istream &in, Student &student);
		friend ostream & operator << (ostream &out, Student &student);
};

istream & operator >> (istream &in, Student &student){
	cout<<"Enter the name of student: ";
	getline(in, student.name);
	cout<<"Enter the roll number: ";
	in>>student.rollNum;
	cout<<"Select a grade (A, B, C): ";
	in>>student.grade;
	return in;
}

ostream & operator << (ostream &out, Student &student){
	out<<"\nName: "<<student.name<<endl<<"Roll number: "<<student.rollNum<<endl;
	if(student.grade=='A' || student.grade=='B' || student.grade=='C' || student.grade=='a' || student.grade=='b' || student.grade=='c')
		out<<"Grade: "<<char(toupper(student.grade));
	else
		out<<"Grade: N/A";
	return out;
}

int main(){
	Student student1;
	cin>>student1;
	cout<<student1;
	return 0;
}