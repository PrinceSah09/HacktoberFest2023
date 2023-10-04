//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    const int MOD = 1e9 + 7;
        int n = s.length();
        
        // Initialize a DP array to store the number of distinct subsequences
        vector<int> dp(n + 1, 0);
        
        // An empty subsequence is always present
        dp[0] = 1;
        
        // Create a map to store the last index of each character
        unordered_map<char, int> last_occurrence;
        
        for (int i = 1; i <= n; i++) {
            dp[i] = (2 * dp[i - 1]) % MOD; // Double the previous count
            
            if (last_occurrence.find(s[i - 1]) != last_occurrence.end()) {
                // If the current character has occurred before
                int prev_index = last_occurrence[s[i - 1]];
                dp[i] = (dp[i] - dp[prev_index - 1] + MOD) % MOD; // Subtract the count of subsequences ending at the previous occurrence
            }
            
            last_occurrence[s[i - 1]] = i;
        }
        
        return (dp[n] + MOD) % MOD; 
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends