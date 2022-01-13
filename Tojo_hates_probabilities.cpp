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
        int n,m;
        cin>>n>>m;
        double arr[n+1][m+1];
        ms(arr,0);
        double res=0;
        arr[0][1]=1;
        arr[1][0]=1;
        frr(i,1,n+1)
        {
            frr(j,1,m+1)
            {
                if(i==n&&j>1)
                arr[i][j]=arr[i-1][j]/2+arr[i][j-1];
                else if(j==m&&i>1)
                arr[i][j]=arr[i-1][j]+arr[i][j-1]/2;
                else
                arr[i][j]=arr[i-1][j]/2+arr[i][j-1]/2;
                res+=arr[i][j];
                // debug(res);
            }
        }
        
        cout<<fixed<<setprecision(6)<<res-arr[n][m]+1<<endl;
 
        t--;
    }
    return 0;
}
