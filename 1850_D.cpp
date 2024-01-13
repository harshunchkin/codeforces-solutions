#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    long long int n,k;
    // vector <int> ans;
    while(t--){
        cin>>n>>k;
        int ques[n];
        long long int count=1,ans=-1;     //it is so easy you thought it
        for (int i = 0; i < n; i++)
        {
            cin>>ques[i];
        }
        sort(ques,ques+n);
        // for(auto& i:ques){
        //     cout<<i<<" ";
        // }
        for (long long int i = 1; i < n; i++)
        {
            if(ques[i]-ques[i-1]<=k){
                count++;
            }   
            else{
                ans = max(ans,count);
                count=1;
            }
        }
        ans = max(ans,count);
        cout<<(n-ans)<<endl;
    }
    // for(auto&i:ans){
    //     cout<<i<<endl;
    // }
    return 0;
}