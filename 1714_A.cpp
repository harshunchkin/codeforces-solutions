#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h,m;
        cin>>n>>h>>m;
        int total_init = h*60+m;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int h_new,m_new;
            cin>>h_new>>m_new;
            int k = 60*h_new+m_new;
            if(k<total_init){
                k = k+1440; //24*60
            }
            ans = min(ans,k-total_init);

        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }
    
    return 0;
}