#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> nextPermutation(int n, vector<int> arr)
{
    int idx = -1;

    for (int i = n - 1; i > 0; i--)
    {
        if (arr[i - 1] < arr[i])
        {
            idx = i - 1;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(arr.begin(), arr.end());
        return arr;
    }
    else
    {
        int ele = idx + 1;
        for (int i = ele + 1; i < n; i++)
        {
            if (arr[i] > arr[idx] && arr[i] <= arr[ele])
                ele = i;
        }
        swap(arr[idx], arr[ele]);
        reverse(arr.begin() + idx + 1, arr.end());
    }
    return arr;
}

int main()
{
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    vector<int> ans = nextPermutation(N, arr);
    for (int u : ans)
        cout << u << " ";
    return 0;
}
