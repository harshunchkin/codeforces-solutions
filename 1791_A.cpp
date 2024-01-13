#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s  ="codeforces";
    vector <string> ans;
    while(t--){
        char c;
        cin>>c;
        if(s.find(c)!=string::npos){
            ans.push_back("YES");
        }
        else    ans.push_back("NO");
    }
    for(auto& i: ans){
        cout<<i<<endl;
    }
    return 0;
}