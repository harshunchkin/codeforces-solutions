#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        long long prod=1;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        arr[0]+=1;
        for (int i = 0; i < n; i++)
        {
            prod*=arr[i];
        }
        cout<<prod<<endl;
    }
    
    return 0;
}