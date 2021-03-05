#include<bits/stdc++.h>


using namespace std;
int main(){

    long  long int n,p,ans;
    cin >> n;
    if(n != 0 ){
        if(n%4 == 0){
            p = pow(1378,4);
            ans = p % 10;
        }
        else{
            p = pow(1378,n%4);
            ans = p % 10;
        }
    }
    else{
        ans = 1;
    }
    cout << ans;
    return 0;
}