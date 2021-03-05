#include<bits/stdc++.h>
using namespace std;

#define N 100000007

long int prime[N];
void seive(){
    prime[0] = 1;
    prime[1] = 1;
    for(int i = 2; i * i < N; ++i){
        if(prime[i] == 0){
            for (int j = i * i; j < N; j += i)
            {
                prime[j] = 1;
            }
            
        }
    }
}

int main(){
    seive();
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> m >> n;
        for (int i = m; i <= n; i++){
            if(prime[i] == 0){
                cout << i <<"\n";
            }
        }
        cout << "\n";
        
        
    }

    return 0;
}