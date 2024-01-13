#include<bits/stdc++.h>
using namespace std;
int main(){
    int friends;  
    cin>>friends;
    int arr[friends+1];        //number of friends
    for (int i = 1; i <=friends; i++)
    {
        int giftgivenby;
        cin>>giftgivenby;
        arr[giftgivenby] = i;
    }
    for (int j = 1; j <= friends; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}