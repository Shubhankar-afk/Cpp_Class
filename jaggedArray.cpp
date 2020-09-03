#include<iostream>
using namespace std;
int main()
{
	int a, b, i, j;
	char data[5][5][20]={"Shubhankar", "Sneha", "Suvrat", "Tanvince", "Rishabh"};
	//Reads data and outputs it
	for (i=0; i<5; i++){
		cout<<data[i]<<endl;
	}
	return 0;
}