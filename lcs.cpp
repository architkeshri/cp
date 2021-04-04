#include<bits/stdc++.h>


using namespace std;

int solve(string s1, string s2, int s1_size, int s2_size){
    if(s1_size == 0 || s2_size == 0){
        
        return 0;
    }
    if(s1[s1_size-1] == s2[s2_size-1]){
        return 1 + solve(s1, s2, s1_size-1, s2_size-1);
    }
    else{
        return max(solve(s1, s2, s1_size-1, s2_size), solve(s1, s2, s1_size, s2_size-1));
    }
}
int main(){

    string s1, s2;
    cin >> s1 >> s2;
    cout << solve(s1, s2, s1.size(), s2.size());
    return 0;
}