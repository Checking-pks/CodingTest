#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void simulate()
{
    int n, s;
    cin >> n >> s;

    vector<int> nList(n);
    for (int i = 0; i < n; i++)
        cin >> nList[i];

    sort(nList.begin(), nList.end());

    int l = 1, r = 1000000000, m;
    while (l <= r)
    {
        m = (l + r) / 2;

        int count = 0;
        for (int i = 1, j = 0; i < n; i++)
        {
            if (nList[i] - nList[j] >= m)
            {
                count++;
                j = i;
            }
        }

        if (count < s - 1)
            r = m - 1;
        else
            l = m + 1;
    }

    cout << r << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    
    int T;
    cin >> T;

    while (T--)
        simulate();
}