#include <bits/stdc++.h>
using namespace std;

// Fast I/O
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<int>leftRotate(vector<int>arr, int k)
{
    int n=arr.size();
    vector<int>shiftedArr;
    for (int i = 0; i < n; i++)
    {
        shiftedArr[i]=arr[(i+k)%n];
    }
    return shiftedArr;
}

int main() {
    fastIO();



    return 0;
}