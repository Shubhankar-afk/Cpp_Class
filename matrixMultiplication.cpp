#include <iostream>
using namespace std;
void matrixMultiplication(int arr[20][20], int arr2[20][20], int m, int n, int q){
	int product[20][20], i, j, k, sum=0;
	for(i=0; i<m; i++){
		for(j=0; j<q; j++){
			for(k=0; k<n; k++){
				sum+=arr[i][k]*arr2[k][j];
			}
			product[i][j]=sum;
			sum=0;
			if(j<q-1)
				cout<<product[i][j]<<" ";
			else
				cout<<product[i][j]<<endl;
		}
	}
}
int main(){
	int m, n, p, q, arr1[20][20], arr2[20][20], i, j;
	cout<<"Enter the size of the first matrix: ";
	cin>>m>>n;
	cout<<"Enter the values of matrix elements:"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the size of the second matrix: ";
	cin>>p>>q;
	if(n!=p){
		cout<<"These matrices can't be multiplied!";
	}
	else{
		cout<<"Enter the values of matrix elements:"<<endl;
		for(i=0; i<p; i++){
			for(j=0; j<q; j++){
				cin>>arr2[i][j];
			}
		}	
	}
	cout<<"The product of the matrices is:"<<endl;
	matrixMultiplication(arr1, arr2, m, n, q);
}