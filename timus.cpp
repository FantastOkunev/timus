#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int64_t i, j, k, s;

    int64_t n;
    cin >> n;

    int64_t elem;
    vector<int64_t> matrix;
    matrix.reserve(n + 1);
    matrix.push_back(0);
    for (i = 0; i < n; j++)
    {
        cin >> elem;
        matrix.push_back(elem);
    }

    int64_t max = 0, cur_sum;
    for (i = 1; i < n + 1; i++)
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

    cout << max;

    return 0;
}
