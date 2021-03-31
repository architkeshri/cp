// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    string caseSort(string s, int n){
        
        // your code here
        string upper = "";
        string lower = "";
        
        for(int i = 0 ; i < n; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                lower.push_back(s[i]);
                
            }
            else{
                upper.push_back(s[i]);
            }
        }
        
        sort(lower.begin(),lower.end());
        sort(upper.begin(),upper.end());
        
        int lo = 0;
        int up = 0;
        
        for(int i = 0 ;i < n; i++){
            if(s[i]>='a' && s[i] <= 'z'){
                s[i] = lower[lo];
                lo++;
            }
            else{
                s[i] = upper[up];
                up++;
            }
        }
        return s;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends