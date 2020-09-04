#include <iostream>
using namespace std;
int main(){
	int arr1[10][10], arr2[10][10], sum[10][10], i, j, m, n;
	cout<<"Enter the size of matrices :"<<endl;
	cin>>m>>n;
	cout<<"Enter the values of first matrix"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the values of second matrix"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"Sum of both matrices"<<endl;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			sum[i][j]=arr1[i][j]+arr2[i][j];
			if(j<n-1)
				cout<<sum[i][j]<<" ";
			else if(j==n-1){
				cout<<sum[i][j]<<endl;
			}
		}
	}
}