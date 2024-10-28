//merge sort
#include<stdio.h>
int main(){
	int a[10],i,n,low,high;
	printf("How many elements:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	low=0;
	high=n-1;
	merge_sort(a,low,high);
	printf("Sorted Elements are :");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
merge_sort(int a[],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		merge_sort(a,low,mid);
		merge_sort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}
merge(int a[],int low,int mid,int high){
	int i=low,h=low,j,k,b[10];
	j=mid+1;
	while((h<=mid)&&(j<=high)){
		if(a[h]<a[j]){
			b[j]=a[h];
			h++; 
		}else{
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