/* Bài 6.16: Viết chương trình nhập vào dãy số nguyên gồm n số nguyên (n ≤ 10^3), mỗi số không quá 10^9.
Hãy đếm số lượng các phần tử nổi trội.
Biết phần tử nổi trội là phần tử lớn hơn phần tử đứng trước và đứng sau nó.
Lưu ý: phần tử đầu và cuối dãy không thỏa mãn điều kiện có đủ hai phần tử đứng trước, đứng sau nên không tính. */

#include <bits/stdc++.h>
using namespace std;

const int MAX = 1005;
int a[MAX], n, d = 0;

int main ()
{
    n = 1;
    while(cin >> a[n])  n++;
    for(int i = 2; i < n; i++)
        if(a[i] > a[i-1] && a[i] > a[i+1])
            d++;
    cout << d;
    return 0;
}

