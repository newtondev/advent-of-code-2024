#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

int main()
{
    vector<pair<int,int>> ab(N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &ab[i].first, &ab[i].second);
    }

    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
    {
        a[i] = ab[i].first;
        b[i] = ab[i].second;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += abs(a[i] - b[i]);
    }
    printf("%lld\n", sum);
}
