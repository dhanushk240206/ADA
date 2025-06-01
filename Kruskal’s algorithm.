#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int u, v, weight;
} Edge;

int parent[MAX];

int find(int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

void union_set(int i, int j) {
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}

int compare(const void* a, const void* b) {
    Edge* e1 = (Edge*)a;
    Edge* e2 = (Edge*)b;
    return e1->weight - e2->weight;
}

void kruskal(Edge edges[], int n, int e) {
    for (int i = 0; i < n; i++)
        parent[i] = i;

    qsort(edges, e, sizeof(Edge), compare);

    int count = 0, i = 0;
    printf("Edges in MST:\n");
    while (count < n - 1 && i < e) {
        int u = edges[i].u;
        int v = edges[i].v;

        int set_u = find(u);
        int set_v = find(v);

        if (set_u != set_v) {
            printf("%d - %d  Weight: %d\n", u, v, edges[i].weight);
            union_set(set_u, set_v);
            count++;
        }
        i++;
    }
}

int main() {
    int n, e;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    printf("Enter number of edges: ");
    scanf("%d", &e);

    Edge edges[e];
    printf("Enter edges (u v weight):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i].u, &edges[i].v, &edges[i].weight);
    }

    kruskal(edges, n, e);

    return 0;
}
