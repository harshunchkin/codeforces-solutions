#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans;
    int x,n,m;  //x is hitpoint, n is void absorption, m is lightning strike
    while(t--){
        cin>>x>>n>>m;
        int t_dmg_ls = m*10;
        if(x<=t_dmg_ls){
            ans.push_back("YES");
        }
        else{
            while(n!=0){
                x = (x/2) +10;
                if(x<=t_dmg_ls) break;
                n--;
            }
            if(x-t_dmg_ls<=0){
                ans.push_back("YES");
            }
            else    ans.push_back("NO");
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}