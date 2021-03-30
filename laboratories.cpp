#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    map <string, int> mp;
    while (n--)
    {
        string str;
        cin >> str;
        mp[str]++;
    }
    for(auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    
    return 0;
}