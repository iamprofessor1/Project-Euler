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

vll primeSum;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<ll> v;

map<ll, ll> m;
// return all primes b/w 1 to n
vector<int> sieve(int n)
{
    vector<bool> is(n + 1, true);
    vector<int> primes;
    for (int i = 2; i * i <= n; i++)
    {
        if (is[i])
        {
            for (int p = i * i; p <= n; p += i)
                is[p] = false;
        }
    }
    for (int i = 2; i <= n; i++)
        if (is[i])
            primes.push_back(i);
    return primes;
}

void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    auto it = m.upper_bound(n);
    it--;
    cout << (*it).second << Ln;
    // for (ll i = 0; v[i] <= n; i++)
    // {
    //     sum += v[i];
    // }

    // cout << sum << ln;
}

int32_t main()
{
    fast_cin();
    ll T = 1;
    v = sieve(2000000);
    for (ll i = 0; i < v.size(); i++)
    {
        m[v[i]] += m[v[i - 1]] + v[i];
    }
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
