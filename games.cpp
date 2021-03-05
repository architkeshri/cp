#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
    float n;
    cin >> n;
    int i = 1;
    float d = n - floor(n); 
    while (true && d != 0)
    {
        if(d*i>=1){
            break;
        }
        i++;
    }
    if(d*i == 1) 
    cout << i << endl;
    else if(d == 0)
    cout << 1 << endl;
    else 
    cout << i - 1<<endl;
    }
    
    return 0;
}