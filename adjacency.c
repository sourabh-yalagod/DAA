//adjecency matrix
#include<stdio.h>
int no_vertice;
void printGraph(int adj[][no_vertice]){
	for(int i=0;i<no_vertice;i++){
		for(int j=0;j<no_vertice;j++){
			printf("\|%d",adj[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int s, d;
	printf("No of vertices:");
	scanf("%d",&no_vertice);
	int adj[no_vertice][no_vertice];
	for(int i=0;i<no_vertice;i++){
		for(int j=0;j<no_vertice;j++){
			adj[i][j]=0;
		}
	}
	while(s!=-1&&d!=-1){
		printf("Enter an edge form node(0-%d) to node(0-%d): ",no_vertice,no_vertice);
		scanf("%d%d",&s,&d);
		adj[s][d]=1;
		adj[d][s]=1;
	}
	printGraph(adj);
	return 0;
}
