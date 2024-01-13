#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n;
    string s;
    vector <string> ans;
    while(t--){
        cin>>n>>s;
        char s1[n],e =s[0];
        int k=0,check=0;
        for (int i = 0; i < n; i++)         // A B A
        {
            if(s[i]!=e){
                s1[k] = e;
                e = s[i];
                k++;
            }
            for (int j = 0; j < k; j++)
            {
                if(s[i]==s1[j]){
                    ans.push_back("NO");
                    check = 1;
                    break;
                }
            }
            if(check==1){
                break;
            }
            
        }
        if(check==0){
            ans.push_back("YES");
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    
    
    return 0;
}