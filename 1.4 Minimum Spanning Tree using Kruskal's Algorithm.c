#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



void kruskalMST(int **cost, int V) {
    int parent[100];

    // Initialize each vertex as its own parent
    for (int i = 0; i < V; i++)
        parent[i] = i;

    int edgeCount = 0, minCost = 0;

    while (edgeCount < V - 1) {
        int min = INT_MAX;
        int u = -1, v = -1;

        // Find the minimum edge (upper triangular matrix only)
        for (int i = 0; i < V; i++) {
            for (int j = i + 1; j < V; j++) {
                if (cost[i][j] < min && cost[i][j] != 9999) {
                    min = cost[i][j];
                    u = i;
                    v = j;
                }
            }
        }

        // Find parent of u
        int pu = u;
        while (parent[pu] != pu)
            pu = parent[pu];

        // Find parent of v
}
