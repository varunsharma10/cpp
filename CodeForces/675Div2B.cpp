#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
#define send                              \
    {                                     \
        ios_base::sync_with_stdio(false); \
    }
#define help           \
    {                  \
        cin.tie(NULL); \
    }
#define getunique(v)                                  \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }

long long calcAnswer(vector<long long> &numbers)
{
    sort(begin(numbers), end(numbers));
    long long result = 0;

    int sz = numbers.size();
    for (int i = 0; i < sz; ++i)
        result += abs(numbers[i] - numbers[sz / 2]);
    return result;
}

void solve()
{
    int n, m;

    cin >> n >> m;
    vector<vector<long long>> matrix(n);
    for (int i = 0; i < n; ++i)
    {
        matrix[i].resize(m);
        for (int j = 0; j < m; ++j)
            cin >> matrix[i][j];
    }

    long long answer = 0;

    int left_row = 0, right_row = n - 1;
    while (left_row <= right_row)
    {
        int left_column = 0, right_column = m - 1;
        while (left_column <= right_column)
        {
            vector<long long> cur_numbers = {matrix[left_row][left_column]};
            if (left_row != right_row)
                cur_numbers.push_back(matrix[right_row][left_column]);
            if (right_column != left_column)
                cur_numbers.push_back(matrix[left_row][right_column]);
            if (left_column != right_column && left_row != right_row)
                cur_numbers.push_back(matrix[right_row][right_column]);

            answer += calcAnswer(cur_numbers);

            left_column++, right_column--;
        }

        left_row++, right_row--;
    }

    cout << answer << endl;
}
int main()
{
    send help
            cout
        << setprecision(15) << fixed;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}