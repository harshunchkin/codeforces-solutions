#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans;
    string s;
    while(t--){
            //harshit 
        cin>>s;
        // int last = s.length()-1;
        // string r = s.substr(2,last-3);
        string p  ="";
        for(int i=2;i<=s.length()-2;i+=2){
            p = p+s[i];
        }
        ans.push_back(s[0]+p+s[s.length()-1]);
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    // cout<<r;
    return 0;
}