
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
map<ll, ll> m;

ll cntDivisors(long long n)
{
    // O(sqrt(n))
    long long i;
    long long cnt = 0;

    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;

            if (i != n / i)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

void solve()
{
    ll n;
    cin >> n;
    for (auto &x : m)
    {
        if (x.second > n)
        {
            cout << x.first << '\n';
            return;
        }
    }
}

int32_t main()
{
    fast_cin();
    ll T = 1;
    // precompute
    for (ll i = 1; i <= 10000; i++)
    {
        ll s = (i * (i + 1)) / 2;
        m[s] = cntDivisors(s);

        // trace(s, m[s]);
    }
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
