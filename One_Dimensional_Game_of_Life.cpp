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
        string s;
        cin>>s;
        int n=s.length();
        int arr[4][n],farr[4][n];
        ms(arr,2);
        if(s[0]=='1')
        {arr[0][n-1] =1;
        arr[0][0] =1;
        arr[0][1] =1;
        
        arr[1][n-1] =0;
        arr[1][0] =1;
        arr[1][1] =0;
        
        arr[2][n-1] =1;
        arr[2][0] =0;
        arr[2][1] =0;

        arr[3][n-1] =0;
        arr[3][0] =0;
        arr[3][1] =1;}
        else
        {arr[0][n-1] =1;
        arr[0][0] =0;
        arr[0][1] =0;
        
        arr[1][n-1] =1;
        arr[1][0] =0;
        arr[1][1] =1;
        
        arr[2][n-1] =0;
        arr[2][0] =1;
        arr[2][1] =1;

        arr[3][n-1] =1;
        arr[3][0] =1;
        arr[3][1] =0;}
        
        for(int i=1;i<n-1;i++)
        {
            if(s[i]=='1')
            {
                for(int j=0;j<4;j++)
                {
                    if(arr[j][i]==1)
                    {
                        if(arr[j][i-1]==1)
                        arr[j][i+1] =1;
                        else
                        arr[j][i+1] =0;
                    }
                    else
                    {
                        if(arr[j][i-1]==1)
                        arr[j][i+1] =0;
                        else
                        arr[j][i+1] =1;
                    }

                }
            }
            else
            {
                for(int j=0;j<4;j++)
                {
                    if(arr[j][i]==1)
                    {
                        if(arr[j][i-1]==1)
                        arr[j][i+1] =0;
                        else
                        arr[j][i+1] =1;
                    }
                    else
                    {
                        if(arr[j][i-1]==1)
                        arr[j][i+1] =1;
                        else
                        arr[j][i+1] =0;
                    }
                }                
            }
        }
        frr(i,0,4)
        {
            frr(j,1,n-1)
            {
                if((arr[i][j-1]==0&&arr[i][j+1]==1 )||)

            }
        }

 
        t--;
    }
    return 0;
}
