#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    vector <string> ans;
    while(t--){
        cin>>n;
        if (n & 1){
            ans.push_back("YES");
        }
        else{
            bool ok = false;
            long long int p =n;
            while(p> 2){
                p = p/2;
                if(p & 1){
                    if(n%p==0){
                        ok = true;
                        break;
                    }
                }

            }
            if(ok)  ans.push_back("YES");
            else    ans.push_back("NO");
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    return 0;
}