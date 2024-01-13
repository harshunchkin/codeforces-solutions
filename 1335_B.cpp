#include<bits/stdc++.h>
using namespace std;
int main(){
    string base = "abcdefghijklmnopqrstuvwxyz";
    int t;
    cin>>t;
    int n,a,b;
    vector <string> ans;
    while(t--){
        // cout<<base.length();
        string des;
         //n  = length, a = substring length, b = nof distinct char
        // cout<<endl;
        cin>>n>>a>>b;
        for (int i = 0; i < b; i++)
        {
            des += base[i];
        }
        int s = n-b;
        for (size_t i = 0; i < s; i++)
        {
            des +=des[i];
        }
        ans.push_back(des);
    }
        
    for (auto& i:ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}