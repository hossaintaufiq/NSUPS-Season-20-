#include<bits/stdc++.h>
using namespace std;

int main(){
    int val;
    long long int sum=0;
    vector<int>arr;
    for(int i=0;i<5;i++ ){
        cin>>val;
        sum+=val;
        arr.push_back(val);
    }
    sort(arr.begin(),arr.end());
    cout<<sum-arr[4]<<" "<<sum-arr[0];


}