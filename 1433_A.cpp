#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(floor(log10(n)+1)==4){
            cout<<10*(n%10)<<endl;
        }
        else if(floor(log10(n)+1)==3){
            cout<<10*(n%10-1) + 6<<endl;
        }
        else if (floor(log10(n)+1)==2){
            cout<<10*(n%10-1) + 3<<endl;
        }
        else{
            cout<<10*(n%10-1) + 1<<endl;
        }
    }

    return 0;
}