#include<bits/stdc++.h>


using namespace std;

int t[1001][1001];

void subsetSum(int arr[],int n,int sum){

     for(int i = 0; i <= n; ++i){
        for (int j = 0; j <= sum; j++)
        {
            if(i == 0){
                t[i][j] = 0;
            }
            if(j==0){
                t[i][j]= 1;
            }
        } 
        
    }

     for(int i = 1; i <= n; ++i){
        for (int j = 1; j <= sum; j++)
        {
          if(arr[i-1] <= j){
              t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];
          }
          else{
              t[i][j] = t[i-1][j];
          }
        } 
        
    }


    

}
int main(){

    int n,sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    subsetSum(arr,n,sum);
    
   cout << t[n][sum];
    return 0;
}