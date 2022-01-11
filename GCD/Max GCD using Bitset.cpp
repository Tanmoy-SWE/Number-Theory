#include<bits/stdc++.h>


using namespace std;

int main(){
        int n;
        cin >> n;
        bitset < (1 << 20) > mark;
        long long mx = -1;
        for(long long i=0; i<n; i++){
            long long num;
            cin >> num;
            long long root = sqrt(num);
            for(long long j=1; j<=root; j++){
                if(num%j==0){
                    if(mark[j]){
                        mx = max(mx, j);
                    }
                    if(mark[num/j]){
                        mx = max(mx, num/j);
                    }
                    mark[j] = 1;
                    mark[num/j] = 1;
                }
            }
        }
        cout << mx;
}
