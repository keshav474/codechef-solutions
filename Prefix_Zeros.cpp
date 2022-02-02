#include<bits/stdc++.h>
#define FAST     ios_base::sync_with_stdio(0);
#define INPUT    cin.tie(0);
#define OUTPUT   cout.tie(0);
#define ll       long long int

using namespace std;

ll solver(ll m, string s)
{
    ll res = 0;
    for(int i=m;i>=0;i--)
    {
        ll temp = (int(s[i])-int('0')+res)%10;
        if(temp==0)
            continue;
        res+=10-temp;
    }
    return res;
}

int main()
{
    FAST INPUT OUTPUT
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        int arr[n]={0};
        cin>>s;
        ll l=0,r=n-1,ans=0;
        while(l<=r)
        {
            ll m=(l+r)/2;
            if(solver(m,s)>k)
                r=m-1;
            else
            {
                ans = m+1;
                l=m+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
