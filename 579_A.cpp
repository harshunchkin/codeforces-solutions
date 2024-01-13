#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x;
    cin>>x;
    int count = 0;
    while(x){
        if(x%2==1){
            count++;  
        }
        x /=2;
    }
    cout<<count;
    return 0;
}

// int countSetBits(long long n) {
//     long long int count = 0;
//     while (n) {
//         n &= (n - 1);
//         count++;
//     }
//     return count;
// }

// int main(){
//     long long x;
//     cin >> x;
//     long long int result = countSetBits(x);
//     cout << result <<endl;
//     return 0;
// }