//jacobi method for linear qequation with three variables.

#include <iostream>
#define ROW 3
#define COL 3

using namespace std;

void jacobi(float *x, int a[][COL] , int b[], int iter){

    float x1[ROW] ;
    static int i = 0;

    while(i < iter){

        for(int i = 0; i < ROW; i++){
            float exp = 0;
            for(int j= 0; j < COL;j++ ){
                if(i != j){
                    exp += a[i][j] * x[j];
                }
            } 
            x1[i]= (b[i] - exp)/a[i][i];
        }

        for(int i = 0; i < ROW; i++){
            x[i] = x1[i];
        }
        i++;
    }

}

int main(){
    //should make a diagonally dominent
    int a[][COL] = {{6, -2, 1}, {-2, 7, 2}, {1, 2, -5}};
    float x[ROW] = {0};
    int  b[] = {11, 5, -1};

    jacobi(x, a, b, 4 );

    for(int i = 0; i < ROW; i++)
    cout << x[i] <<"\t";
}