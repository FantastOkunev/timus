#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int64_t n;
    vector<int64_t> banknotes;

    cin >> n;

    banknotes.reserve(n);

    for (int64_t i = 0; i < n; i++)
    {
        cin >> banknotes[i];
    }

    sort(banknotes.begin(), banknotes.end());

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
            max_bank = banknotes[i];
            max_count = cur_count;
        }
    }

    cout << endl
         << endl;
    cout << max_bank << endl;
    cout << max_count << endl;
    return 0;
}
