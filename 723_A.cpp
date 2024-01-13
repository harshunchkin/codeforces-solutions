#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int k = min(x1,x2);
    int smallest = min(k,x3);  //least value
    int a = max(x1,x2);
    int greatest = max(a,x3);  //max value
    int middle;
    if(x1>smallest && x1<greatest)  middle =x1;
    if(x2>smallest && x2<greatest)  middle =x2;
    if(x3>smallest && x3<greatest)  middle =x3;
        
    // cout<<smallest<<" "<<middle<<" "<<greatest<<endl;
    int dist_travel = (middle-smallest) + (greatest-middle);
    cout<<dist_travel;

    // int centroid = (x1+x2+x3)/3;
    // int dist_travel = abs(centroid-x1) + abs(centroid-x2) + abs(centroid-x3);
    // cout<<dist_travel;
    return 0;
}