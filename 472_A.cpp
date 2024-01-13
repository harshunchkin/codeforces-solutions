#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    for (int i = 2; i < n; i++)
    {
        a = i;
        b = n-i;
        int flag1 =0,flag2=0;
        for (int l = 2; l < a; l++)
        {
            if(a%l==0){
                flag1++;
                break;
            }
        }
        for (int k = 2; k < b; k++)
        {
            if(b%k==0){
                flag2++;
                break;
            }
        }
        if(flag1!=0 && flag2!=0){
            cout<<a<<" "<<b;
            break;
        }   
          
    }
    
    return 0;
}