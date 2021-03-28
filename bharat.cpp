#include<bits/stdc++.h>


using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map <char, int> mp;
        map<char, int> ::iterator it;
        for(int i = 0 ; i < s.size(); i++){
            it = mp.find(s[i]);

            if(it == mp.end()){
                cout << s[i];
                mp.insert(make_pair(s[i],1));
            }
        }
        cout << endl;
    }

    return 0;
}