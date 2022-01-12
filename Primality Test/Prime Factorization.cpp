#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
prime factorization hoilo koto gula prime number diye
ekta number prokash kora jay. I mean prime divisors gulai
arki
*/
void prime_factorization(ll n){
	ll i, cnt = 0;
	for(i=2; i<=n; i++){
        cnt = 0;
        if(n%i==0){
            while(n%i==0){
                cnt++;
                n/=i;
            }
        }
        if(cnt){
            cout << i << " has a count of " << cnt << endl;
        }
	}
}

int main(){
        ll n;
        cin >> n;
        prime_factorization(n);
}

