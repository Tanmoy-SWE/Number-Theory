#include <bits/stdc++.h>

using namespace std;


//This is the most optimized binExpRecur which runs on O(logb)
long long binExpRecur(long long a, long long b){
    if(b==0) return 1;
    long long res = binExpRecur(a, b/2);
    if(b%2){
        return (a * (res * res));
    }
    else{
        return (res * res);
    }
}

int main()
{
    cout << (binExpRecur(2,4));

    return 0;
}
