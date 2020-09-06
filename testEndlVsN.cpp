//Output buffer cleared everytime endl is executed
#include <iostream>
using namespace std;
int main(){
	for(char i='A'; i <= 'Z'; i++){
		cout << i << endl;
		cout << i << "\n";
	}
	return 0;
}