#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector <int> test_cases;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        test_cases.push_back(k);
    }
    for(auto&i : test_cases){
        vector <int> a;
        int x=0,rem=0;
        if(i>=1000){
            rem = i%1000;
            a.push_back(i-rem);
            i = i%1000;
        }
        if(i>=100){
            rem = i%100;
            a.push_back(i-rem);
            i = i%100;
        }
        if(i>=10){
            rem = i%10;
            a.push_back(i-rem);
            i = i%10;
        }
        if(i>=1 && i<=9){
            a.push_back(i);
        }
        cout<<a.size()<<endl;
        for (auto& p:a)
        {
            cout<<p<<" ";
        } 
        cout<<endl; 
    }
    return 0;
}