#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    vector <string> ans;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int big = max(max(a,b),c);
        if(big==a){
            if(b+c==a)  ans.push_back("YES");
            else ans.push_back("NO");
        }
        else if(big==b){
            if(a+c==b)  ans.push_back("YES");
            else ans.push_back("NO");
        }
        else{
            if(b+a==c)  ans.push_back("YES");
            else ans.push_back("NO");
        }
    }
    for (auto& i:ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}