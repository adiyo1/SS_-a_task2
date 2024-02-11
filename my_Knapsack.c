#include "my_mat.h"
#include <stdio.h>


int main() {
    int values[MAX_ITEMS];
    int weights[MAX_ITEMS];
    int  result[MAX_ITEMS];
    char items[MAX_ITEMS];
  
  
  // Get the input from the user
  for (int i = 0; i < MAX_ITEMS; i++) {
    scanf(" %c %d %d", &items[i], &values[i], &weights[i]);
  }

  // Call the knapSack function
  int totalValue = knapsack(weights, values, result);
    printf("Maximum profit: %d\n", totalValue);
    printf("Selected items:");
    for( int i=0; i<MAX_ITEMS; i++)
    {
        if(result[i]==1)
        {
            printf(" %c",items[i]);
        }      
    }
    printf("\n"); 

    return 0;
}



