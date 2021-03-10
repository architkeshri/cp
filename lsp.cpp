#include<bits/stdc++.h>

//longest prefix suffix using kmp search

using namespace std;
int main(){

    string str;
    cin >> str;
    int  n = str.size();

    int lsp[n];
    lsp[0] = 0;
    int i = 0, j = 1;
    
    while (j < n)
    {
        if(str[i] == str[j]){
            lsp[j] = i+1;
            i++;
            j++;
        }
        else{
            if(i == 0){
                lsp[j] = 0;
                j++;
            }
            else{
                i = lsp[i-1];
            }
        }
    }
    
    cout << lsp[n-1];

     
    return 0;
}