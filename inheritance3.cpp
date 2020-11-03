#include <iostream>
using namespace std;
class Parent{
public:
	int x=10;
private:
	int y=20;
protected:
	int z=40;
};

class PublicChild : public Parent{
	PublicChild(){
		cout<<"x: "<<x<<endl;
		cout<<"y: "<<y<<endl;
		cout<<"z: "<<z<<endl;
	}
};

class PrivateChild : private Parent{
	PrivateChild(){
		//cout<<"x: "<<x<<endl;
		//cout<<"y: "<<y<<endl;
		//cout<<"z: "<<z<<endl;
	}
};

class ProtectedChild : protected Parent{
	ProtectedChild(){
		cout<<"x: "<<x<<endl;
		//cout<<"y: "<<y<<endl;
		cout<<"z: "<<z<<endl;
	}
};

int main(){
	//PublicChild pubChild1;
	//PrivateChild privChild1;
	ProtectedChild protChild1;
}