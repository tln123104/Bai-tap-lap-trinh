#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    long long nho, lon;
    double tien;
    cin >> lon >> nho;
    tien = nho * 0.008 + lon * 0.02;
    if(tien > 600)  tien *= 0.8;
    else
        if(tien > 200 || (nho + lon) > 3000)
            tien *= 0.92;
    cout << tien << " USD";
    return 0;
}
