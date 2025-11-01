/* Bài 6.12: Để tính nhiệt độ trung bình của một giai đoạn người ta tiến hành ghi chép lại 
nhiệt độ của n ngày liên tiếp vào 1 thời điểm nhất định trong ngày (1 ≤ n ≤ 1000).
Viết chương trình nhập vào nhiệt độ của n ngày và tính nhiệt độ trung bình của n ngày đó, kết quả lấy 2 chữ số thập phân. */

#include<bits/stdc++.h>
using namespace std;

#define MAX 1005
double x, s = 0;
int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        s += x;
    }
    cout << setprecision(2) << fixed << s/n;
    return 0;
}


