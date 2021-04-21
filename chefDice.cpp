#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = 0;
        int rem = n%4;
        if(n > 4){
            //ans = (n/4)*36;
            if(rem == 1){
                ans = 44*(n/4) + 32;
            }
            else if(rem == 2){
                ans =44*(n/4) + 44 ;
            }
            else if(rem == 3){
                ans = 44*(n/4) +55;
            }
            else if(rem == 0){
                ans = 44*(n/4) + 16;
             }

        }
        else{
            if(n==1){
                ans = 20;
            }
            else if(n==2){
                ans = 36;
            }
            else if(n==3){
                ans = 51;
            }
            else{
                ans = 60;
            }
        }
        cout << ans << endl;
    }

    
    return 0;
}