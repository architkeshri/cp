#include<bits/stdc++.h>


using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int w1, w2, x1, x2,m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        int inr = w2 - w1;

        if(inr >= m*x1 && inr <= m*x2){
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    

    return 0;
}