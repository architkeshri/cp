#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        double k1,k2,k3,v;
        cin >> k1 >> k2 >> k3 >> v;
        double  speed = k1*k2*k3*v;
        double ans = 100/speed;
        double ans1 = int(ans*100+.50);
        ans = double(ans1) / 100;
       // cout << ans <<  " ";
         //check = int(ans*100);
      // cout << check  << " ";
        int a = int(ans*100);
        if(a < 958){
            cout << "YES\n";
        }
        else cout << "NO\n";
    
    }
    return 0;
}