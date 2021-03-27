#include<bits/stdc++.h>


using namespace std;

 long long int count( int S[], int m, int n )
    {
        long long int t[m+1][n+1];
        for(int i = 0; i <= m; ++i){
            for (int j = 0; j <= n; j++)
            {
                if(i == 0){
                    t[i][j] = 0;
                }
                if(j==0){
                    t[i][j]= 1;
                }
            } 
        
        }
        
        for(int i = 1; i <= m; ++i){
            for (int j = 1; j <= n; j++)
            {
                if(S[i-1] <=j){
                    t[i][j] =  t[i][j-S[i-1]] + t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            } 
        
        }
        return t[m][n];
    }
int main(){

    int m,n;
    cin >> m >> n;
    int S[m];

    for (int i = 0; i < m; i++)
    {
        cin >> S[i];
    }

    long long int x = count(S,m,n);
    cout << x;
    


    return 0;
}