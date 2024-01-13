#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <char> ans;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c){
            ans.push_back('+');
        }
        else    ans.push_back('-');
    }
    for(auto&i : ans){
        cout<<i<<endl;
    }
    return 0;
}