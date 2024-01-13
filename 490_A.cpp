#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    vector <int> a,b,c;
    for (int i = 1; i<=n; i++)
    {
        cin>>x;
        if(x==1)    a.push_back(i);
        else if(x==2)    b.push_back(i);
        else    c.push_back(i);
    }
    int m = min(min(a.size(),b.size()),c.size());
    cout<<m<<endl;
    for (int i = 0; i < m; i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i];
        cout<<endl;
    }
    
    return 0;
}