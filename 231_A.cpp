#include<bits/stdc++.h>
#include<chrono>
using namespace std;
auto start = chrono::steady_clock::now();
int main(){
    int n; //no of prob in contest
    cin>>n;
    int count = 0;
    for (int i = 1; i <=n ; i++)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if ((a==1 && b==1)||(b==1 && c==1)||(c==1 &&a==1)){
            count++;
        }
    }
    cout<<count<<endl;
    auto end = chrono::steady_clock::now();
    auto diff = end-start;
    cout<<chrono::duration<double,milli>(diff).count()<<endl;
    return 0;
}