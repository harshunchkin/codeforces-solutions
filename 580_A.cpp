#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    vector <int> ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a[i]=x;
    }
    int cont=1;
    // cout<<a[1]<<" "<<a[0]<<endl;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>=a[i-1]){
            // cout<<"true "<<endl;       //2 2 1 3 4 1
            cont++;
        }
        if(a[i]<a[i-1] || i==(n-1)){
            // cout<<"chow "<<cont<<" ";
            ans.push_back(cont);
            cont=1;
        }
    }
    if(ans.empty()==1){
        cout<<n;
    }
    else{
        cout<<*max_element(ans.begin(),ans.end());
    }
       
    return 0;
}