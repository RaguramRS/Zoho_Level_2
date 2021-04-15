#include<stdio.h>
main(){
	char str[25];
	gets(str);
	int n=strlen(str);
	int m=n/2,i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++)
			printf("  ");
		for(j=0;j<i+1;j++)
			printf("%c ",str[(m+j)%n]);
		printf("\n");
	}
}
