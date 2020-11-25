#include <iostream>
using namespace std;
template<typename Num>
Num total(Num x, Num y){
	return x+y;
}

int main(){
	cout<<"7 + 9 = "<<total(7, 9)<<endl;
	cout<<"7.3 + 9.5 = "<<total(7.3, 9.5)<<endl;
	cout<<"b + tab = "<<total('b', '\t')<<endl;
	return 0;
}