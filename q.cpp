#include <bits/stdc++.h>
using namespace std;


void solve(int n, int p, int q, long long int m, int topo[], int tivo[],long int profit,long int &ans){
  if(n == 0  ){
     return;
   
  }
  if((p == 0 ||q == 0)){
    ans = max(ans,profit);
  }
     solve(n-1, p-1, q, m, topo, tivo, (profit%m+(topo[n-1]%m)*(topo[n-1]%m)%m),ans),
      solve(n-1, p, q-1, m, topo, tivo, (profit%m+(tivo[n-1]%m)*(tivo[n-1]%m)%m),ans),
      solve(n-1, p, q, m, topo, tivo, profit%m,ans),
      solve(n-1,p-1,q-1,m, topo, tivo, (profit%m+((topo[n-1]%m)*(topo[n-1]%m)%m)+((tivo[n-1]%m)*(tivo[n-1]%m)%m)+(2%m)*(tivo[n-1]%m)*(topo[n-1]%m)%m),ans);
    
    
}
int main()
{
  int n,p,q;
  long long int m;
  cin >> n >> p >> q >> m;
  
  int topo[n];
  int tivo[n];
  
  for(int i = 0; i < n; i++){
    cin >> topo[i];
  }
  
  for(int i = 0; i < n; i++){
    cin >> tivo[i];
  }
  
  long int profit = 0,ans = 0;
  solve(n,p,q,m,topo,tivo,profit,ans);
  cout << ans;
  
  
  return 0;
}