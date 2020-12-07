#include <iostream>
using namespace std;
 
#define M 3
#define N 3
 

void printMatrix(int mat[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
            cout << mat[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
}
 

void convert(int mat[M][N])
{
    bool rowFlag = false, colFlag = false;
 
    for (int j = 0; j < N; j++)
        if (!mat[0][j]) {
            rowFlag = true;
            break;
        }
 

    for (int i = 0; i < M; i++)
        if (!mat[i][0]) {
            colFlag = true;
            break;
        }
 
    
    for (int i = 1; i < M; i++)
        for (int j = 1; j < N; j++)
            if (!mat[i][j])
                mat[0][j] = mat[i][0] = 0;
 
 
 
    for (int i = 1; i < M; i++)
        for (int j = 1; j < N; j++)
            if (!mat[0][j] || !mat[i][0])
                mat[i][j] = 0;
 
    for (int i = 0; rowFlag && i < N; i++)
        mat[0][i] = 0;
 
  
    for (int i = 0; colFlag && i < M; i++)
        mat[i][0] = 0;
}
 
int main()
{
    int mat[M][N] =
    {
        { 1, 2, 0},
        { 2, 3, 4},
        { 3, 3, 3}
    };
 
    convert(mat);

    printMatrix(mat);
 
    return 0;
}



