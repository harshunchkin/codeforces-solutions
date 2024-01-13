#include<bits/stdc++.h>
using namespace std;
//in search of an easy problem
int main(){
    int n;
    cin>>n;
    int count = 0;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        if (x==1){
            count++;
        }

    }
    if(count==0)    cout<<"EASY";
    else    cout<<"HARD";

    return 0;
}