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
#define queue_max priority_queue<ll>
#define queue_min priority_queue<ll, vll, greater<ll>>
#define for0e(e) for (ll i = 0; i < e; i++)
#define for1e(e) for (ll i = 1; i <= e; i++)
#define rfor0s(i, s) for (ll i = s; i >= 0; i--)
#define f0(e) for (ll i = 0; i < e; i++)
#define f1(e) for (ll i = 1; i < e; i++)
#define f0E(e) for (ll i = 0; i <= e; i++)
#define f1E(e) for (ll i = 1; i <= e; i++)
#define fse(i, s, e) for (ll i = s; i < e; i++)
#define fsE(i, s, e) for (ll i = s; i <= e; i++)
#define rfes(i, e, s) for (ll i = e; i > s; i--)
#define rfeS(i, e, s) for (ll i = e; i >= s; i--)
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

    ll n;
    cin >> n;
    // ll i = 0;
    // ll j = 1;
    // while (i != j)
    // {
    // }
    // 1 3 2
    // 4 1 4 2 3 => 3+ 2 +1
    if (n == 1 || n == 2)
    {
        cout << 1 << Ln;
        return;
    }
    cout << (n * (n - 1)) / 2 << Ln;
    return;
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
    //	 cout << "Case #" << it << ": ";
    //    solve();
    //  }

    return 0;
}
//** Har Har Mahadev **//
