#include <iostream>
using namespace std;
class FD{
	public:
		int fdno;
		string name;
		double amt;
		double interest;
		double maturityAmt;
		int monthsNum;

		FD(double argInterest){
			interest=argInterest;
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
			maturityAmt=amt+((amt*interest*monthsNum)/(12*100));
			cout<<"Maturity amount: "<<maturityAmt<<endl;
		}
};

int main(){
	double rate;
	cout<<"Enter the interest rate: ";
	cin>>rate;
	FD fd1(rate);
	return 0;
}