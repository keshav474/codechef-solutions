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
    // cin>>t;
    t=1;
    while(t)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int arr[n][n]={};
        int froz[n]={};
        frr(i,0,m)
        {
            int a,b;
            cin>>a>>b;
            a--;b--;
            arr[a][b]=1;
        }
        vll v;
        frr(i,0,q)
        {
            int typ,x;
            cin>>typ>>x;
            x--;
            if(typ == 3)
            {
                if(froz[x] == 1)
                cout<<"YES";
                else
                cout<<"NO";
                cout<<endl;                 
            }
            else if(typ == 1)
            {
                froz[x] = 1;
                v.pb(x);
            }
            else
            {
                x++;
                int i=0;
                while(x--)
                {
                    int temp=v.size();
                    for( ; i<temp; i++)
                    {
                        frr(j,0,n)
                        {
                            if(arr[v[i]][j] == 1)
                            if(froz[j] != 1)
                            {
                                froz[j] = 1;
                                v.pb(j);
                            }
                            
                        }
                    }
                    i=temp;
                    
                }

            }

        }
        t--;
    }
    return 0;
}
