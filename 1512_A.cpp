#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> ans;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            arr[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            if(i==0 && arr[i]!=arr[i+1] && arr[i]!=arr[i+2]){
                ans.push_back(i+1);
                break;
            }
            if(i==0 && arr[i]!=arr[i+1] && arr[i]==arr[i+2]){
                continue;
            }
            if(i==n-1){
                ans.push_back(i+1);
                break;
            }
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                ans.push_back(i+1);
                break;
            }
        }
    }
    for(auto& i:ans){
        cout<<i<<endl;
    }
    
    return 0;
}