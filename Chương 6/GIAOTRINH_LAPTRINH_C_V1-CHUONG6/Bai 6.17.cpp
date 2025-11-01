/* Bài 6.17: Cho mảng a gồm n phần tử nguyên a1, a2,..., an, (n ≤ 10^6, ai ≤ 10^7).
Viết chương trình đếm số lượng những phần tử thủ lĩnh của mảng,
biết rằng phần tử thủ lĩnh là phần tử lớn hơn mọi phần tử nằm bên phải nó trong mảng.
Ví dụ: */

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
int a[MAX], n, m, d = 0;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    m = a[n];
    for(int i = n - 1; i >= 1; i--)
        if(a[i] > m)
        {
            d++;
            m = a[i];
        }
    cout << d;
    return 0;
}

