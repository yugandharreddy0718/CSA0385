#include <stdio.h>
#define INFINITY 9999
#define MAX 10
void Dijkstra(int Graph[MAX][MAX], int n, int start) {
    int distance[MAX], visited[MAX], i, j, minDist, nextNode;
    for (i = 0; i < n; i++) {
        distance[i] = Graph[start][i];
        visited[i] = 0;
    }
    distance[start] = 0;
    visited[start] = 1;
    for (i = 1; i < n; i++) {
        minDist = INFINITY;
        for (j = 0; j < n; j++)
            if (!visited[j] && distance[j] < minDist) {
                minDist = distance[j];
                nextNode = j;
            }
        visited[nextNode] = 1;
        for (j = 0; j < n; j++)
            if (!visited[j] && minDist + Graph[nextNode][j] < distance[j])
                distance[j] = minDist + Graph[nextNode][j];
    }
    for (i = 0; i < n; i++)
        if (i != start)
            printf("\nDistance from source to %d: %d", i, distance[i]);
}
int main() {
    int Graph[MAX][MAX] = {
        {0, 0, 1, 2, 0, 0, 0},
        {0, 0, 2, 0, 0, 3, 0},
        {1, 2, 0,1, 3, 0, 0},
        {2, 0, 0, 0, 0, 0, 1},
        {0, 0, 3, 0, 0, 2, 0},
        {0, 3, 0, 0, 2, 0, 1},
        {0, 0, 0, 1, 0, 1, 0}
    };
    int n = 7, start = 0;
    Dijkstra(Graph, n, start);
}
