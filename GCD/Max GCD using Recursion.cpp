#include <bits/stdc++.h>

using namespace std;

long long Fastgcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return Fastgcd(b % a, a);
}


int main(){
    int n;
    cin >> n;
    long long arr[n+5];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long gcd= -1, temp = 0, ans = -1;
    for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                    temp = Fastgcd(arr[i],arr[j]);
                    ans = max(gcd, temp);
                    gcd = ans;

            }
    }
    cout << ans;
}