#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans;
    while(t--){
        string s;
        cin>>s;
        if((s[0]=='Y' || s[0]=='y') && (s[1]=='E'||s[1]=='e') && (s[2]=='S' ||s[2]=='s')){
            ans.push_back("YES");
        }
        else  ans.push_back("NO"); 
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}