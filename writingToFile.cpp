#include <iostream>
#include <fstream>
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
	out<<<<user.name<<"\t\t"<<user.email<<endl;
	return out;
}

int main(){

	User user[3];

	for(int i=0; i<3; i++){
		cin>>user[i];
	}
	
	ofstream myFile;
	myFile.open("newText.txt");
	myFile << "\nName\t\tEmail\n";
	for(int i=0; i<3; i++){
		cout<<user[i];
	};
	myFile.close();
	return 0;
}