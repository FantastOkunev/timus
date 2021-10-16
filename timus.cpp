#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int64_t a, int64_t b)
{
    return a < b;
}

int main()
{
    int64_t n, elem;
    vector<int64_t> banknotes;

    cin >> n;

    banknotes.reserve(n);

    for (int64_t i = 0; i < n; i++)
    {
        cin >> elem;
        banknotes.push_back(elem);
    }

    sort(banknotes.begin(), banknotes.end(), comp);

    int64_t cur_bank = -1, cur_count = 0, max_bank = -1, max_count = -1;
    for (int64_t i = 0; i < n; i++)
    {

        if (cur_bank != banknotes[i])
        {
            cur_count = 1;
            cur_bank = banknotes[i];
        }
        else
        {
            cur_count++;
        }

        if (cur_count > max_count)
        {
            max_bank = cur_bank;
            max_count = cur_count;
        }
    }

    cout << max_bank;
    return 0;
}
