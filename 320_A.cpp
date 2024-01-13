#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  // check if it is a magic number 1 14 144
    cin>>n;
    int f;
    while(true){
        f=0;
        if(n==1){
            cout<<"YES";
            break;
        }
        if (n%1000==144){
            f=1;
            n = n/100;
            if(n==1){
                cout<<"YES";
                break;
            }
        }
        if(n%100==14){
            f=1;
            n = n/10;
            if(n==1){
                cout<<"YES";
                break;
            }
        }
        if(n%10==1){
            f=1;
            n = n/10;
            if(n==1){
                cout<<"YES";
                break;
            }        
        }
        if(f==0){
            cout<<"NO";
            break;
        }
    }

    return 0;
}