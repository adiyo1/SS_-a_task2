#ifndef MY_MAT_H
#define MY_MAT_H

#include <limits.h>

#define MAX_ITEMS 5
#define MAX_WEIGHT 20
#define W 20

#define size 10

void initializeMatrix(int matrix[size][size]);
void floydWarshall(int matrix[size][size]);
int shortestRoute(int matrix[size][size], int i, int j);
void initializeArrays(int values[], int weight[],int  selected_bool[]);

int max(int a, int b);
int knapsack( int wt[], int val[], int selected_bool[]);

#endif // MY_MAT_H

