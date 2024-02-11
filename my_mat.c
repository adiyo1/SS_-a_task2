#include "my_mat.h"
#include <stdio.h>

#define MAX_ITEMS 5
#define W 20

void initializeMatrix(int matrix[size][size]) {
    

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}



void floydWarshall(int matrix[size][size]) {

    for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if(matrix[i][j]==0) matrix[i][j]=INT_MAX;                
            }
        }
    for (int k = 0; k < size; ++k) {
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                if(i==j){matrix[i][j]=INT_MAX;}
                else{
                if (matrix[i][k] != INT_MAX && matrix[k][j] != INT_MAX &&
                    matrix[i][k] + matrix[k][j] < matrix[i][j]) {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                }
                }

            }
        }
    }
}



int shortestRoute(int matrix[size][size], int i, int j) {
    return matrix[i][j];
}



void initializeArrays(int values[], int weight[],int  selected_bool[]) {
    

    for (int i = 0; i < MAX_ITEMS; ++i) {
            scanf("%d", &selected_bool[i]);
            scanf("%d", &values[i]);
            scanf("%d", &weight[i]);

    }
     
}

int max(int a, int b) { return (a > b)? a : b; }



int knapsack(int weights[], int values[], int selected_bool[])

    {

       int i, w;
        int n= MAX_ITEMS;

       int K[n+1][W+1];
        
     
       // Build table K[][] in bottom up manner

       for (i = 0; i <= n; i++)

       {

           for (w = 0; w <= W; w++)

           {

               if (i==0 || w==0)

                   K[i][w] = 0;

               else if (weights[i-1] <= w)

                     K[i][w] = max(values[i-1] + K[i-1][w-weights[i-1]],  K[i-1][w]);

               else

                     K[i][w] = K[i-1][w];

           }

       }
       // Backtrack to fill selected_bool and print names
    int w2 = W;
    
    for (int i = n; i > 0 && w2 > 0; i--) {
        if (K[i][w2] != K[i - 1][w2]) {
            selected_bool[i - 1] = 1; // Item i-1 is selected
            w2 -= weights[i - 1];
                       
        } else {
            selected_bool[i - 1] = 0; // Item i-1 is not selected
        }
    }
       return K[n][W];

    }

