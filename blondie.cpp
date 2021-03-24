#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long arr[n];
        vector<long int> ans;
        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if(arr[i] != -1){
                ans.push_back(arr[i]);
                sum += arr[i];
            }
            else{

            
                long  int x = sum/i ;
                sum += x;
                ans.push_back(x);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        
        

        
    }
    
    return 0;
}