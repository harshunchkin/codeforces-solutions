#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int y = n, j  =n;
        int count=0;
        for (int i = 1; i <=n-(k+1); i++)
        {
            cout<<j<<" ";
            j--;
            count++;
        }
        
        for (int i = 1; i <=y-count; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;
}