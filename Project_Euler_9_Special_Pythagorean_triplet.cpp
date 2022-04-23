
#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
using namespace std;
#define ln "\n"
#define Ln "\n"
#define ll long long
#define ull unsigned long long
#define int long long
#define double long double
#define vll vector<ll>
#define eb emplace_back
#define pll pair<ll, ll>
#define vpll vector<pll>
#define fi first
#define se second
#define mod 1000000007
#define mp make_pair
#define sz(x) ((ll)(x).size())
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define fo(m) for (auto &x : m)
#define yes cout << "YES" << Ln;
#define no cout << "NO" << Ln;
#define queue_max priority_queue<int>
#define queue_min priority_queue<int, vi, greater<int>>
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define precise(ans) cout << fixed << setprecision(15) << ans << ln
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

void solve()
{

    /*
    a + b+ c = n;
    c = n -a-b;
    a^2 + b^2 = c^2;
    a^2 + b^2 = n^2 + a^2 + b^2 +2ab - 2na -2nb;
    2na + 2nb =n^2 + 2ab;
    2nb - 2ab = n^2 -2na;
    b = (n*n - 2*n*a) /(2*n - 2*a);
    */
    ll n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << "-1" << Ln;
        return;
    }
    ll ans = -1;
    for (ll a = 1; a <= n / 3; a++)
    {
        ll b, c;
        b = (n * n - 2 * n * a) / (2 * n - 2 * a);
        c = n - a - b;
        if ((a * a + b * b) == c * c)
        {
            ans = max(ans, a * b * c * 1LL);
        }
    }

    cout << ans << Ln;
}

int32_t main()
{
    fast_cin();
    ll T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    //  ll t;
    //  cin >> t;
    //  for(int it=1;it<=t;it++) {
    //     cout << "Case #" << it << ": ";
    //    solve();
    //  }

    return 0;
}
//** Har Har Mahadev **//
