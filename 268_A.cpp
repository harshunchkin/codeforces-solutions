#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> home_j;
    vector <int> away_j;
    for (int i = 0; i <n; i++)
    {
        int h,a;
        cin>>h>>a;
        home_j.push_back(h);
        away_j.push_back(a);

    }
    // cout<<endl;
    // for (auto& i:home_j)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for (auto& i:away_j)
    // {
    //     cout<<i<<" ";
    // }
    int count=0;
    for (int i = 0; i <n; i++)              //n =4    1 2 3 4
    {
        int h_jersey = home_j.at(i);
        for (int i = 0; i <n; i++)
        {
            if(h_jersey == away_j.at(i)){
                count++;
            }
        }
        
    }
    // cout<<endl;
    cout<<count;
    return 0;
}