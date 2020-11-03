#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int> data){
	cout<<"Size of vector inside function: "<<sizeof(data)/sizeof(data[0])<<endl;
	for (int member : data)
		cout<<member<<endl;
}

void displayArray(int *arr, int n){
	cout<<"Size of array inside function: "<<sizeof(arr)/sizeof(arr[0])<<endl;
	for (int i=0; i<n; i++)
		cout<<*(arr+i)<<endl;
}

int main(){
	vector<int> data = {1, 2, 3};
	int arr1[] = {5, 6, 7};
	cout<<"Size of vector inside main: "<<sizeof(data)/sizeof(data[0])<<endl;
	displayVector(data);
	int size = sizeof(arr1)/sizeof(arr1[0]);
	cout<<"Size of array inside main: "<<sizeof(arr1)/sizeof(arr1[0])<<endl;
	displayArray(arr1, size);
	return 0;
}