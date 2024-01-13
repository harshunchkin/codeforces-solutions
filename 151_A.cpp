#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    // int total_vol = k*l;
    // int total_lslice = c*d;
    //n no of friends
    //per toast elimination
    cout<<min(min((k*l)/nl,(c*d)),p/np)/n;
    return 0;
}