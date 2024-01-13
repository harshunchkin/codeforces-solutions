#include<bits/stdc++.h>
using namespace std;
void wow(vector <int> ans, int size){
    int swaps_max=0,swaps_min=0,swaps=0;
    //max closest element
    int largest = INT_MIN;
    int index_max=0;
    for (int i = 0; i < size; i++)
    {   
        if (ans.at(i)>largest){
            largest = ans.at(i);
            index_max = i;
        }
    }
    // cout<<endl;
    // cout<<"max element is "<<largest<<" "<<"index is "<<index_max;

    //min closest element
    int smallest = INT_MAX;
    int index_min = 0;
    for (int i = (size-1); i>=0; i--)
    {
        if (ans.at(i)<smallest){
            smallest = ans.at(i);
            index_min = i;
        }
    }
    // cout<<endl;
    // cout<<"min element is "<<smallest<<" "<<"index is "<<index_min<<endl;
    if (index_max>index_min){
        swaps_max = index_max-0;
        swaps_min = index_min-(size-1);
        swaps = (swaps_max-swaps_min)-1;
    }
    else{
        swaps_max = index_max-0;
        swaps_min= index_min-(size-1);
        swaps = swaps_max-swaps_min;
    }
    cout<<swaps;
}
int main(){
    vector <int> ans;
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin>>x;
        ans.push_back(x);
    }
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<ans.at(i)<<" ";
    // }
    wow(ans,size);
    return 0;
}