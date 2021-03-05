#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i;
    cin >> i;
    string s = "";
    if(i <= 26){
        s += to_string(char(64+i));
    }
    else if (i > 26 && i < 26*26){
     
         s += char(64+(i/26));
         s += char(64+(i%26));
    }
    cout << s;
    return 0;
}
