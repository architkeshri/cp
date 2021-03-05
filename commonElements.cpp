#include<bits/stdc++.h>


using namespace std;
int main(){

    int m,n;
    cin >> m >> n;
    int mat[m][n];
    map<int,int> mp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
        
    }

    int c = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(mp[mat[i][j]]==c) mp[mat[i][j]]++;
        }
        c++;
        
    }

    for(auto x : mp){
        if(x.second == m){
            cout << x.first<<" ";
        }
        
    }
        
    return 0;
}