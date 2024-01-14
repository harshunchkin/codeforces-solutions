#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        // sort(arr,arr+n);
        // if(arr.size()==1){
        //     cout<<0;
        // }
        long long int count_ones = 0, sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=arr[i];
            if(arr[i]==1)   count_ones++;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if(arr[i]!=1){
        //         arr[i]-=1;

        //     }
        // }
        if(sum>=count_ones+n && n>1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
    
    
    
    return 0;
}