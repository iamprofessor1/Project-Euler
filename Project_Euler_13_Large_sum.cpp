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

string add(string &a, string &b)
{
    reverse(all(a));
    reverse(all(b));
    if (sz(a) < sz(b))
    {
        ll diff = sz(b) - sz(a);
        for (ll i = 1; i <= diff; i++)
        {
            a += '0';
        }
    }
    else if (sz(a) > sz(b))
    {
        ll diff = sz(a) - sz(b);
        for (ll i = 1; i <= diff; i++)
        {
            b += '0';
        }
    }
    string ans;
    ll carry = 0;
    for (ll i = 0; i < sz(a); i++)
    {
        ll temp1 = a[i] - '0';
        ll temp2 = b[i] - '0';
        ll res = (temp1 + temp2 + carry) % 10;
        carry = (temp1 + temp2 + carry) / 10;
        ans += to_string(res);
    }
    while (carry)
    {
        ll temp = carry % 10;
        carry = carry / 10;
        ans += to_string(temp);
    }
    reverse(all(ans));
    return ans;
}

void solve()
{

    ll n;
    cin >> n;
    if (n == 1)
    {
        string s;
        cin >> s;
        for (ll i = 0; i < 10; i++)
        {
            cout << s[i];
        }
        cout << ln;
    }
    else if (n == 2)
    {
        string a, b;
        cin >> a >> b;
        string ans = add(a, b);
        for (ll i = 0; i < 10; i++)
        {
            cout << ans[i];
        }
        cout << ln;
    }
    else
    {
        string a, b;
        cin >> a >> b;
        string ans = add(a, b);
        n -= 2;
        while (n--)
        {
            cin >> b;
            ans = add(ans, b);
        }
        for (ll i = 0; i < 10; i++)
        {
            cout << ans[i];
        }
        cout << ln;
    }
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
