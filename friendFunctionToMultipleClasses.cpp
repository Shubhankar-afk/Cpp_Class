//Not ideal to use friend functions for multiple classes
#include <iostream>
using namespace std;

class SmolBoi;		//forward declaration of SmolBoi class

class BigBoi{
private:
	string status = "Gold";
public:
	friend void checkStatus(BigBoi pp1, SmolBoi pp2);
};

class SmolBoi{
private:
	string status = "Silver";
public:
	friend void checkStatus(BigBoi pp1, SmolBoi pp2);
};

void checkStatus(BigBoi pp1, SmolBoi pp2){
	cout<<pp1.status<<endl;
	cout<<pp2.status<<endl;
}

int main(){
	BigBoi pp1;
	SmolBoi pp2;
	checkStatus(pp1, pp2);
	return 0;
}