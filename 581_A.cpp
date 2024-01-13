#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;    //a = red socks,    b =blue socks
    cin>>a>>b;
    int diff_socks=0,same_socks=0;
    while(a!=0 && b!=0){
        diff_socks++;
        a = a-1;
        b = b-1;
    }
    while (a>=2)
    {
        same_socks++;
        a = a-2;
    }
    while (b>=2)
    {
        same_socks++;
        b = b-2;
    }
    // cout<<a<<" "<<b<<endl;
    cout<<diff_socks<<" "<<same_socks;
    return 0;
}