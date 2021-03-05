#include<bits/stdc++.h>


using namespace std;

#define N 1000007

int prime[N];
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
    long long int  n;
    long long int ans = 0;
    int flag = 0;
    cin >> n;
    for(long long int i = 1; i * i <= n; i++){
        if(n % i == 0){
            for(long long int j = 1; j <= i;j++){
                if(prime[j] == 0){
                    if(i % (j*j)==0){
                        flag = 1;
                        break;
                                
                    }   
                }

            }
            if(flag==0){
                ans = max(ans, i);
            }
            flag = 0;
             for(long long int j = 1; j <= n/i;j++){
                if(prime[j] == 0){
                    if((n/i) % (j*j)==0){
                        flag = 1;
                        break;
                       
                    }
                   
                }
            }
            if(flag == 0){
                ans = max(ans, n/i);
            }
        }
        
           
        
    }
    cout << ans;

    return 0;
}