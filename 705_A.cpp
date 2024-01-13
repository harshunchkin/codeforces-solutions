#include<bits/stdc++.h>
using namespace std;
// hulk feelings dude - he did smash ya!! do with recursion manh u can do if everyone can you can too
int main(){
    int n;
    cin>>n;
    if (n==1){
        cout<<"I hate it ";
    }
    else if (n>1){
        cout<<"I hate that ";
    }
    for(int i=2;i<n;i++){
        if (i%2==1 && i!=n){
            cout<<"I hate that ";
        }
        if(i%2==0 &&i!=n){
            cout<<"I love that ";
        }
    }
    if (n%2==0 && n>1){
        cout<<"I love it ";
    }
    if (n%2==1 && n>1){
        cout<<"I hate it ";
    }
    return 0;
}