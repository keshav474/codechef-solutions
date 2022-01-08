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

void func(int n,int x)
{
    int count = 0,i=1;
    unordered_set<int>s;
    while(count!=n)
    {
        int a=i;
        int b=a^x;
        if(s.find(a) == s.end()&&a!=x&&b!=x)
        {
            cout<<a<<" "<<b<<" ";
            count+=2;
            s.insert(a);
            s.insert(b);
        }
        i++;
    }
}

void func1(int n,int x)
{
    int count = 0,i=7;
    unordered_set<int>s;
    while(count!=n)
    {
        int a=i;
        int b=a^x;
        if(s.find(a) == s.end()&&a!=x&&b!=x&&b!=1&&b!=2&&b!=3&&b!=4&&b!=5&&b!=6)
        {
            cout<<a<<" "<<b<<" ";
            count+=2;
            s.insert(a);
            s.insert(b);
        }
        i++;
    }
}

int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t)
    {
        int n,x;
        cin>>n>>x;
        if(n%4==0)
        {
            func1(n-4,x);
            if(x>3)
            cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<x;
            else if(x==1||x==3)
            cout<<"4"<<" "<<"2"<<" "<<"6"<<" "<<x;
            else
            cout<<"1"<<" "<<"5"<<" "<<"4"<<" "<<x;



        }
        else if(n%2==0)
        func(n,x);
        else
        {
            func(n-1,x);
            if((n-1)%4==0)
            cout<<x;
            else
            cout<<"0";
        }
        cout<<endl;

 
        t--;
    }
    return 0;
}
