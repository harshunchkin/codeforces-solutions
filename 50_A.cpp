#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int domino_area = 2;
    if (m*n==0){
        cout<<0<<endl;
    }
    else if ((m*n)%domino_area==0){
        cout<<(m*n)/2;
    }
    else cout<<(m*n)/2;
    return 0;
}