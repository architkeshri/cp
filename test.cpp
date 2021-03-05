#include<bits/stdc++.h>


using namespace std;
int main(){
    
    float d = 5 - floor(5);
    int i = 1;
    while (true)
    {
        if(d*i>=1){
            break;
        }
        i++;
    }
    if(d*i == 1) 
    cout << i;
    else 
    cout << i - 1;
    
    return 0;
}