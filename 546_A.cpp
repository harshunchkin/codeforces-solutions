#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;  //n initial money //w bananas //k cost of first banana
    cin>>k>>n>>w;
    int tc=0;
    for (int i = 1; i <= w; i++)
    {
        tc = tc+i*k;
    }
    //borrow
    if(tc>=n) cout<<tc-n;
    else cout<<0;
    return 0;
}