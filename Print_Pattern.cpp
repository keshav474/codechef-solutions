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
        int n;
        cin>>n;
        int arr[n][n]={};
        int k=1;
        frr(i,0,n)
        {
            arr[0][i]=k;
            k+=i+1;
        }
        frr(i,1,n)
        {
            arr[i][n-1]=arr[i-1][n-1]+n+1-i;
        }
        frr(i,1,n)
        frr(j,0,n-1)
        arr[i][j]=arr[i-1][j+1]+1;
        frr(i,0,n)
    {    frr(j,0,n)
        cout<<arr[i][j]<<" ";
        cout<<endl;
        }

        t--;
    }
    return 0;
}
