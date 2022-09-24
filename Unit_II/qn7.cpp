// a program to implement least square approax for linear data
#include <iostream>
#include <cmath>

using namespace std;

void find_sum(int val[], int n, int &sum)
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + val[i];
    }
}

void find_msum(int x[], int y[], int n, int &sum)
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (x[i] * y[i]);
    }
}

void find_sqsum(int val[], int n, int &sum)
{
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + pow(val[i], 2);
    }
}

int main()
{
    int n;
    cout << "Enter the number of data: ";
    cin >> n;

    int x[n], y[n];

    cout << "Enter x and y coord (x, y): ";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    // y = a + b1x1 for linear data
    //  b = nsum(xy) - sum(x) sum(y) / n(sum(sq(x))) - sq(sum(x));
    //  a = (sum(y) - b* sum(x)) /n

    int sum_x, sum_y, sum_sqx, sum_xy;
    find_sum(x, n, sum_x);
    find_sum(y, n, sum_y);
    find_msum(x, y, n, sum_xy);
    find_sqsum(x, n, sum_sqx);

    float b, a;

    b = ((n * sum_xy) - (sum_x * sum_y)) / ((n * sum_sqx) - pow(sum_x, 2));
    a = (sum_y - b * sum_x) / n;

    cout << "Y = " << a << " + " << b << "x\n";
    return 0;
}