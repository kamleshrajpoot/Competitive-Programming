#include<cstdio>
using namespace std;
double n,k,m;

void solve()
{
    double temp = m/n;
    long double r = k;
    int ans = 0;
    while(k <= temp)
    {
        k = r*k;
        ans++;
    }
    cout << ans << endl;
}

int main()
{
   ios::sync_with_stdio(false);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k >> m;
        solve();
    }
    return 0;
}
