#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,flag;
    cin>>t;
    vector <string> ans;
    while(t--){
        flag = 0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a[i] = x;
        }
        sort(a,a+n);
        for (int i = 1; i < n; i++)
        {
            if(a[i]-a[i-1]>1){
                flag=1;
                ans.push_back("NO");
                break;
                
            }
        }
        if(flag==0){
            ans.push_back("YES");
        }
        
    }
    for (auto& i:ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}