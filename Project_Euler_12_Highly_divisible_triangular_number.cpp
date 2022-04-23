
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
map<ll, ll> m;
ll cntDivisors(long long n)
{
    long long i = 0;
    ll cnt = 0;
    // Print all divisor range [1 ,sqrt(n));
    for (i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
            if (n / i != i)
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
    fo(m)
    {
        if (x.second > n)
        {
            cout << x.first << Ln;
            return;
        }
        // trace(x.first, x.second);
    }
}

int32_t main()
{
    fast_cin();
    ll T = 1;
    // precalculate
    for (ll i = 1; i <= 100000; i++)
    {
        ll sum = ((i) * (i + 1)) / 2;
        //// ******************////
        if ((i % 2) == 0)
        {
            ll temp1 = cntDivisors(i / 2);
            ll temp2 = cntDivisors(i + 1);

            m[sum] = temp1 * temp2;
        }
        else
        {
            ll temp1 = cntDivisors((i + 1) / 2);
            ll temp2 = cntDivisors(i);

            m[sum] = temp1 * temp2;
        }
        //// ******************////
        // cout<<"i "<<i<<" | sum->"<< sum<<" "<<"| factor "<<m[sum]<<" "<<Ln;
    }

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
