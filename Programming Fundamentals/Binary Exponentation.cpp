#define ll long long
#define mod 1e9+7

// O(log n) compare to pow() which is 0(n)
// use mod if needed

ll bipow(ll c, ll d){
    if(c==0)return 0;
    if(d==0)return 1;
    ll res = 1;
    d%=mod;     // skip this line if not using mod
    while(d>0){
        if(d%2)res*=c%mod;      
        c*=c%mod;
        d/=2;
    }
    return res;
}
