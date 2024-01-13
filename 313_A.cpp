#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        //n = -100003
        // remove last digit -10000
        //remove last second digit -10003
        //remove last digit by -10003/10;
        //remove last second digit -10003/100 = -100-()
        int l_digit = n/10;
        int l2_digit = n/100*10 + n%10;
        cout<<max(l_digit,l2_digit);
    }
    return 0;
}