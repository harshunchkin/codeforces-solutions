#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    int k = n-a-1;
    int ans;
    if(k>b){
        ans = b+1;
    }     
    else{
        ans = k+1;
    }
    cout<<ans;
    return 0;
}