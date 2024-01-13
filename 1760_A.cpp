#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(min(min(a,b),c)<a && a<max(max(a,b),c))  ans.push_back(a);
        else if(min(min(a,b),c)<b && b<max(max(a,b),c))  ans.push_back(b);
        else    ans.push_back(c);
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}