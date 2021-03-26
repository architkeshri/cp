#include<bits/stdc++.h>


using namespace std;
int main(){

    char arr[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    int c = 0, b = 0;
    int flag = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
          for (int k = i; k < i+2; k++)
          {
            for (int l = j; l < j+2; l++)
            {
                if(arr[k][l] == '.'){
                    c++;
                }
                else if(arr[k][l] == '#'){
                    b++;
                }
            }
            
          }
          if(c == 1 || c == 4){
              flag = 1;
          }
          if( b == 1 || b == 4){
              flag = 1;
          }
          c = 0;
          b = 0;
         
        }
        
    }
    if(flag){
        cout << "YES";

    }
    else cout << "NO";
    

    
    return 0;
}