#include<bits/stdc++.h> 
using namespace std ; 

int main(){
	int a[3],b[3];

	int apoint=0,bpoint=0;

	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	for(int i=0;i<3;i++){
		cin>>b[i];
	}

	for(int i=0;i<3;i++){
		if(a[i]>b[i]){
			apoint++;
		}
		else if(a[i]<b[i]){
			bpoint++;
		}
		// else {
		// 	continue; 
		// }
	}

	cout<<apoint<<" "<<bpoint;
}