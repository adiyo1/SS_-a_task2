#include <stdio.h>
#include "my_mat.h"

int main() {
    int matrix[size][size];
   

    char choice;
    int i, j;

    do {
       
        scanf(" %c", &choice);

        switch (choice) {
            case 'A':
            initializeMatrix(matrix);
                floydWarshall(matrix);
               
                break;
            case 'B':
                scanf("%d %d", &i, &j);
               
                    if(shortestRoute(matrix, i, j)==INT_MAX)
                    {
                        printf("False\n");
                    }
                    else{
                        printf("True\n");
                    }
               
               
                break;
            case 'C':
               
                scanf("%d %d", &i, &j);
               
                if(shortestRoute(matrix, i, j)==INT_MAX) {
                    printf("%d\n", -1);
                }
                else{
                    printf("%d\n",shortestRoute(matrix, i, j));
                }
               
                break;
            case 'D':
               
                break;
           
               
        }
    } while (choice != 'D');

    return 0;
}


