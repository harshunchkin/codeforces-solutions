#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<2*a*2*b<<endl;
        }
        else if(min(a,b)==a){
            if(2*a<b){
                cout<<b*b<<endl;
            }
            else    cout<<(2*a)*(2*a)<<endl;
        }
        else{
            if(2*b<a){
                cout<<a*a<<endl;
            }
            else    cout<<(2*b)*(2*b)<<endl;
        }
    }

    // int t;
    // cin>>t;
    // while(t--){
    //     int a,b;
    //     cin>>a>>b;  //side of the rectangle
    //     if((a==1 && b==1) || (a==b)){
    //         cout<<(2*a)*(2*b)<<endl;
    //     }
    //     else if(a==1){
    //         cout<<(b*a)*b<<endl;
    //     }
    //     else if(b==1){
    //         cout<<a*(a*b)<<endl;
    //     }
    //     else if (a%2==0 && b%2!=0){
    //         if(a+a<b){
    //             cout<<(2*a*(abs(b+(b-2*a))))<<endl;
    //         }
    //         else   cout<<2*a*2*a<<endl;
    //     }
    //     else if(b%2==0 && a%2!=0){
    //         if(b+b<a){
    //             cout<<(2*b*(abs(a+(a-2*b))))<<endl;
    //         }
    //         else    cout<<2*b*2*b<<endl;
    //     }
    //     else if (b%2==0 && a%2==0){
    //         if(a+a<b){
    //             cout<<(2*a*(abs(b+(b-2*a))))<<endl;
    //         }
    //         else    cout<<(2*b*(abs(a+(a-2*b))))<<endl;
    //     }
    //     else{
    //         if(a+a<b){
    //             cout<<(2*a*(abs(b+(b-2*a))))<<endl;
    //         }
    //         else cout<<(2*b*(abs(a+(a-2*b))))<<endl;
    //     }
    // }

    return 0;
}