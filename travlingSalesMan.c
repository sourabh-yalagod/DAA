#include <stdio.h>
int matrix[25][25],visitedCities[10],limit,cost=0;
int tsp(int c){
    int cnt,nearCity=999;
    int min = 999,temp;
    for(cnt =0;cnt<limit;cnt++){
        if((matrix[c][cnt])&&(visitedCities[cnt]==0)){
            if(matrix[c][cnt]<min){
                min =matrix[cnt][0]+matrix[c][cnt];
            }
            temp = matrix[c][cnt];
            nearCity = cnt;
        }
    }
    if(min != 999){
        cost += temp;
    }return nearCity;
}
void minCost(int city){
    int nearCity;
    visitedCities[city] = 1;
    printf("%d",city+1);
    cost = cost+matrix[city][nearCity];
    return;
}
int main(){
    int i,j;
    printf("Enter total number of cities \n");
    scanf("%d",&limit);
    printf("Enter cost matrix:");
    for(i=0;i<limit;i++){
        printf("\nEnter %d element in Row[%d]",limit,i+1);
        for(j=0;j<limit;j++){
            scanf("%d",&matrix[i][j]);
        }
		visitedCities[i]=0;	
    }
	printf("\n Enter Cost matrix\n");
	for(i=0;i<limit;i++){
		printf("\n");
		for(j=0;j<limit;j++){
			printf("\t%d",matrix[i][j]);
		}
	}
	printf("\nPath:\t");
	minCost(0);
	printf("\n Minimum cost:");
	printf("%d\n",cost);
	return 0;
}