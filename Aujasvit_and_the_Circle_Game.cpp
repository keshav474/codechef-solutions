#include<iostream>
#include <vector>
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

int solve(int n,int m)
{
    vector<int>v;
    vector<int>::iterator it;
    vector<int>::iterator it2;
    vector<int>::iterator it1;
    
    
    frr(i,1,n+1)
    v.push_back(i);
    if(n>m)
    v.erase(v.begin()+m-1,v.end());
    
    while(v.size()!=1)
    {
        int a=m%v.size();
        it=v.begin();
        if(m==1)
        {
            it=v.begin();           
        }
        else if(a==0)
            {
                it=v.begin()+v.size()-1;
                
            }
        
        else
            it=v.begin()+a-1;
        
            
            v.erase(it);
            it2=v.end();
            
    

    }
    
    return v[0];



}

int main()
{
    // FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n,m;
        cin>>m>>n;

        
        cout<<"1 ";
        if(m-1&1)
        cout<<"1 ";
        else
        cout<<"2 ";
        int x;
        for(int x=3;x<=n;x++)
        {
            if(x<=m)
            cout<<solve(x,m)<<" ";
            else if(x==m+1)
            {   
                x=solve(x,m);
                cout<<x<<" ";
            }
            else
            cout<<x<<" ";





        }
            cout<<endl;
 
        t--;
    }
    return 0;
}
