//linear search
#include<stdio.h>
int main(){
	int a[100],n,i,pos,key;
	printf("Enter how many elements:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the key element:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(key == a[i]){
			pos=i;
			printf("%d is present at position %d",key,i+1);
			break;
		}
		
	}if(i==n)
			printf("%d is not present in the list...",key);
}