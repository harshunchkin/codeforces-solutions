#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q;
    cin>>n>>p;
    vector <int> ans;
    for (int i = 0; i < p; i++)
    {
        int x;
        cin>>x;
        ans.push_back(x);
    }
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int y;
        cin>>y;
        ans.push_back(y);
    }
    //sort and then traverse over the set
    vector <int> lappu;
    set <int>s(ans.begin(),ans.end());
    for(auto it:s)
    lappu.push_back(it);
    if (lappu.size()==n){
        cout<<"I become the guy.";
    }
    else    cout<<"Oh, my keyboard!";
    return 0;
}