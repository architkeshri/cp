#include<bits/stdc++.h>


using namespace std;
int main(){

    long long int n, k;
    cin >> n >> k;
    long long ans = 0;
    long long even = n/2;
    long long odd = n - even;
    if(k <= odd){
        ans = 1 +(k - 1)*2;
    }
    else
        ans = 2 + (k- odd - 1)*2;
    
    cout << ans;
    return 0;
}