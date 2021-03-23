#include<bits/stdc++.h>


using namespace std;

bool t[1001][1001];

void subsetSum(int arr[],int n,int sum){

     for(int i = 0; i <= n; ++i){
        for (int j = 0; j <= sum; j++)
        {
            if(i == 0){
                t[i][j] = false;
            }
            if(j==0){
                t[i][j]= true;
            }
        } 
        
    }

     for(int i = 1; i <= n; ++i){
        for (int j = 1; j <= sum; j++)
        {
          if(arr[i-1] <= j){
              t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
          }
          else{
              t[i][j] = t[i-1][j];
          }
        } 
        
    }


    

}
int main(){

    int n,sum=0;
    cin >> n ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if(sum%2 == 1){
        cout << "NOT Possible";
    }
    else{
        sum = sum/2;
        subsetSum(arr,n,sum);
    
        if(t[n][sum]){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    }
    

   
    return 0;
}