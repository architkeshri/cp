#include<bits/stdc++.h>

using namespace std;
void solve(vector<int> &v, int n, int b, int k, int op,int &ans){
    if(k == n){
        ans = max(ans,op);
        return;
    }
    if(b - v[k] >= 0){
        solve(v,n,b-v[k],k+1,op+1,ans);
   
    }
         solve(v,n,b,k+1,op, ans);
   
   
}

int main(){
    
    int t;
    cin >> t;
    int j = 1;
    while(j <= t){
        int n, b;
        cin >> n >> b;
        vector<int> v;
        for(int i = 0; i < n; ++i){
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        int k = 0;
        int op = 0;
       int ans= INT_MIN;
       solve(v, n, b, k, op,ans);
        cout <<"Case #"<<j<<": "<<ans;
        j++;
    }
    return 0;
}