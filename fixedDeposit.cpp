#include <iostream>
#include <math.h>
using namespace std;
class FD{
	public:
		int fdno;
		string name;
		double amt;
		double interest;
		double maturityAmt;
		int monthsNum;

		FD(double interest){
			cout<<"Fixed Deposit a/c: ";
			cin>>fdno;
			cin.ignore();
			cout<<"Account holder: ";
			getline(cin, name);
			cout<<"Balance: ";
			cin>>amt;
			cout<<"Rate of interest: "<<interest<<endl;
			cout<<"Number of months: ";
			cin>>monthsNum;
			int years = floor(monthsNum/12);
			maturityAmt=amt*pow((1+(interest/100)), years);
			cout<<"Maturity amount: "<<maturityAmt<<endl;
		}
};

int main(){
	FD fd1(10);
	return 0;
}