#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    int p[n];
    int l[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        l[i] = i+1;
    }

    int t[n+1][n+1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i == 0){
                t[i][j] = 0;
            }
            if(j == 0){
                t[i][j] = 0;
            }
        }
        
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(l[i-1] <= j){
                t[i][j] = max(p[i-1]+t[i][j-l[i-1]],t[i-1][j]);
            }
            else
            
                t[i][j] = t[i-1][j];
        }
        
    }
    cout<< t[n][n];
    
    
    

    
    return 0;
}