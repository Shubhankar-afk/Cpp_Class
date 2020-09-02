#include<iostream>
using namespace std;
int main()
{
	int a, b, i, j;
	char name[5][20]={"Shubhankar", "Sneha", "Suvrat", "Tanvince", "Rishabh"};
	int roll[5]={30, 86, 02, 82, 42};
	for (i=0; i<5; i++){
		cout<<roll[i]<<" - "<<name[i]<<endl;
	}
	return 0;
}