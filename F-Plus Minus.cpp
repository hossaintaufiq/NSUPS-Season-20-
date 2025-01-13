#include<iostream>
using namespace std;

int main()
{
    double p=0;
    double n=0;
    double z=0;
    int x;
    cin>>x;
    int a[x];
    for (int i=1;i<=x;i++){
        cin>>a[i];
    }
    for(int i=1;i<=x;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else if(a[i]==0){
            z++;
        }
    }
    double pr=p/x;
    double nr=n/x;
    double zr=z/x;

    cout<<pr <<endl;
    cout<<nr<<endl;
    cout<<zr<<endl;

}