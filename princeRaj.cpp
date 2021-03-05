#include<bits/stdc++.h>


using namespace std;
int main(){

    int t, n;
    cin >> t >> n;
    int a[n+2]= {0};
    
    while (t--)
    {
        int l,r;
        cin >> l >> r;
            a[l]++;
            a[r+1]--;
          
               
    }
    for (int i = 1; i < n+1; i++)
    {
        a[i] += a[i-1];
    }
    
    int max = a[0];
    int ans ;
    
    for (int i = 1; i <= n; i++)
    {
        if(a[i] > max){
            max = a[i];
            ans = i;
        }
    }
    cout << max << " " << ans << endl;
    
    return 0;
}