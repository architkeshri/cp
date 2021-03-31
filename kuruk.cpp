#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
       
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
         
        }
        map <int, int> mp;
        for(int i = 0; i < n; i++){
            mp[i] = 2;
        }
        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] < n){
                if(mp[arr[i]] > 0){
                    mp[arr[i]]--;
                    mp[n- arr[i] -1]--;
                }
                else{
                    flag = 0;
                    break;
                }
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
        
    
        
        
    }
    return 0;
}