#include <iostream>
using namespace std;

class User{
private:
	int age;
public:
	string name;

	User(string name, int age){
		this->name = name;
		this->age = age;
	}

	friend inline void display(User user);
};

inline void display(User user){
	cout<<"Name: "<<user.name<<endl;
	cout<<"Age: "<<user.age<<endl;
}

int main(){
	User user1("Sith", 10);
	display(user1);
	return 0;
}