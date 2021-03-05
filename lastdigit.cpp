#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        long long int a,b;
        cin >> a >> b;
        if(b > 0){
            b= b % 4;
            if(b != 0)
                a = pow(a,b);
            else
                a = pow(a,4);

            cout << a % 10 << endl;
        }
        else if(b == 0){
            cout << 1 << endl;
        }
       
    }
    
    return 0;
}