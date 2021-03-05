#include <bits/stdc++.h>

using namespace std;

const int size = 1000007;
int addition[size];
int subtraction[size];

int main(){
   int M, Q, N;
   cin >> M >> Q >> N;
   int arr[N];
   for(int i = 0; i < N; ++i){
       cin >> arr[i];
   }
   for(int i = 0; i < N; ++i){
       
           addition[arr[i]] = 1;   
       
   }
   for(int i = 0;i < N; ++i){
       for(int j = 1; j <= Q; j++){
           
           if((arr[i] + j*M) < size){
               if(addition[arr[i]+j*M]){
                   addition[arr[i] + j*M]++;
               }
           }
           if((arr[i]-j*M) > 0){
               if(addition[arr[i]-j*M]){
                   addition[arr[i]-j*M]++;
               }
           }
       }
   }
   int mx = addition[1];
   int ans;
    for(int i = 0; i < size; ++i){
        if(addition[i]>mx){
            mx = addition[i];
            ans = i;
        }
    }
    cout << ans+1;
}