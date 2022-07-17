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
ll mex(int n, ll arr[])
{
    ll res=0;
    for (int i=0; i<n; i++)
    {
        if(max(arr[i],(ll)0) == res)
        res++;
        else if(max(arr[i],(ll)0) == res-1);
        else
        break;
    }
    return res;
}

int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        ll arr[n];
        frr(i,0,n)
        {cin>>arr[i];}
        
        sort(arr,arr+n);
        
        ll x=mex(n,arr);
        
        // debug(x);
        if(x==1)
        cout<<-1;
        else if(x==0)
        cout<<arr[0]-1;
        else
        {
            ll res=0,mxx=arr[n-1],cnt=1,flag=0;
        
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]>x)
                {
                    // debug(arr[i]);
                    if(arr[i]+1 == arr[i+1])
                    {cnt++;flag=1;}
                    else if(arr[i+1] == arr[i])
                    flag=1;
                    else
                    {
                    // debug(cnt);
                    // debug(i);
                    // if(999999999==1000000000-1)
                    // cout<<"gg";
                        if(cnt >= x-1)
                        res++;
                        
                        cnt=1;
                        flag=0;
                    }
                    // debug(cnt);
                }
            }
            if(flag==1 && cnt>=x-1)
            res++;
            if(arr[n-1]==1000000000)
            res++;
            cout<<res;
        }
        cout<<endl;
 
        t--;
    }
    return 0;
}
