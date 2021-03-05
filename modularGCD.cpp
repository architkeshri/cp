#include<bits/stdc++.h>

using namespace std;

const long long int m =10e9+7;

long long int modpower(long long a, long long  n,long long d){
    if(n == 0)
        return 1;
    long long int x = modpower(a,n/2,d);
    x =((x %d) * (x % d)) % d;
    if(n & 1){
        x = ((x % d) * (a % d)) % d;
    }
    return x;
}

long long int gcd(long long a,long long b, long long n){
    if(a == b){
        return (modpower(a,n,m) + modpower(b,n,m))% m;
    }
    long long num = a-b;
    long long candidate = 1 ;
    for (long long int i = 1; i*i <= num; i++)
    {
        if(num % i == 0){
            long long int temp = (modpower(a,n,i) + modpower(b,n,i)) % i;
            if(temp == 0)
                candidate = max(candidate, i);
            
            temp =(modpower(a,n,num/i) + modpower(b,n,num/i)) % (num/i);
             if(temp == 0)
                candidate = max(candidate, num/i);
        }
    }

    return candidate % m;
    

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long  A, B, N;
        cin >> A >> B >> N;
        cout << gcd(A,B,N) << endl;
    }
    
    


    return 0;
}