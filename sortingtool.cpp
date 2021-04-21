#include<bits/stdc++.h>


using namespace std;
int main(){

    int n, m;
    cin >> n >> m;
    map <int, int> mp;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(mp.find(x) == mp.end()){
            v.push_back(x);
            mp[x]++;
        }
        else{
            mp[x]++;
        }

    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < mp[v[i]]; j++)

        {
            cout << v[i] << " ";
        }
        
    }
    
    
    return 0;
}