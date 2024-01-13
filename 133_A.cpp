#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    int o =0;
    for(auto& i:p){
        if(i=='H' || i=='Q' || i=='9'){
            o++;
            cout<<"YES";
            break;
        }
    }
    if(o!=1)    cout<<"NO";
    return 0;
}