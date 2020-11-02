#include <iostream>
using namespace std;
namespace first{
	int val=10;
}
int val=20;
int main(){
	cout<<val<<endl;
	int val=30;
	cout<<first::val<<endl;
	cout<<val<<endl;
	return 0;
}