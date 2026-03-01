#include <bits/stdc++.h>
using namespace std;

// Fast I/O
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastIO();
    vector<int>v;
    int n=v.size();
    for (int i = 0; i < n/2; i++)
    {
        swap(v[i],v[n-i-1]);
    }
    
    //reverse(v.begin(), v.end());


    return 0;
}