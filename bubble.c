//bubble sort
#include<stdio.h>
int main(){
	int a[100],n,i,j;
	printf("How many elements:");
	scanf("%d",&n);
	
	printf("Enter the elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted elements:");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}