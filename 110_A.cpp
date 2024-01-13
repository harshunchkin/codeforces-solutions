#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;  //why the fuck are you converting to string takes a lot of time use ur brain dumbass
    cin>>n;
    int count=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n=n/10;
    }
    if (count==4||count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}