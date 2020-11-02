#include <iostream>
using namespace std;

class Parent{
	protected:
		int protected_id=64;
};

class Child : public Parent{
	public:
		int id;
		Child(){
			cout<<"Default protected_id is: "<<protected_id<<endl;
		}

		void setId(int id){
			protected_id = id;
		}
		void displayId(){
			cout<<"protected_id = "<<protected_id;
		}
};

int main(){
	Child ob1;
	cout<<"Enter the protected_id to change default value: ";
	cin>>ob1.id;
	ob1.setId(ob1.id);
	ob1.displayId();
	return 0;
}