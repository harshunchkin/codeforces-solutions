#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; //no of people in kingdom
    cin>>n;
    vector <int> money;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        money.push_back(x);
    }
    sort(money.begin(),money.end());
    // for(auto& i:money){
    //     cout<<i<<" ";
    // }
    // int ;
    int sum = 0;
    for(int i =0;i<n-1;i++){
        if(money.at(n-1)-money.at(i)>=0){
            sum = sum + (money.at(n-1)-money.at(i));
        }
    }
    // cout<<endl;
    cout<<sum;
    return 0;
}