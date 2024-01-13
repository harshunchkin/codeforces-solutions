#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int k = n;
    // int l_count=0,n_count=0;
    // while(n!=0){
    //     if(n==){
    //         l_count++;
    //     }
    //     n = n/10;
    // }
    // if(l_count==floor(log10(k)+1)){
    //     cout<<"YES";
    // }
    // else{
    //     //4 7 47 74 447 474 447 774 747 477
    // }
    if(n==4 || n==7 ||n==47 || n==74 || n==447 ||n==474 || n==447||n==774||n==747||n==477){
        cout<<"YES";
    }
    else if(n%4==0 || n%7==0 ||n%47==0 || n%74==0 || n%447==0 ||n%474==0 || n%447==0||n%774==0||n%747==0||n%477==0){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}