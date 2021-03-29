#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        int flag = 1;
        
        for (int i = 0; i < s.size()-1; i++)
        {
            string str = s.substr(i,2);
            if(str == "ch"|| str == "ef" || str == "he"){
                ans++;
                flag = 0;
                break;
            }
            
            
        }
        
        if(flag)
        {
        for (int i = 0; i < s.size()-2; i++)
        {
            string str = s.substr(i,3);
            if(str == "che"||  str == "hef"){
                ans++;
                break;
            }
            
            
        }
        
    }
        
    }
    cout << ans;
    return 0;
}