#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[10] = {1,4,7,2,5,8,3,6,9,0};
	int i, j, t = 0;

	for(i = 0; i < 10; i++) {
		
		printf("%d\t", a[i]);
	}
	
	for(i=0; i < 10-1; i++)
	  for(j=i+1; j < 10; j++)
		if(a[i] > a[j]) {
			
			t = a[j];
			a[j] = a[i];
			a[i] = t;
		}

	printf("\n");

	for(i = 0; i < 10; i++)
	  printf("%d\t", a[i]);

	printf("\n");
		  
	return EXIT_SUCCESS;
}
