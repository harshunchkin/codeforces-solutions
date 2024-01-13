#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    // int arr[n*m];
    int bw=0;
    for (int i = 0; i < n*m; i++)
    {
        char k;
        cin>>k;
        if(k=='B' || k=='W' || k=='G'){
            bw++;
        }
    }
    if(bw==(n*m)){
        cout<<"#Black&White";
    }
    else cout<<"#Color";
    return 0;
}