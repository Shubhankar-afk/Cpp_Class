//Dis iz bizness
#include <iostream>
using namespace std;
int main(){
	int fact=1, count, i;
	cout<<"Type a number for factorial\n";
	cin>>count;
	for(i=1; i<=count; i++){
		fact=fact*i;
	}
	cout<<"The factorial of "<<count<<" = "<<fact;
}
