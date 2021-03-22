#include<bits/stdc++.h>


using namespace std;


int main(){
    int t ;
    cin >> t;
    vector<int> ans;
    for (int i = 1; i <=1000; i++)
    {
        ans.push_back(i*i);
    }
    
    while (t--)
    {
        for (int i = 1; i <= 1000; i++)
        {
            cout << ans[i] << endl;
            fflush(stdout);
            int s;
            cin >> s;
            if(s == 1){
                continue;
            }
            else if(s == -1){
                exit(0);
            }
        }
        
    }
    

    return 0;
}