#include <bits/stdc++.h>
using namespace std;

const int N = 1000;

int main()
{
    int answer = 0;
    for (int i = 0; i < N; i++) 
    {
        vector<int> a;
        int x;
        char c;
        while (scanf("%d%c", &x, &c) == 2) 
        {
            a.push_back(x);
            if (c == '\n') {
                break;
            }
        }

        int k = a.size();
        bool inc = true, dec = true;
        for (int j = 0; j < k - 1; j++) 
        {
            int diff = a[j+1] - a[j];
            if (diff > 0) dec = false;
            if (diff < 0) inc = false;
            if (!(1 <= abs(diff) && abs(diff) <= 3)) 
            {
                inc = dec = false;
                break;
            }
        }

        if (inc || dec) answer++;
    }
    printf("%d\n", answer);
}
