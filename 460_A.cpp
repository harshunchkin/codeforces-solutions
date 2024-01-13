#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int count = n;
    while(n>=m){
        count = count+ (n/m);
        n = (n/m + (n%m));
    }
    cout<<count;
    return 0;
}