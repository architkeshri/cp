#include<bits/stdc++.h>


using namespace std;
int main(){

    int v, m;
    cin >> v >> m;
    int coins[m];

    for (int i = 0; i < m; i++)
    {
        cin >> coins[i];
    }
    int t[m+1][v+1];

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <=v; j++)
        {
            if(i==0){
                t[i][j] = INT_MAX - 1;
            }
            if(j == 0 && i != 0){
                t[i][j] = 0;
            }
            if(i == 1 && j != 0){
                if(j%coins[0] == 0){
                    t[i][j] = j/coins[0];
                }
                else t[i][j] = INT_MAX - 1;
            }

        }
        
    }

    // for (int i = 0; i <=m; i++)
    // {
    //     for (int j = 0; j <= v; j++)
    //     {
    //         cout << t[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    for (int i = 2; i <= m; i++)
    {
        for (int j = 1; j <=v; j++)
        {
            if(coins[i-1]<=j){
                t[i][j] = min(t[i][j-coins[i-1]]+1,t[i-1][j]);
            }
            else t[i][j] = t[i-1][j];
        }
        
    }
    
    cout << t[m][v];
    
    return 0;
}