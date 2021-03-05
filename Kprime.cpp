#include<bits/stdc++.h>

using namespace std;

const int N = 100007;
int prime[N];
int prime_factor[N];

void seive(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i  <= N; ++i){
        if(prime[i]== 0){
            prime_factor[i] = 1;
            for(int j = i+i; j <= N; j += i){
                prime[j] = 1;
                prime_factor[j]++;
            }
        }
    }
   

}
int main(){
    seive();
    int t;
    cin >> t;
   
    while (t--)
    {
        unsigned int a, b, k;
        int ans = 0;
        cin >> a >> b >> k;
        for (int i = a; i <= b; i++)
        {
            if (prime_factor[i] == k)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}