#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;

    while (t--)
    {
        int c = 0;
        string s;
        cin >> s;
        int i = 0, j = 1;
        while(j < s.size()){
            if(s[i] == '1'){
                if(s[j] == '1'){
                    j++;
                }
                else{
                    c++;
                    i = j;
                    j++;
                }
            }
            else{
                i++;
                j++;
            }
            
            
        }
        if(s[j-1] =='1') c++;
        cout << c << endl;
    }
    
    return 0;
}