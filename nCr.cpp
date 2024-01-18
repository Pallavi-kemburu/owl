#include<bits/stdc++.h>
using namespace std;
const long long int mod = 1e9+7;
long long int nCr(long long int n, long long int r){

    long long int num = 1;
    for(long long int i = n - r + 1 ; i <= n ; i++)
    {
        num *= i;   
    }
    for(long long int i = 1 ; i <= r; i++){
        num /= i;
    }
    return num;
}
long long int pow(long long int a,long long int b){
    long long int ans = 1;
    while(b){
        if(b&1){
            ans *= a;
            ans %= mod;
        }
        a *= a;
        a %= mod;
        b >>= 1;
    }
    return ans;
}
const long long int N = 1e5+1;
vector<long long int>fact(N);
vector<long long int>invfact(N);
void preFact(){
    fact[0] = 1;
    invfact[0] = 1;
    for(long long  int i = 1 ; i < N ; i++){
        fact[i] = fact[i-1] * i;
        fact[i] %= mod;
        invfact[i] = pow(fact[i], mod-2);
    }

}
int main(){
    long long int t;
    cin >> t;//10^5
    preFact();
    while(t--){
        long long int n , r;
        cin >> n >> r;
       // cout<<fact[n]/(fact[r]*fact[n-r])<<endl;
        long long int ans = (fact[n] % mod * invfact[r] % mod * invfact[n-r] %mod)%mod;
        cout<<ans<<" ";
    }
    
}
