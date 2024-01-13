#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,r;    // k = price of one shovel  r = one coin in range 1=< r =<9
    cin>>k>>r;
    int i = 1;
    int quot = k/10;
    if (k%10==0 || ((k/10)*10)+r==k){
        cout<<1;

    }
    else{
        int count=0, i=1;
        while(true){
            int x = k;
            x = k*i;
            if ((x%10)*10==0 || ((x/10)*10)+r==x){
                count++;
                break;
            }
            i++;
            // cout<<x<<" ";
            count++;
        }
        // cout<<endl;
        cout<<count;
    }
    
    return 0;
}