#include <iostream>

void newton(int x[], int y[], int n)
{

    float dd[n - 1][n - 1];

    for (int i = 1; i < n; i++)
    {
    }
}

int main()
{

    int n;

    std::cout << "Enter the number of cases: ";
    std::cin >> n;

    float x[n], y[n], x_coord, y_coord;

    std::cout << "Enter the x and y coordinates: ";

    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i] >> y[i];
    }

    std::cout << "Enter the x coordinate: ";
    std::cin >> x_coord;

    return 0;
}