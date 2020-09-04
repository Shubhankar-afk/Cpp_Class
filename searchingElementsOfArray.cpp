#include<iostream>
#include <algorithm>
using namespace std;

//Function to covert strings to lower case to make case insensitive comparison
int comparison(string s1, string s2){
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
   if(s1==s2)
      return 1;
   return 0;
}

int main(){
	string studentData[3][5]={{"Shubhankar", "Sneha", "Suvrat", "Rishabh", "Tanvince"}, {"30-CSE-19", "86-CSE-19", "02-CSE-19", "42-CSE-19", "82-CSE-19"}, {"A2", "A2", "A2", "A2", "A2"}};
	int i, j, k;
	string check;
	findDetails: cout<<"Enter a name or roll number to find details: ";
	getline(cin, check);
	for(j=0; j<5; j++){
		for(i=0; i<2; i++){
			if(comparison(check, studentData[i][j])){
				break;
			}
			else{
				continue;
			}
		}
		if(comparison(check, studentData[i][j])){
			break;
		}
		if(j==4){
			cout<<"Error 404";
			exit(0);
		}
	}
	cout<<studentData[0][j]<<" - "<<studentData[1][j]<<" - "<<studentData[2][j];
}