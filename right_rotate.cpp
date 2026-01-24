#include <bits/stdc++.h>
using namespace std;

// Fast I/O
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<int>righttRotate(vector<int>arr, int k)
{
    int n=arr.size();
    vector<int>shiftedArr;
    for (int i = 0; i < n; i++)
    {
        shiftedArr[(i+k)%n]=arr[i];
    }
    return shiftedArr;
}
int main() {
    fastIO();

    

    return 0;
}