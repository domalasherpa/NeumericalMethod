#include <iostream>
#define ROW 3
#define COL 3

using namespace std;

void gauss(float *x, int a[][COL], int b[], int iter){

    int i = 0;
    while(i < iter){
        for(int i = 0; i < ROW; i++){
            float exp = 0;
            for(int j = 0; j < COL; j++){

                if(i != j){
                        exp += a[i][j] * x[j];
                }
            }
            x[i] = (b[i] - exp)/ a[i][i];
        }
        i++;
    }
}
int main(){
    //should make the coeff matrix diagonally dominent
    int a[][COL] = {{6, -2, 1}, {-2, 7, 2}, {1, 2, -5}};
    float x[ROW] = {0};
    int  b[] = {11, 5, -1};

    gauss(x, a, b, 3 );

    for(int i = 0; i < ROW; i++)
    cout << x[i] <<"\t";

    return 0;
}