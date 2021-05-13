#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[1000];
    int i, j, t;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (i = t - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
