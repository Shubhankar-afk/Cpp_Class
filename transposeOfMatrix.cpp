#include <iostream>
using namespace std;

void transpose(int arr[10][10], int m, int n){
	int i, j;
	for(j=0; j<n; j++){
		for(i=0; i<m; i++){
			if(i<m-1)
				cout<<arr[i][j]<<" ";
			else
				cout<<arr[i][j]<<endl;
		}
	}
}

int main(){
	int arr[10][10], i, j, m, n;
	cout<<"Enter the size of matrix: "<<endl;
	cin>>m>>n;
	cout<<"Enter the values of matrix: "<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}
	cout<<"Your matrix is:"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(j<n-1)
				cout<<arr[i][j]<<" ";
			else
				cout<<arr[i][j]<<endl;
		}
	}
	cout<<"Transpose of this matrix is:"<<endl;
	transpose(arr, m, n);
	return 0;
}