#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#define INF 1000000000
typedef struct Vertex {
	int *duration_my;
	int* duration_total;
	int** connect;
}Vertex;
void get_graph(Vertex *vertex, int vertex_num, int edge_num) {
	int v1, v2;
	//get duration time
	for (int i = 0; i < vertex_num; i++) {
		scanf("%d", &(vertex->duration_my[i]));
		if (i == 0) vertex->duration_total[0] = vertex->duration_my[0];
		else vertex->duration_total[i] = INF;
	}
	//get edge imformation
	for (int i = 0; i < edge_num; i++) {
		scanf("%d%d", &v1, &v2);
		vertex->connect[v1-1][v2-1] = 1;
		vertex->connect[v2-1][v1-1] = 1;
	}
}
void min_duration(Vertex *vertex, int vertex_num, int node_num, int goal) {
	int dur_sum;
	for (int i = 0; i < vertex_num; i++) {
		if (vertex->connect[node_num][i] == 1) {
			dur_sum = vertex->duration_my[i] + vertex->duration_my[node_num];
			if (vertex->duration_total[i] > dur_sum) vertex->duration_total[i] = dur_sum;
			min_duration(vertex, vertex_num, i, goal);
		}
	}
}
int main() {
	Vertex vertex;
	int total_rotation;
	int edge_num, vertex_num;
	int goal;
	
	scanf("%d", &total_rotation);
	for (int i = 0; i < total_rotation; i++) {
		scanf("%d%d", &edge_num, &vertex_num);
		vertex.duration_my = malloc(sizeof(int) * vertex_num);
		vertex.duration_total = malloc(sizeof(int) * vertex_num);
		vertex.connect = malloc(sizeof(int*) * vertex_num);
		for (int j = 0; j < vertex_num; j++) {
			vertex.connect[i] = malloc(sizeof(int) * vertex_num);
			for (int k = 0; k < vertex_num; k++) {
				vertex.connect[j][k] = 0;
			}
		}

		get_graph(&vertex, vertex_num, edge_num);

		scanf("%d", &goal); 
		min_duration(&vertex, vertex_num, 0, goal);
		printf("%d\n", vertex.duration_total[goal-1]);
		
		free(vertex.duration_my);
		free(vertex.duration_total);
		for (int i = 0; i < vertex_num; i++) {
			free(vertex.connect[i]);
		}
		free(vertex.connect);
	}
}