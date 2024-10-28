// selection sort 
#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int array[],int size)
{
	int i,step;
	for(step=0;step<size-1;step++)
	{
		int min_idx=step;
		for(i=step+1;i<size;i++)
		{
			if(array[i]<array[min_idx])
				min_idx=i;
		}
		swap(&array[min_idx],&array[step]);
	}
}

void printArray(int array[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}
int main()
{
	int data[100];
	int size;
	printf("how many elements:");
	scanf("%d",&size);
	printf("Enter the elements:");
	for(int i=0;i<size;i++)
		scanf("%d",&data[i]);
	selectionSort(data,size);
	printf("Sorted array in ascending order:\n");
	printArray(data,size);
}