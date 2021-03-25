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

    int n, s;
    cin >> n >> s ;
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
     
    }
   // cout << sum <<" ";
    int s1 = (sum+s)/2;
    // cout << s1 << " ";
    subsetSum(arr,n,s1);
    
    // for (int i = 0; i <= sum; i++)
    // {
    //     if(t[n][i] && ((sum - 2*i) == s)){
    //         cout << 2 * t[n][i];
    //     }
        
    // }
   
     cout <<  t[n][s1];
    
    return 0;
}