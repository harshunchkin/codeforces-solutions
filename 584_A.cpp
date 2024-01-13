#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    // string s = to_string(t);
    if(t==10 && n==1){
        cout<<-1;
    }
    else if(t<10 ){
        int rem = n-1;
        cout<<t;
        while(rem!=0){
            cout<<t;
            rem--;
        }
    }
    else{
        if(n<=9){
            cout<<n;
            while(n!=1){
                cout<<0;
                n--;
            }
        }
        else if(n>9 && n<=99){
            cout<<n;
            while(n!=2){
                cout<<0;
                n--;
            }
        }
        else{
            cout<<n;
            while(n!=3){
                cout<<0;
                n--;
            }
        }
    }

}