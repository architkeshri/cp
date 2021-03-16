#include<bits/stdc++.h>


using namespace std;
int main(){

    string s;
    cin >> s;
    int ans = INT_MIN;
    int st,end;
    for (int starting_index = 0; starting_index < s.size(); starting_index++)
    {
        for (int array_size = 1; array_size + starting_index < s.size() ; array_size++)
        {   
            int i = starting_index;
            int j = array_size +starting_index;
            while (i <= j)
            {
                if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{
                    break;
                }
            }
            if(i > j){
                if(array_size > ans){
                    ans = array_size  ;
                    st = starting_index;
                    end = starting_index + array_size;
                }
            }
            
        }
        
    }

    for (int i = st; i < end+1; i++)
    {
        cout << s[i];
    }
    
    
    return 0;
}