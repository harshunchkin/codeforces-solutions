#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;    // n = no of students, m = no of puzzles
    cin>>n>>m;
    int puzz[m];
    vector <int> ans;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        puzz[i] = x;
    }
    sort(puzz,puzz+m);
    // for(auto& i:puzz){
    //     cout<<i<<" ";
    // }
    int diff =0;
    int start = 0;
    int end = n-1;
    while(end<=(m-1) && (end+1)-start==n){
        diff = puzz[end] - puzz[start];
        ans.push_back(diff);
        start++;
        end++;  
    }
    // for(auto& i:ans){
    //     cout<<i<<" ";
    // }
    cout<<*min_element(ans.begin(),ans.end());
    return 0;
}