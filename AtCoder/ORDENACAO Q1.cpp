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

vector<int> v_i = {2, 4, 1, 5, 6, 9, 8, 7, 10};
int trocas = 0;

void bubbleSort()
{
    bool swapp = true;
    while (swapp)
    {
        swapp = false;
        for (size_t i = 0; i < v_i.size() - 1; i++)
        {
            if (v_i[i] > v_i[i + 1])
            {
                v_i[i] += v_i[i + 1];
                v_i[i + 1] = v_i[i] - v_i[i + 1];
                v_i[i] -= v_i[i + 1];
                swapp = true;
                trocas++;
            }
        }
    }
}

int main()
{

    ios_base::sync_with_stdio(0);

    for (int i = 0; i < v_i.size(); i++)
    {

        cout << v_i[i] << " ";
    }

    cout << endl;

    bubbleSort();

    cout << "Trocas: " << trocas << endl;

    for (int i = 0; i < v_i.size(); i++)
    {

        cout << v_i[i] << " ";
    }

    cout << endl;
}
