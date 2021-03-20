#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        int len = str.size();
        int ans;
        string s="";
        if(len>10){
            ans = len - 2;
            s.append(1,str[0]);
            s += to_string(ans);
            s.append(1,str[len-1]);

        }
        else{
            s = str;
        }
        cout << s <<endl;
    }
    return 0;
}