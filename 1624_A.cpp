#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    vector <int> ans;
    while(t--){
        cin>>n;
        vector <int> a;
        for (int i = 0; i <n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int m = *max_element(a.begin(),a.end());
        int n = *min_element(a.begin(),a.end());
        ans.push_back(m-n);
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }

    return 0;
}