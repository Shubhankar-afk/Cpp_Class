//Program to overload >, < and == operators
#include <iostream>
using namespace std;
class Sample{
	private: int a;
	public: Sample(int a1){
		a = a1;
	}
	bool operator > (Sample ob1){
		return a > ob1.a;
	}

	bool operator < (Sample ob1){
		return a < ob1.a;
	}

	bool operator == (Sample ob1){
		return a == ob1.a;
	}
};
int main() {
	
	Sample ob1(20), ob2(20);
	if (ob1 > ob2)
		cout<<"ob1 > ob2\n";
	else if(ob1 < ob2)
		cout<<"ob1 < ob2\n";
	else if(ob1 == ob2)
		cout<<"ob1 == ob2\n";
	return 0;
}