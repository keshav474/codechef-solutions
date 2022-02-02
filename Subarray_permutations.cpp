#include<bits/stdc++.h>
#define FAST     ios_base::sync_with_stdio(0);
#define INPUT    cin.tie(0);
#define OUTPUT   cout.tie(0);
#define ll       long long int
#define debug(x) cout<<#x<<" = "<<x<<endl;
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define MAXX (ll)(1e18)
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)
#define endl     "\n"
#define frr(i, b, n) for (ll i = b; i < n; ++i)
// #define rfrr(i, b, n) for (long i = b; i >= n; --i)
#define pb push_back
#define vll vector<ll>
#define vii vector<int>
#define readv(v,n) frr(i,0,n){int x;cin>>x;v.pb(x);}
#define printv(v)  frr(i,0,v.size())cout<<v[i]<<" ";


using namespace std;

int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        ll n,k;
        cin>>n>>k;
        if(n==1)
        cout<<"1";
        else if(k<2)
        cout<<"-1";
        else
        {
            int count=1;
            cout<<"1 ";
            for(int i=2;i<k;i++)
            {
                cout<<i<<" ";
                count=i;
            }
            for(int i=n;i>count;i--)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;
 
        t--;
    }
    return 0;
}
