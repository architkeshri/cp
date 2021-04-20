#include<bits/stdc++.h>


using namespace std;
int main(){
    int n ;
    cin >> n;

    do
    {
        int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += i*i;
        }
        cout << sum << endl;
        cin >> n;
    } while (n);
    
    return 0;
}