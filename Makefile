 all: my_graph my_Knapsack 

my_graph: my_graph.o my_mat.o
	gcc -Wall -g -o my_graph my_graph.o my_mat.o 

my_Knapsack: my_Knapsack.o my_mat.o
	gcc -Wall -g -o my_Knapsack my_Knapsack.o my_mat.o 

my_Knapsack.o: my_mat.h
my_graph.o:my_mat.h
my_mat.o: my_mat.h


clean:
	rm -f *.o my_graph my_Knapsack 



