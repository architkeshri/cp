#include<bits/stdc++.h>


using namespace std;
int main(){

        string s;
        cin >> s;
        string p;
        cin >> p;
        vector<int> ans;
        int i = 0;
        int j = 0;
        map<char,int> mp;
       
        int n = s.size();
        int m = p.size();
        for(int k = 0; k < m; ++k){
            mp[p[k]]++;
        }
        int count = mp.size();
        while(j < n){
           
           if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;
                
                if(mp[s[j]] == 0){
                    count--;
                }
            }
            
            if(j-i+1 < m){
                j++;
            }
            else if(j-i+1 == m ){
                
                if(count == 0){
                    ans.push_back(i);
                }
                if(mp.find(s[i]) != mp.end()){
                    mp[s[i]]++;
                }
                if(mp[s[i]] == 1){
                    count++;
                }
                i++;
                j++;
            }
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        
        
    return 0;
}



       
        
            







   
