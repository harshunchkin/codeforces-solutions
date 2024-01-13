#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // vector <string> first_lang;
    // vector <string> sec_lang;
    string first_lang[m];
    string sec_lang[m];
    for (int i = 0; i < m; i++)
    {
        cin>>first_lang[i];
        cin>>sec_lang[i];
    }
    // cout<<endl;
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<first_lang[i]<<" ";
    //     cout<<sec_lang[i];
    //     cout<<endl;
    // }
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    
    
    for ( int i = 0; i < n; i++)
    {
        for(int j=0; j<m;j++){
            if(s[i]==first_lang[j]){
                if(first_lang[j].length() <= sec_lang[j].length()){
                    cout<<first_lang[j]<<" ";
                }
                else    cout<<sec_lang[j]<<" ";
            }
        }
        
    }
    
    
    return 0;
}