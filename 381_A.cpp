#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> cards;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        cards.push_back(x);
    }
    // for(auto& i: cards){
    //     cout<<i<<" ";
    // }

    int i =0;
    int j= n-1;
    int sum_sereja=0, sum_dima=0;
    int f=0;
    while(i<=j){
        if(f==0){
            if(cards.at(i)>cards.at(j)){
                sum_sereja+=cards.at(i);
                i++;
            }
            else{
                sum_sereja+= cards.at(j);
                j--;
            }
        }
        else{
            if(cards.at(i)>cards.at(j)){
                sum_dima+= cards.at(i);
                i++;
            }
            else{
                sum_dima+=cards.at(j);
                j--;
            }
        }
        if (f==0)   f++;
        else    f--;
    }
    cout<<sum_sereja<<" "<<sum_dima;
    
    return 0;
}