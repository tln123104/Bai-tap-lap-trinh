#include<bits/stdc++.h>
using namespace std;

struct Ngay
{
    int ngay, thang, nam;
};

struct Nhanvien
{
    string hoten, chucvu;
    float bacluong;
    Ngay ngaysinh;
};

int main()
{
    Nhanvien nv1, nv2 = {"Le Van Nam", "Cong nhan", 3.4, 25, 10, 1990};
    nv1 = nv2;
    cout << nv1.hoten << '\n';
    cout << nv1.chucvu << '\n';
    cout << nv1.bacluong << '\n';
    cout << nv1.ngaysinh.ngay << '/';
    cout << nv1.ngaysinh.thang << '/';
    cout << nv1.ngaysinh.nam << '\n';
    return 0;
}

