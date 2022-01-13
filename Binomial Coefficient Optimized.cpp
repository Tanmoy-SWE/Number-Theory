#include <iostream>
#include <cstring>

using namespace std;


//Expected Time Complexity :- O(n*r);
//Expected Space Complexity :- O(r);
int ncr(int n, int r){
    if(n<r) return 0;
    if((n-r)>r){
        r = n-r;
    }
    int dp[r+1];
    memset(dp,0,sizeof(dp));
    dp[0]= 1;
    for(int i=0; i<n; i++){
        /*I started from min(i,j) because ncr=nc(r-1). So If I do half
        calculation it can store all other numbers.*/
        for(int j=min(i,r); j>0; j--){
            dp[i] = dp[i-1] + dp[i];
        }
    }
    return dp[r-1];
}



int main(){
    cout << ncr(5,3);
    return 0;
}
