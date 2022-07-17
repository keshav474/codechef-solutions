// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


int dp[1001][1001];
class Solution {
	public:
	    void func(string s)
	    {
	        for(int i=1;i<s.length();i++)
	        {
	            if(s[0] == s[i])
	            dp[0][i] = 1;
	            if(s[i] == s[0])
	            dp[i][0] = 1;
	        }
	        for(int i=0;i<s.length();i++)
	        cout<<s[i]<<" ";
            cout<<endl;
	        for(int i=1;i<s.length();i++)
	        {
    	        cout<<"  ";

	            for(int j=1;j<s.length();j++)
	            {
	                if(s[i] == s[j] && i != j)
	                dp[i][j] = dp[i-1][j-1] + 1;
	                else
	                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                    cout<<dp[i][j]<<" ";
	                
	            }
                cout<<endl;
	        }
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    func(str);
		    return dp[str.length()-1][str.length()-1];
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
//    y v p y r u v j h b
// y  0 0 0 
// v
// p
// y
// r
// u
// v
// j
// h
// b