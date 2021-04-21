#include <bits/stdc++.h>

using namespace std;

int t[1001][1001];

int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }

    if(t[n][W] != -1){
        return t[n][W];
    }
    if (wt[n - 1] <= W)
    {
        return t[n][W] = max(val[n - 1]+knapSack(W - wt[n - 1], wt, val, n -1), knapSack(W, wt, val, n - 1));
    }
    else if (wt[n - 1] > W)
    {
        return t[n][W]= knapSack(W, wt, val, n - 1);
    }
    
}
int main()
{
    int n,w;
    cin >> n >> w;
    memset(t,-1,sizeof(t));
    int wt[n];
    int val[n];
    for (int i = 0; i < n; i++)
    {
        cin >> wt[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    
    
    cout << t[n][w];
    
    

    return 0;
}