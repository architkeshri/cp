#include<bits/stdc++.h>


using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > i+1){
                c=0;
                break;
            }   
            while(arr[i] < i+1){
               arr[i]++; 
                c++;
            }
            
        }
        if(c&1){
            cout << "First"<<endl;
        }
        else
        {
            cout << "Second" << endl;
        }
        
        
        
    }
    

    return 0;
}