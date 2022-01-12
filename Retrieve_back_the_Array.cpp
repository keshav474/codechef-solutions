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
        int n,X;
		cin>>n>>X;
		if(n==1)
			cout<<X<<endl;
		else if(n==2)
			cout<<0<<" "<<X<<endl;
		else
		{
			int x = 0;
			for(int i=1;i<=n-3;i++){
				cout<<i<<" ";
				x = x^i;
			}
			if(x==X){
				int p = (n-2);
				int q = 2*(n-2);
				cout<<p<<" "<<q<<" "<<(p^q)<<endl;
			}
			else
			{
				int p = n-2;
				int th = p^X^x;
				while(th==p||th>500000||th==0||th<=n-3)
				{
					p+=1;
					th = p^X^x;
				}
				cout<<0<<" "<<p<<" "<<th<<endl;
			}
		}

  
        t--;
    }
    return 0;
}
