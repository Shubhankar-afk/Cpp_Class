#include <iostream>
using namespace std;
class User{
private:
	string name;
	int age;
public:
	User(string userName, int userAge){
		name = userName;
		age = userAge;
	}
	User(const User &oldUser){
		name = oldUser.name;
		age = oldUser.age;
	}
	friend ostream & operator << (ostream &out, User &user);
};

ostream & operator << (ostream &out, User &user){
	out<<"Name: "<<user.name<<endl<<"Age: "<<user.age<<endl;
	return out;
}

int main(){
	User user1("Jinu", 21);
	cout<<"Details of user1: \n";
	cout<<user1;
	User user2 = user1;
	cout<<"Details of user2 using copy constructor: \n";
	cout<<user2;
	User user3 = user1;
	cout<<"Details of user3 using assignment operator: \n";
	cout<<user3;
	return 0;
}