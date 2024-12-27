#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n; 
	cin>>n; 

	for(int i=0;i<n; i++){

		for(int k=i;k<n-1;k++){
			cout<<" ";
		}

		for(int j=n-i-1;j<n;j++){
			cout<<"#";
		}

		cout<<endl;
	}
}