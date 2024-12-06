#include <bits/stdc++.h>
using namespace std;

bool isOK(const vector<int>& a) {
    int k = a.size();
    bool inc = true, dec = true;
    for (int j = 0; j < k - 1; j++) 
    {
        int diff = a[j+1] - a[j];
        if (diff > 0) dec = false;
        if (diff < 0) inc = false;
        if (!(1 <= abs(diff) && abs(diff) <= 3)) 
        {
            return false;
        }
    }
    return inc || dec;
}

int main()
{
    const int N = 1000;
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

        bool anyOK = false;
        int k = a.size();

        // Check if the sequence is OK without any removal
        if (isOK(a)) {
            anyOK = true;
        } else {
            // Check by removing one element at a time
            for (int j = 0; j < k; j++) {
                vector<int> b = a;
                b.erase(b.begin() + j);
                if (isOK(b)) {
                    anyOK = true;
                    break;
                }
            }
        }

        if (anyOK) answer++;
    }
    printf("%d\n", answer);
}
