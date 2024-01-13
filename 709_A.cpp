#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,b,d;  //n - no of oranges, n = max orange size that can be fitted, d = max waaste
    cin>>n>>b>>d;
    int orange[n];
    int waste=0,remove_c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>orange[i];
    }
    for(auto& i:orange){
        if(i>b){
            continue;
        }
        else{
            waste+= i;
            if(waste>d){
                remove_c++;
                waste=0;
            }
        }
    }
    cout<<remove_c;
    
    return 0;
}