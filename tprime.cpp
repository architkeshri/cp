#include<bits/stdc++.h>

#define N  1000007
using namespace std;
unsigned int seive[N];

void prime(){
    seive[0] = 1;
    seive[1] = 1;
    for(int i = 2; i*i < N; ++i){
        if(seive[i] == 0){
            for(int j = i*i; j < N; j+=i)
            {
                seive[j] = 1;
            }
        }
    }
}
int main(){
    prime();
    long long t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long int sq = sqrt(x);
        if(sq * sq == x && seive[sq] == 0){
            cout << "YES\n";
        }
        else
            cout << "NO\n";

    }
    

    return 0;
}