#include<bits/stdc++.h>
using namespace std;
//pangram question
string pangram(string s){
    string ans= "";
    for (int i = 0; i < s.length(); i++)
    {
        if (ans.empty()){
            ans.push_back(s[i]);
        }
        else{
            int count = 0;
            for (int j = 0; j < ans.length(); j++)
            {
                if (ans[j]==s[i]){
                    count++;   
                }  
            }
            if(count!=0)    continue;
            else    ans.push_back(s[i]);
        }  
    }
    if(ans.length()==26){
        return "YES";
    }
    else    return "NO";   
}
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    for(auto& x : s) {
        x = tolower(x);
    }
    cout<<pangram(s);
    // string s = "";
    // if (s.empty()){
    //     s.push_back('t');
    // }
    // cout<<s;
    // string s = "thetowerofpisa";
    // string p = "tomorrornevero";
    // if(s[0]!=p[0]){
    //     cout<<"lappi";
    // }
    // else cout<<"good";
    // string d = pangram(s);
    // cout<<"string is "<<d<<"length "<<d.length();
    return 0;
}