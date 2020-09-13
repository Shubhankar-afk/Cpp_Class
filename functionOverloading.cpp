//Program works because different datatype of arguments in function defination and in function call

#include <iostream>
using namespace std;

void function(int i){
	cout<<"Value of i is "<<i<<endl;
}
void function(float j){
	cout<<"Value of j is "<<j<<endl;
}

int main(){
	function(10);
	function(12.4f);
	return 0;
}