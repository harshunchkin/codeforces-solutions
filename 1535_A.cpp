#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        // int l  = max(a,b);
        // int k = min(c,d);
        if(max(a,b)<min(c,d) || max(c,d)<min(a,b)){
            cout<<"NO"<<endl;
        }
        else    cout<<"YES"<<endl;
    }
    return 0;
}