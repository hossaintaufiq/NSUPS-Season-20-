#include<iostream>
using namespace std;

int main(){

    int a[100];
    int b[100];
    int ar=0;
    int br=0;
    for(int i=1;i<=3;i++){
        cin>>a[i];
    }
    for(int i=1;i<=3;i++){
        cin>>b[i];
    }
    for(int i=1;i<=3;i++){
        if(a[i]>b[i]){
            ar++;
        }
        else if(a[i]<b[i]){
            br++;
        }
        else if(a[i]=b[i]){
            continue;
        }
    }
    cout<< ar<<" "<<br<<endl;
}