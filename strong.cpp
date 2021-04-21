#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        list<char> l;
        for (int i = 0; i < n; i++)
        {
            l.push_back(s[i]);
        }
        int c = 0;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if(l.front() == '*'){
                c++;
                if(c==k){
                    flag = 1;
                    break;
                }
            }
            else{
                c=0;
            }
            l.pop_front();

        }
        if(flag){
            cout << "YES\n";
        }
        else cout << "NO\n";
        

        
          
        }

        
    
    

    return 0;
}