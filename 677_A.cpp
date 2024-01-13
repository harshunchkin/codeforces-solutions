#include<bits/stdc++.h>
using namespace std;
int vasya_friends(int &n, int &h, vector <int> h_friends){
    int width = 0;
    for (int i:h_friends)
    {
        if (i>h) width+=2;
        else width++;
    }
    return width;
}
int main(){
    int n,h;    //n = no pf friends,  h = height of the fence
    cin>>n>>h;
    vector <int> h_friends;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        h_friends.push_back(x);
    }
    cout<<vasya_friends(n,h,h_friends);
    return 0;
}