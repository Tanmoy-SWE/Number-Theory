#include<bits/stdc++.h>

using namespace std;

void sieve(int n){
    bitset <(1 << 20)> prime;
    for(int i=2; i<n; i++){
        for(int j=i*i; j<n; j+=i){
            prime[j] = 1;
        }
    }
    for(int i=2; i<n; i++){
        if(!prime[i]){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cin >> n;
    sieve(n);
    return 0;
}

