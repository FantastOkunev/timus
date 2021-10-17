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
    int64_t n;
    cin >> n;
    
    int64_t road;
    vector <int64_t> paths;
    paths.reserve(n);
    for ( i = 0; i < n; i++)
    {
        cin >> road;
        paths.push_back(road);
    }
    
    sort(paths.begin(), paths.end());

    int64_t price = 0, sum_road = 0;
    for ( i = 0; i < n; i++)
    {
        price += 2 * sum_road * paths[i];
        price += paths[i]*paths[i];
        sum_road += paths[i];
    }
    
    cout << price;
    return 0;
}
