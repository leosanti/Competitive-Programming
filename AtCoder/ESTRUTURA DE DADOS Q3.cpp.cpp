#include <bits/stdc++.h>
#define endl "\n"
#define MAXN ((int)2e5 + 123)
#define MOD ((int)1e9 + 7)
#define ll long long
#define INF INT_MAX
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vi>
#define si set<int>
#define pb push_back
#define SZ(v) int(v.size())
#define ms(v, x) memset(v, x, sizeof v)
#define fore(i, m, n) for (int i = m; i < n; i++)
#define forn(i, n) fore(i, 0, n)
#define foreach(i, v) for (auto i : v)
#define all(v) v.begin(), v.end()
#define eps 1e-9

template <typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template <typename T>
T lcm(T a, T b) { return a * b / gcd(a, b); }

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    stack<int> pi;
    stack<int> aux;
    int inp = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> inp;
        pi.push(inp);
    }

    aux = pi;
    while (!aux.empty())
    {
        int w = aux.top();
        cout << w << " ";
        aux.pop();
    }
    cout << endl;

    pi.pop();
    pi.pop();
    aux = pi;

    while (!aux.empty())
    {
        int w = aux.top();
        cout << w << " ";
        aux.pop();
    }

    cout << endl;
}
