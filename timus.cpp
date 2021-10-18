#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int64_t i, j;

    int64_t n;
    cin >> n;

    int64_t elem;
    vector<vector<int64_t>> matrix;
    matrix.resize(n + 1);
    for (i = 0; i < n; i++)
    {
        matrix[i].reserve(n + 1);
        matrix[i].push_back(0);
        for (j = 0; j < n; j++)
        {
            cin >> elem;
            matrix[i].push_back(elem);
        }
    }
    for (j = 0; j < n; j++)
    {
        matrix[i].resize(n + 1);
    }

    int64_t max = matrix[n - 1][1];
    for (i = n - 1; i >= 0; i--)
    {
        for (j = 1; j < n + 1; j++)
        {
            matrix[i][j] = matrix[i][j] + matrix[i + 1][j] + matrix[i][j - 1] - matrix[i + 1][j - 1];
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    // cout << endl;

    // for (i = 0; i < n + 1; i++)
    // {
    //     for (j = 0; j < n + 1; j++)
    //     {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    cout << max;

    return 0;
}
