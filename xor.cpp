#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        int n, m, k;
        cin >> n >> m >> k;
        int t[n+m]={0};

        for(int i = 1;i<=n;++i){
            t[i+1]++;
            t[i+m+1]--;
        }
      
        for (int i = 2; i <= n; i++)
        {
            t[i] += t[i-1];

            if(t[i]&1){
                ans ^= (k+i);
            }

        }
        cout << ans << endl;
        

       
    }
    
    return 0;
}