#include<bits/stdc++.h>


using namespace std;
int main(){

    map <int, int> mp;
    for (int i = 0; i < 3; i++)
    {
        int x; 
        cin >> x;
        mp[x]++;
    }
    int flag = 0;
    for(auto x: mp){
        if(x.second >=2){
            flag = 1;
        }
    }
    if(flag){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    
    return 0;
}