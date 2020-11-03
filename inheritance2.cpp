#include <iostream>
using namespace std;
class BigBoi{
private:
	int privateIdBig=10;
public:
	int publicIdBig=30;
	int displayPrivate(){
		return privateIdBig;
	}
};

class SmolBoi : public BigBoi{
public:
	int publicIdSmol=32;
};

int main(){
	SmolBoi ob1;
	cout<<"publicIdSmol: "<<ob1.publicIdSmol<<endl;
	cout<<"publicIdBig: "<<ob1.publicIdBig<<endl;
	//cout<<ob1.privateIdBig<<endl;				//Private in parent class, so inaccessible
	cout<<"privateIdBig (using method): "<<ob1.displayPrivate()<<endl;
	return 0;
}