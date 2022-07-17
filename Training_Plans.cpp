#include<bits/stdc++.h>
#define FAST     ios_base::sync_with_stdio(0);
#define INPUT    cin.tie(0);
#define OUTPUT   cout.tie(0);
#define ll       long long int
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define ms(arr, v) memset(arr, v, sizeof(arr)) //assigns v to all elements of arr
#define MAXX (ll)(1e18)
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define endl     "\n"
#define frr(i, b, n) for (ll i = b; i < n; ++i)
#define rfrr(i, b, n) for (long i = b; i >= n; --i)
#define pb push_back
#define vll vector<ll>
#define vii vector<int>
#define readv(v,n) frr(i,0,n){int x;cin>>x;v.pb(x);}
#define printv(v)  frr(i,0,v.size())cout<<v[i]<<" ";


using namespace std;
 
unsigned long long int ipow( ll base, ll exp )
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
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        ll n;
        cin>>n;
        int arr[n],barr[n];
        
        frr(i,0,n)
        cin>>arr[i];
        frr(i,0,n)
        cin>>barr[i];
        
        vector<vll> pos(n);
        frr(i,0,n)
        pos[barr[i]].pb(arr[i]);
        
        vector<double> v(n+1,0);
        set<ll> res;
        frr(i,1,n+1)
        {
            for(auto &j:pos[i-1])
            res.insert(j);
            
            if(res.size()>0)
            {
                v[i]=v[i-1];
                auto itr=res.end();
                itr--;
                v[i] += *itr;
                res.erase(itr);
            }
            else
            break;
        }
        frr(i,1,n+1)
        v[i]/=(double)i;
        double mxx=INT_MIN;
        frr(i,0,v.size())
        mxx=max(mxx,v[i]);
        cout<<fixed<<setprecision(6)<<mxx<<endl;

 
        t--;
    }
    return 0;
}

    