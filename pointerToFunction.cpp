#include <iostream>
using namespace std;
 void changeReferenceVal(int *val){
 	*val = 20;
 }

 int main(){
 	int a = 10;
 	int *pta = &a;
 	cout<<"Value of - a - inside main: "<<a<<endl;
 	changeReferenceVal(&a);
 	cout<<"Value of - a - after function call: "<<a<<endl;
 	return 0;
 }