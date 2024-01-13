#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;    //n = no of questions   //k minutes to reach party
    cin>>n>>k;
    int rem_min = 240-k;
    int tq_time = 0, i= 1, q=0;
    while(tq_time<=rem_min ){       //0 18 ,5 2, 15 3
        if(tq_time+(5*i)>rem_min)   break;
        else{
            tq_time = tq_time+(5*i);
            i++;
            q++;
        }
    }
    if(q>=n){
        cout<<n;
    }
    else    cout<<q;
    // cout<<" total ques time "<<tq_time<<" remaining time "<<rem_min<<" ques done "<<q;
    
    return 0;
}