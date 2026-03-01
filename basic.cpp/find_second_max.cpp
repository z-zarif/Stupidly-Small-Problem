#include <bits/stdc++.h>
using namespace std;

// Fast I/O
void fastIO()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
int secondMax(vector<int> &arr)
{
    int n = arr.size();
    int max, sm;
    arr[0] > arr[1] ? max : sm;
    int maxy = arr[0] > arr[1] ? arr[0] : arr[1];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] > sm)
        {
            if (arr[i] > max)
            {
                sm = max;
                max = arr[i];
            }
            else
                sm = arr[i];
        }
    }
}

int main()
{
    fastIO();

    return 0;
}