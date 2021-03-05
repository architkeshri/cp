#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >>k;
        int score[k];
        int total[n] = {0};
       
        for (int i = 0; i < k; i++)
        {
            cin >> score[i];
        }
    
        for (int i = 0; i < n; i++)
        {
            
            string s;
            cin >> s;
            
            for (int j = 0; j < k; j++)
            {
                if(s[j] == '1'){
                    total[i] += score[j];
                }
            }
            cout << total[i]<< endl;
            
            
        }
        
        
    }
    
    return 0;
}

