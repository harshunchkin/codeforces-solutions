#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <string> ans;
    while(t--){
        int n;
        cin>>n;
        if (n<2020){
            ans.push_back("NO");
        }
        else if(n%2020==0 || n%2021==0){
            ans.push_back("YES");
        }
        else{
            int c =0;
            while(true){
                if(n%2020==0 || n%2021==0){
                    c++;
                    break;
                }
                else{
                    n-=2021;
                    if(n<2020)  break;
                }
            }
            if(c!=0)    ans.push_back("YES");
            else    ans.push_back("NO");
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}