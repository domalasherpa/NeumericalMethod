#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

static int iter;

float f(float x)
{
    return (pow(x, 4) - x - 10);
}

float g(float *x)
{
    return pow((*x + 10), (1.0 / 4.0));
}

void fixed_point(float *x0, float *x1)
{

    *x1 = g(x0);
    float error = ((*x1 - *x0) / *x1);
    if (error < 0)
    {
        error *= -1;
    }
    //__display
    // cout << setw(10) << iter << setw(10) << *x0 << setw(10) << *x1 << setw(15) << error << "\n";

    if (error >= 0.005f)
    {
        *x0 = *x1;
        iter++;
        fixed_point(x0, x1);
    }
    return;
}

int main()
{

    float x0, x1;

    cout << "Enter initial guess: ";
    cin >> x0;

    // cout << setw(10) << "iteration" << setw(10) << "Xn" << setw(10) << "Xn+1" << setw(10) << "error" << "\n";

    fixed_point(&x0, &x1);

    cout << "Root is: " << x1 << "\n";
    cout << "Functional value is: " << f(x1) << "\n";
    cout << "Iterations: " << iter;
}
