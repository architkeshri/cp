#include<bits/stdc++.h>

// sub string problem
using namespace std;
int main(){

    string str;
    cin >> str;
    string pattern;
    cin >> pattern;
    int i = 0, j = 0, st = 0;
    while (st < str.size())
    {
        /* code */
        if (str[i] == pattern[j])
        {
            i++;
            j++;
            if(j == pattern.size()){
                break;
            }
        }
        else
        {
            j = 0;
            i = st+1;
            st++;
        }
        
        
    }
    if(j == pattern.size()){
        cout << "Found" << endl;
    }
    else 
        cout << "NOT FOUND";
    return 0;
}