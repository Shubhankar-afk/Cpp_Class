#include <iostream>
using namespace std;

class User{
public:
	string name;
	string email;

	istream & operator >> (istream &in);
	ostream & operator << (ostream &out);

};

istream & operator >> (istream &in, User &user){
	cout<<"Enter name: ";
	getline(in, user.name);
	cout<<"Enter email: ";
	getline(in, user.email);
	return in;
}

ostream & operator << (ostream &out, User &user){
	out<<"Name: "<<user.name<<endl<<"Email: "<<user.email<<endl;
	return out;
}

int main(){
	User user[3];
	for(int i=0; i<3; i++){
		cin>>user[i];
	}
	cout<<"\nNow their info displayed\n";
	for(int i=0; i<3; i++){
		cout<<user[i];
	}
	return 0;
}