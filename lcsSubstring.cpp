
#include<bits/stdc++.h>


using namespace std;
int main(){

    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();

    int t[n+1][m+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i == 0 || j == 0){
                t[i][j] = 0;
            }
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(s1[i-1]== s2[j-1]){
                t[i][j] = 1+t[i-1][j-1];
            }
            else{
                t[i][j] = 0;
            }
        }
        
    }
    
    int mx = INT_MIN;

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
        {
            mx = max(mx, t[i][j]);
        }
        
    }
    
    cout << mx ;


    return 0;
}