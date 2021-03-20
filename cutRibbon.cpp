#include<bits/stdc++.h>


using namespace std;

int t[4002][4002];

int solve(int n, int a, int b, int c, int op,int &ans){
    if(n == 0){
        ans = max(ans,op);
        return ans ;
    }
    if(t[n][op] != -1){
        return t[n][op];
    }
    if(a<=n)
    t[n][op]= max(ans, solve(n-a, a, b, c,op+1,ans));
    if(b<=n)
    t[n][op]= max(ans, solve(n-b, a, b, c,op+1,ans));
    if(c<=n)
    t[n][op]= max(ans, solve(n-c, a, b, c,op+1,ans));
 


}
int main(){

    memset(t, -1, sizeof(t));
    int n, a, b, c, op = 0;
    int ans = INT_MIN;
    cin >> n >> a >> b >> c;
    int arr[3] = {a, b, c};
    sort(arr, arr+3);
    int x = solve(n, arr[2], arr[1], arr[0], op,ans);

    cout << ans;
    return 0;
}                                                                                                                                                                              