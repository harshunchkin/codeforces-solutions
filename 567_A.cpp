#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  //not of cites;
    cin>>n;
    int cities[n];
    for (int i = 0; i < n; i++)
    {
        cin>>cities[i];
    }
    // for(auto& i:cities){
    //     cout<<i<<" ";
    // }
    //cal minimum
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            cout<<(abs(cities[i]-cities[i+1]))<<" ";
            cout<<(abs(cities[i]-cities[n-1]))<<endl;
        }
        else if(i==n-1){
            cout<<(abs(cities[i]-cities[i-1]))<<" ";
            cout<<(abs(cities[i]-cities[0]))<<endl;
        }
        else{
            if (abs(cities[i]-cities[i-1]) > abs(cities[i]-cities[i+1])){
                cout<<(abs(cities[i]-cities[i+1]))<<" ";
            } 
            else    cout<<(abs(cities[i]-cities[i-1]))<<" ";

            if (abs(cities[i]-cities[0]) > abs(cities[i]-cities[n-1])){
                cout<<(abs(cities[i]-cities[0]))<<endl;
            }
            else cout<<(abs(cities[i]-cities[n-1]))<<endl;
        }
    }
    //cal maximum
    // for (int i = 0; i < n; i++)
    // {
    //     if(i==0){
    //         ;
    //     }
    //     else if(i==n-1){
            
    //     }
    //     else{
    //         if (abs(cities[i]-cities[0]) > abs(cities[i]-cities[n-1])){
    //             ma.push_back(abs(cities[i]-cities[0]));
    //         }
    //         else ma.push_back(abs(cities[i]-cities[n-1]));
    //     }
    // }
    
    // }
    // for (int i=0;i<n;i++)
    // {
    //     cout<<mi.at(i)<<" "<<ma.at(i)<<endl;

    // }
    
    
    return 0;
}