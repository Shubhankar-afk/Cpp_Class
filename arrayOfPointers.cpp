#include <iostream>
using namespace std;
int main(){
	int a[5]={2, 3, 4, 5, 6};
	int *p=a;
	for(int i=0; i<5; i++){
		cout<<*(p+i)<<endl;
	}
	return 0;
}