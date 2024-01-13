#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int total=1,i =1;
    int height=0;
    while(height<=n){
        total = ((i*i)+i)/2;
        if(total>n){
            break;
        }
        n = n-total;
        height++;
        i++;
        
    }
    cout<<height;
    return 0;
}