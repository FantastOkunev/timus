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
    int64_t i;
    int64_t tests;

    int64_t team;
    int64_t part;
    vector<int64_t> teams;
    vector<int64_t> parts;

    cin >> tests;

    teams.reserve(tests);
    parts.reserve(tests);
    for (i = 0; i < tests; i++)
    {
        cin >> part >> team;
        teams[i] = team;
        parts[i] = part;
    }

    int64_t t, p, div, mod, sum1, sum2, sum3;
    for (i = 0; i < tests; i++)
    {
        t = teams[i];
        p = parts[i];
        div = p / t;
        mod = p % t;
        sum1 = div * div * t * (t - 1) / 2;
        sum2 = mod * (mod - 1) / 2;
        sum3 = mod * div * (t - 1);
        cout << sum1 + sum2 + sum3 << endl;
    }

    return 0;
}
