#include<bits/stdc++.h>

using namespace std;

int primeFact[3002];

void prime_fact(){
    for (int i = 2; i < 3002; i++)
    {
        if(primeFact[i] == 0){
            primeFact[i] = 1;
            for (int j = i+i; j < 3002; j += i)
                {   
                   primeFact[j]++;

                }
        }
    }
    
}




int main(){
    prime_fact();
    int n, c = 0;
    cin >> n;
    for(int i = 1; i <=n; ++i){
        if(primeFact[i] == 2)
            c++;
    }
    cout << c;
    return 0;
}