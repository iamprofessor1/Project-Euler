//** 𝓙ⲁⲓ Ⲙⲁⲏⲁⲕⲁ𝓵 **//**// हर हर महादेव**//
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

    ll mat[20][20];
    for (ll i = 0; i < 20; i++)
    {
        for (ll j = 0; j < 20; j++)
        {
            cin >> mat[i][j];
        }
    }
    ll ans = INT_MIN;
    for (ll i = 0; i < 20; i++)
    {
        for (ll j = 0; j < 20; j++)
        {
            // horizontal
            if (j + 3 < 20)
            {
                ll temp = mat[i][j] * mat[i][j + 1] * mat[i][j + 2] * mat[i][j + 3];
                ans = max(temp, ans);
            }
            // vertical
            if (i + 3 < 20)
            {
                ll temp = mat[i][j] * mat[i + 1][j] * mat[i + 2][j] * mat[i + 3][j];
                ans = max(temp, ans);
            }
            // right down \|
            if (i + 3 < 20 && j + 3 < 20)
            {
                ll temp = mat[i][j] * mat[i + 1][j + 1] * mat[i + 2][j + 2] * mat[i + 3][j + 3];
                ans = max(temp, ans);
            }
            // left down   /|
            if (i + 3 < 20 && j >= 3)
            {
                ll temp = mat[i][j] * mat[i + 1][j - 1] * mat[i + 2][j - 2] * mat[i + 3][j - 3];
                ans = max(temp, ans);
            }
        }
    }
    cout << ans << ln;
}

int32_t main()
{
    fast_cin();
    ll T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }

    //  ll t;
    //  cin >> t;
    //  for(int it=1;it<=t;it++) {
    //	 cout << "Case #" << it << ": ";
    //    solve();
    //  }

    return 0;
}
//** Har Har Mahadev **//
