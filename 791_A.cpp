#include<bits/stdc++.h>
using namespace std;
int main(){
    int wlimak, wbob;
    cin>>wlimak>>wbob;
    int n_years=0;
    while (true)
    {
        if(wlimak>wbob) break;
        wlimak=wlimak*3;
        wbob = wbob*2;
        n_years++;
    }
    cout<<n_years<<endl;
    return 0;
}