#include<bits/stdc++.h>


using namespace std;
int main(){

    int n,h,x;
    bool ans = false;
    cin >> n >> h >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n; ++i){
        if(arr[i]+x >= h){
            ans = true;
            break;
        }
    }
    if(ans) cout <<"YES";
    else cout << "NO";
    
    return 0;
}