#include<stdio.h>
void mergesort();
void merge();
void main(){
	int a[10],high,low,i,n;
	printf("\n how many elements");
	scanf("%d",&n);
	printf("\n enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
	mergesort(a,low,high);
	printf("Sorted List : ");
	for(i=0;i<n;i++){
		printf("\n%d",a[i]);
	}
}
void mergesort(int a[],int low,int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high){
	int i=low,h=low,j,k,b[10];
	j=mid+1;
	while((h<=mid)&&(j<=high)){
		if(a[h]<a[j]){
			b[i]=a[h];
			h++;
		}
		else{
			b[i]=a[j];
			j++;
		}
		i++;
	}
	if(h>mid){
		for(k=j;k<=high;k++){
			b[i]=a[k];
			i++;
		}
	}
	else{
		for(k=h;k<=mid;k++){
			b[i]=a[k];
			i++;
		}
		for(k=low;k<=high;k++)
			a[k]=b[k];
	}
}