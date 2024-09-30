#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int *ptr = (int *)malloc(sizeof(int)*2); 
printf("%d ", (ptr)); 
int i; 
int *ptr_new; 
	
*ptr = 10; 
*(ptr + 1) = 20; 
	
ptr_new = (int *)realloc(ptr, sizeof(int)*6); 
printf("ptr_new %d ", (ptr_new)); 
*(ptr_new + 2) = 30; 
for(i = 0; i < 6; i++) 
{
	*(ptr_new + i)=i;
	printf("%d ", *(ptr_new + i)); 
}
	

// getchar(); 
return 0; 
} 

