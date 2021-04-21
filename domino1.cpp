#include <bits/stdc++.h>

using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<vector<int>> v;
    //cout << "ABC";

    for (int i = 0; i < n; i++)
    {
        vector<int> row;
        for (int j = 0; j < 2; j++)
        {

            int x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }
    int sum_up = 0;
    int sum_down = 0;
    for (int i = 0; i < n; i++)
    {

        sum_up += v[i][0];
        sum_down += v[i][1];
    }
    int ans = -1;

    if (sum_up % 2 == 0 && sum_down % 2 == 0)
    {
        ans = 0;
    }
     else if ((sum_up  % 2 == 1 || sum_down % 2 == 1) && n == 1){
         ans = -1;
     }
    else if (sum_up % 2 == 1 && sum_down % 2 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] % 2 == 1 && v[i][1] % 2 == 0)
            {
                ans = 1;
                break;
            }
        }
    }

    else if (sum_up % 2 == 0 && sum_down % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] % 2 == 0 && v[i][1] % 2 == 1)
            {
                ans = 1;
                break;
            }
        }
    }

    else if (sum_up % 2 == 1 && sum_down % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] % 2 == 1 && v[i][1] % 2 == 1)
            {
                ans = 1;
                break;
            }
        }
    }

    cout << ans;
    return 0;
}