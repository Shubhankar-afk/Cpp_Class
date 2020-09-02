#include<iostream>
using namespace std;
int main()
{
	int i, j;
	string data[2][20]={{"Shubhankar", "Sneha", "Suvrat", "Tanvince", "Rishabh"},
	{"30", "86", "02", "82", "42"}};
	for (i=0; i<5; i++){
		for(j=0; j<2; j++){
			if(j==1){
				cout<<" - ";
				cout<<data[j][i]<<endl;
				break;
			}
			cout<<data[j][i];
		}
	}
	return 0;
}