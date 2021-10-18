#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int64_t i, j;

    int64_t n;
    cin >> n;

    int64_t elem, size = 1;
    vector<int64_t> matrix;
    matrix.reserve(n + 1);
    matrix.push_back(0);
    for (i = 0; i < n; i++)
    {
        cin >> elem;
        if (elem == 0)
        {
            continue;
        }
        if (elem * matrix[size - 1] <= 0)
        {
            matrix.push_back(elem);
            size++;
        }
        else
        {
            matrix[size - 1] += elem;
        }
    }

    // cout << endl;
    // for (i = 0; i < size; i++)
    // {
    //     cout << matrix[i] << " ";
    // }

    // cout << endl;

    int64_t max = 0, cur_sum;
    for (i = 1; i < size; i++)
    {
        matrix[i] = matrix[i] + matrix[i - 1];
        for (j = 1; j < i + 1; j++)
        {
            cur_sum = matrix[i] - matrix[j - 1];
            if (cur_sum > max)
            {
                max = cur_sum;
            }
        }
    }
    //
    cout << max;

    return 0;
}
