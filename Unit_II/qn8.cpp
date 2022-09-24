// least square approximation for non linear data.
// eqn is y = ax^b
// lny = ln(ax^b)
// lny = lna + ln x^b
// ln y = lna  + bln x
// Y = A + bX

// a = ln a
// X = lnx
// Y = ln y

#include <iostream>
#include <cmath>

#define e 2.718
using namespace std;

void find_sum(float val[], int n, float &sum)
{
    sum = 0;
    cout << "\n\nsum: \n";
    for (int i = 0; i < n; i++)
    {
        sum = sum + log(val[i]);
        cout << sum << "\n";
    }
}

void find_msum(float x[], float y[], int n, float &sum)
{
    sum = 0;
    cout << "\n\nsum: \n";
    for (int i = 0; i < n; i++)
    {
        sum = sum + (log(x[i]) * log(y[i]));

        cout << sum << "\n";
    }
}

void find_sqsum(float val[], int n, float &sum)
{
    sum = 0;
    cout << "\n\nsum: \n";
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(log(val[i]), 2);

        cout << sum << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter a number of cases: ";
    cin >> n;

    float x[n], y[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    float a, b, sum_x, sum_y, sum_xy, sum_sqx;

    find_sum(x, n, sum_x);
    find_sum(y, n, sum_y);
    find_msum(x, y, n, sum_xy);
    find_sqsum(x, n, sum_sqx);

    b = ((n * sum_xy) - (sum_x * sum_y)) / ((n * sum_sqx) - pow(sum_x, 2));
    a = (sum_y - b * sum_x) / n;

    cout << "Y = " << pow(e, a) << "*" << b << "^x";

    return 0;
}