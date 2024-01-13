#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  // contests 
    cin>>n;
    vector <int> contest;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        contest.push_back(x);
    }
    // for(auto& i:contest){
    //     cout<<i<<" ";
    // }
    int min = contest.at(0);
    int max = contest.at(0);
    int amazing = 0;
    for (int i = 1; i < n; i++)
    {
        if(contest.at(i)>max){
            amazing++;
            max = contest.at(i);
        }
        if(contest.at(i)<min){
            amazing++;
            min = contest.at(i);
        }
    }
    cout<<amazing;
    return 0;
}