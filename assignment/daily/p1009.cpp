#include <cstdio>
using namespace std;

const int MODD = 998244353;
int a, b;

long long fast_pow(int a, int b) { // return a^b % MODD
    long long ans = 1;
    long long tem = a;
    while(b) {
        if(b & 1) {
            ans *= tem;
            ans %= MODD;
        }
        b >>= 1;
        tem *= tem;
        tem %= MODD;
    }
    return ans;
}
int main(){
    scanf("%d%d", &a, &b);
    printf("%lld", fast_pow(a, fast_pow(a, b)));
    return 0;
}