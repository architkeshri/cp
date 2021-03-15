#include<bits/stdc++.h>


using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        int i;
        for(i = 0; i <=32; i++){
            if((1<<i) > c){
                break;
            }
        }
        int a[i];
        int b[i];
        int binary[i];
        int l = i-1;
        while (c)
        {
            binary[l] = c % 2;
            c /= 2;
            l--; 
            
        }
        
        //cout << i << endl;
        //int count = 1;
        for (int j = 0; j < i; j++)
        {
           if(j==0){
               if(binary[0]==1){
                   a[j] = 1;
                   b[j] = 0;
               }
               else{
                   a[j] = 1;
                   b[j] = 1;
               }
           }
           else{
               if(binary[j] == 1){
                   a[j] = 0;
                   b[j] = 1;
               }
               else{
                   a[j] = 1;
                   b[j] = 1;
               }
           }
            
        }
        long int A = 0, B = 0;
        for (int k = 0; k < i; k++)
        {
            //cout << binary[k];
           //cout << a[k];
           // cout << b[k];
            A += a[k]*pow(2,i-k-1);
            B += b[k]*pow(2,i-k-1);
        }
        cout << A*B << endl;
        //cout << A << " "<< B << endl;
        
    }
    
    return 0;
}