#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    map <int , int> mp;
    set<int, greater<int>> st;
    set<int, greater<int>> :: iterator it;
    while (n--)
    {
        int x;
        cin >> x;
        mp.insert(make_pair(x,0));
        int t;
        cin >> t;
        while(t--){
            int id;
            cin >> id;
            st.insert(id);
        }
    }
    int ans = 0;
    for(it = st.begin(); it != st.end(); it++){
        if(mp.find(*it) == mp.end()){
            ans++;
        }
    }
    cout << ans;
    
    return 0;
}