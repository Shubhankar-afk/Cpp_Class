//Pointer of a certain datatype can't be assigned to a different datatype variable
#include <iostream>
using namespace std;
int main(){
	//float* ptr;
	int* ptr;
	float f=13.3;
	ptr = &f;
	cout<<"The value of *ptr is: "<<*ptr<<endl;
	cout<<"The value of ptr is: "<<ptr<<endl;
	return 0;
}