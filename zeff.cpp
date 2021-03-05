#include<bits/stdc++.h>


using namespace std;
int main(){

    int n;
    cin >> n;
    int count_five = 0, count_zero = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 5){
            count_five++;
        }
        if(x == 0)
            count_zero++;
    }
    int req = count_five - count_five%9;
    if(count_zero == 0){
        cout << -1 << endl;
    }
    // else if(count_zero == 0 && req < 9){
    //     cout << -1;
    // }
    else if(req < 9 && count_zero != 0){
        cout << 0 << endl;
    }
    else{
        for(int i = 0; i < req; i++){
            cout<<5;
        }
        for(int i = 0; i <count_zero;i++){
            cout << 0 ;
        }
    }

    return 0;
}