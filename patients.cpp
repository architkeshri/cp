#include<bits/stdc++.h>


using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        
        multimap< int, int, greater<int> > m;
       
        int n;
        cin >> n;
        int c =0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            m.insert(pair<int,int> (arr[i],i) );
        }
        
        int ans[n] = {0};
        int l = 1;
        multimap<int, int> ::iterator it;

        for (it =m.begin(); it != m.end(); ++it)
        {
            ans[it->second] = l;
            //cout << it->second<< " ";
            l++;
            
        }
        for (int i = 0; i < n; i++)
         {
         cout<< ans[i] <<" ";
        }
        
        
        
    }
    
    

    return 0;
}