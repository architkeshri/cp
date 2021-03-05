#include<bits/stdc++.h>


using namespace std;
int main(){
    long long int n;
    int ans = 0;
    cin >> n;
    for(int i = n; i >= 0; i--){
        if((i & (i-1)) == 0){
            ans = i ; 
            break;
                 
        }
    }
 
    ans = (n - ans )*2 +1;
    cout << ans; 

    return 0;
}