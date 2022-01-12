#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b){
	return (a*b)/__gcd(a,b);
}
int main(){
        /*
        Complexity of lcm function is = 𝑂(𝑙𝑜𝑔2𝑛)
        the built-in __gcd takes all the complexity.
        */
        cout << lcm(6,5);
}
