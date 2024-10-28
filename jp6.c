//jp 6
//find min max in array
#include<stdio.h>
int max,min;
int a[100];

void minMax(int i,int j){
	int max1,min1,mid;
	if(i==j){
		max1=min1=a[i];
	}
	else
	{
		if(i==j-1)
		{
			if(a[i]<a[j]){
				max=a[j];
				min=a[i];
			}
			else{
				max=a[i];
				min=a[j];
			}
		}
		else
		{
			mid=(i+j)/2;
			minMax(i,mid);
			max1=max;
			min1=min;
			minMax(mid+1,j);
			if(max<max1)
				max=max1;
			if(min>min1)
				min=min1;
		}
	}
}
int main(){
	int i,n;
	printf("How many numbers:");
	scanf("%d",&n);
	printf("Enter numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	minMax(1,n);
	printf("Min:%d",min);
	printf("Max:%d",max);
	return 0;
}


