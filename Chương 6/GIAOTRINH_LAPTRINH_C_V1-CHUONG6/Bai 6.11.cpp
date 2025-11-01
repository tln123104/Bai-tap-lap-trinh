/*Viết chương trình nhập một số nguyên n và một dãy n số nguyên dương a1, a2,..., an (n ≤ 105 , ai ≤ 10°).
Đặt: dist(a) = max(a) - min(a), trong đó: max(a) là
giá trị lớn nhất của dãy số a, min(a) là giá trị nhỏ nhất của dãy số a.
Ứng với mỗi phần tử ai, hãy xem: cần tăng/giảm bao nhiêu đơn vị để ai = dist(a).
- Nếu phần tử đó cần tăng, ghi ra dấu cộng trước giá trị cần tăng.
- Nếu phần tử đó cần giảm, ghi ra dấu trừ trước giá trị cần giảm.
- Nếu phần tử đó không cần tăng hay giảm gì, ghi ra số 0.
- Mỗi số cách nhau 1 kí tự trống */


#include<bits/stdc++.h>
using namespace std;

#define MAX 100005
int a[MAX], n, d = 0;

// Tìm giá trị nhỏ nhhất
int Min(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] < m)	m = a[i];
    return m;
}

// Tìm giá tri lớn nhất
int Max(int a[], int n)
{
    int m = a[0];
    for(int i = 1; i < n; i++)
        if(a[i] > m)	m = a[i];
    return m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    d = Max(a, n) - Min(a, n);
    for(int i = 0; i < n; i++)
    {
        if (a[i] > d)   cout<< '-' << a[i]- d << ' ';
        else
            if (a[i] == d) cout << 0 << ' ';
            else    cout << '+' << d - a[i] << ' ';
    }
    return 0;
}

