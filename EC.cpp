#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    while (n--)
    {
        long long int x;
        cin >> x;
        vector <long long int> v;
        long long int ans = 0;
        if(x%2==0){
            while (x>0)
            {
                int rem = x % 2;
                //cout<<rem;
                v.push_back(rem);
                x = x/2;
            }
            int i = 0;
            while (!v[i])
            {
                i++;
            }
            int n = v.size();
            n= n-i-1;
            for (int j = i; j < v.size() ; j++)
            {
                ans += v[j]*(1<<(n-(j-i)));
               // cout << v[j] << endl;
            }
            cout << ans << endl;
        
        }
        else cout << x << endl;
        
    }
    
    return 0;
}