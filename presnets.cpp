#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    map <int, int> mp;
    for (int i = 1 ; i <=n; i++)
    {
        int x;
        cin >> x;
        mp[x] = i;
    }
    for(auto x : mp){
        cout << x.second << " ";
    }
    
    return 0;
}