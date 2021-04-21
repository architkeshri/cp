#include<bits/stdc++.h>


using namespace std;

int ans = INT_MAX;

void solve(int n, int m, int a, int b, int sum){
    if(n == 0 || n == -(m-1)){
        ans = min(ans,sum);
        return;
    }
    if(n > 0){
        solve(n-m,m,a,b,sum+b);
        solve(n-1,m,a,b,sum+a);
    }
    // else{
    //      solve(n-1,m, a,b,sum+a);
    // }
}

int main(){

    int n,m,a,b,sum=0;
    cin >> n >> m >> a >> b;
    solve(n, m, a, b, sum);
    cout << ans;

    return 0;
}