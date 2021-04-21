#include<bits/stdc++.h>


using namespace std;

void solve(vector<vector<int>> &v, int n, int sum1, int sum2, int c, int &ans){
    if(n == 0){
        if(sum1 % 2 == 0 && sum2 % 2 == 0){
            ans = min(ans,c);
            return;
        }
        if(sum1 % 2 == 1 || sum2 % 2 == 1){
            //ans = -1;
            return;
        }

    }

    solve(v, n-1, sum1 + v[n-1][0], sum2 + v[n-1][1], c, ans);
    solve(v, n-1, sum1 + v[n-1][1], sum2 + v[n-1][0], c+1, ans);
    
}
int main(){

    int n;
    cin >> n;
    vector<vector<int>> v;
    //cout << "ABC";
  
    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for(int j = 0; j < 2; j++){

            int x;
            cin >> x;
            row.push_back(x);
           
        }
        v.push_back(row);
    }

    int sum1 = 0, sum2 = 0, c = 0;
    int ans = INT_MAX;
    solve(v, n, sum1, sum2, c, ans);
    if(ans != INT_MAX)
    cout << ans;
    else
    cout << -1;
    
    return 0;
}