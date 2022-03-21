#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define loopf(i, a, b) for (ll i = a; i < b; i++)
#define loopb(i,a,b) for(ll i=a;i>b;i--)
#define loopit(it, st) for (auto it = st.begin(); it != st.end(); it++)
#define pb push_back
#define ff first
#define ss second
#define vii vector<ll>
#define vll vector<long long>
#define pii pair<ll, ll>
#define pll pair<ll, ll>
#define mapii map<ll, ll>
#define mapll map<ll, ll>
#define vc vector
#define sz(v) (ll)(v.size())
#define len(v) (ll)(v.length())

const ll MAX = 1e9+7;
using namespace std;
unsigned long long int binpow( ll base, ll exp )
{
    unsigned long long int result = 1ULL;
    while( exp )
    {
        if ( exp & 1 )
        {
            result *= (unsigned long long int)base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}

int main()
{
    ll t;
    cin>>t;
    while(t>0)
    {
        ll n;
        cin>>n;
        ll count1,count0,lss_idx;
        ll arr_idx[32];
        for(ll i=0;i<32;i++)
        {
            ll var1 = n - binpow(2, i) + 1;
            ll var2=(var1) / binpow(2, i + 1);
            arr_idx[i] = ( var2)* binpow(2, i);
            ll x = binpow(2, i + 1);
            ll op=(var1) %x ;
            if(op<0)
        {   lss_idx=i-1;
            break;
        }
            if(op>=binpow(2,i))
            {
            op=binpow(2,i);
            arr_idx[i]+=op;
            }
            else{
                arr_idx[i]+=op;
            }
        }
        ll res=0;
        for(ll i=0;i<=lss_idx;i++)
        {
            count1=arr_idx[i];
            count0=n-count1;
            if(count1==count0)
            {
                res+=count1*2*binpow(2,i);
            }
            else if(count0>count1)
            {
                res += count1 * 2 * binpow(2, i);
            }
            else
            {
                res += count0 * 2 * binpow(2, i);
            }
        }

        cout<<res<<endl;
        t--;
    }

    
    return 0;
}