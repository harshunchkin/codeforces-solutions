#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(abs(a-b)==abs(b-c)){
        cout<<"yes ap";
    }
    else{
        if(a==max(max(a,b),c)){ //increasing ap
            a = a*(b+(b-c));
            if(abs(a-b)==abs(b-c)){
                cout<<"yes ap";
            }
            else    cout<<"not ap";
        }
        else
    }
}