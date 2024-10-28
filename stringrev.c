* Program to find the reverse a string without using building function */
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],rev[20];
	int i,len=0;
	
	printf("Enter a string");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)
		len++;
	
	for(i=0;i<len;i++)
		rev[i]=str[len-1-i];
		
		rev[i]='\0';
		
	printf("\n Given string=%s",str);
	printf("\n Reversed string=%s",rev);
}