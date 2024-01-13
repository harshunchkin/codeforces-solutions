#include<bits/stdc++.h>
#include<chrono>
using namespace std;
int main(){
    int n,k_index;
    cin>>n>>k_index; 
    vector <int> cuntestant;
    for (int i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        cuntestant.push_back(a);
    }
    int count=0;
    int lol = cuntestant[k_index-1];
    for (int i=n-1;i>=0;i--){
        if (cuntestant[i]>0 && cuntestant[i]>=lol){
            count++;
        }
    }
    if (cuntestant[0]==0){
        cout<<cuntestant[0];
    }
    else{
        cout<<count;
    }
    return 0;
}