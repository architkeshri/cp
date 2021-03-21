#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        if(s.size()>=5){
        while(i < s.size()-4){
            if(s.substr(i,5) == "party"){
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
                i = i + 5;
              
            }
            else
             i++;
        }
        }
        cout << s << endl;

    }
    

    return 0;
}