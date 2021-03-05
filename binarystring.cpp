#include<bits/stdc++.h>


using namespace std;
int main(){
    string s;
    cin >> s;
    int count0 = 0, count1 = 0;
    int count = 0;
    int i = 0;
    while (i < s.size())
    {
        if(s[i]=='0') count0++;
        else count1++;
        if(count0 == count1) count++;
        i++;
    }
    if(count0 != count1) cout << -1;
    else cout << count;
   

    return 0;
}