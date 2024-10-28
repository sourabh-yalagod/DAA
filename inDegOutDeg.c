//program to print in-deg out-deg to adj matrix
#include<stdio.h>
#define Max 10
void acceptGraph(int G[][Max],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Edge (v%d,v%d) exits?(yes=1,No=0)",i,j);
			scanf("%d",&G[i][j]);
		}
	}
}
void disAdjMatrix(int G[][Max],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d",G[j][i]);
		}
		printf("\n");
	}
}
void calOutDeg(int G[][Max],int n){
	int i,j,sum;
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<n;j++){
			sum+=G[i][j];
		}
		printf("Out-Degree(v%d):%d\n",i,sum);
	}
}
void calInDeg(int G[][Max],int n){
	int i,j,sum;
	for(i=0;i<n;i++){
		sum = 0;
		for(j=0;j<n;j++){
			sum+=G[j][i];
		}
		printf("In-Degree(v%d):%d\n",i,sum);
	}
}
int main(){
	int G[Max][Max],n;
	printf("Enter No of vertices:");
	scanf("%d",&n);
	acceptGraph(G,n);
	printf("Adjancy Matrix:\n");
	disAdjMatrix(G,n);
	printf("Out-Degree:\n");
	calOutDeg(G,n);
	printf("In-Degree:\n");
	calInDeg(G,n);

	
}