//Program works because number of arguments in the function call specifies which oveloaded function to call

#include <iostream>
using namespace std;
void function(int i){
	cout<<"Value of i is : "<<i<<endl;
}

void function(float a, int b){
	cout<<"Value of a is : "<<a<<endl;	
	cout<<"Value of b is : "<<b<<endl;	
}

int main(){
	function(12);
	return 0;
}