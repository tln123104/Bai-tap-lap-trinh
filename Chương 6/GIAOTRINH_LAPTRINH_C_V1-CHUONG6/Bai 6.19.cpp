/* Bài 6.19: Nhập vào một dãy n số nguyên dương ai, 22,..., an, (n ≤ 10^6, ai ≤ 10^7) và một số x.
Viết chương trình kiểm tra x có trong dãy a không?
Nếu x không có trong dãy thì đưa ra thông báo NO, nếu x có trong dãy thì xóa tất cả các phần tử trong dãy bằng x và in ra dãy sau khi xóa.
Input: - Dòng 1 gồm 2 số n và x, dòng 2 gồm n số thực của dãy a
Output: Dãy a sau khi xoa giá trị x hoặc NO. */

/*
Cách 1: Không xoá các phần tử có giá trị == x, mà chỉ in ra các phần tử không bằng x
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
int a[MAX], n, x, d = 0;

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        if(a[i] == x)
        {
            d = 1;
            break;
        }
    if(d == 0)
    {
        cout << "NO";
        return 0;
    }
    for(int i = 1; i <= n; i++)
        if(a[i] != x)
            cout << a[i] << " ";
    return 0;
}
*/

// Cách 2: Xoá các phần tử có giá trị == x
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000005;
int a[MAX], n, x, d = 0;

void xoavtk(int a[MAX], int &n, int k)
{
    for(int i = k; i < n; i++)
        a[i] = a[i+1];
    n--;
}

int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n >> x;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
        if(a[i] == x)
        {
            d = 1;
            break;
        }
    if(d == 0)
    {
        cout << "NO";
        return 0;
    }
    for(int i = n; i >= 1; i--)
        if(a[i] == x)
            xoavtk(a, n, i);
    for(int i = 1; i <= n; i++)
        cout << a[i] << " ";
    return 0;
}


