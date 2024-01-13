#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[i] =x;
    }
    sort(a,a+n);
    for(auto& i:a){
        cout<<i<<" ";
    }
    
    return 0;
}