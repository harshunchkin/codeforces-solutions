#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    vector <string> ans;
    cin>>t;
    int n;
    string s;
    while(t--){
    cin>>n>>s;
        if(n==5){
            if(s.find('T')!=-1 && s.find('i')!=-1 && s.find('m')!=-1 && s.find('u')!=-1 && s.find('r')!=-1)
            ans.push_back("YES");
            else    ans.push_back("NO");
        }
        else ans.push_back("NO");
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}