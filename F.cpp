#include<bits/stdc++.h>
using namespace std; 

int main(){
	int n;
	cin>>n;

	int a[n];
	int positive=0,negative=0,zero=0;

	for(int i=0;i<n; i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){
		if(a[i]>0){
			positive++;
		}
		else if(a[i]<0){
			negative++;
		}
		else zero++;
	}

	long  double positive_result= (double)positive/n;
	long double negative_result=(double)negative/n; 
	long  double zero_result=(double)zero/n;

	cout<<setprecision(6)<<positive_result<<endl;
	cout<<setprecision(6)<<negative_result<<endl;
	cout<<setprecision(6)<<zero_result;


}