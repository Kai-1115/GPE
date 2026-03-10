#include <iostream>
#include <iomanip>
#include <cmath>
#define LL long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double d;
    while(cin >> d)
    {
        double a = 4*(acos(-1)*d*d/12-d*d/4);
        a += (sqrt(3)*d-d)*(sqrt(3)*d-d)/2;

        double b = ((acos(-1)/2-1)*d*d-a)/2;
        double c = (acos(-1)*d*d/4-a-3*b)/2;
        cout << fixed << setprecision(3) << a << " " << 4*b << " " << 4*c << endl;
    }
    
    return 0;
}