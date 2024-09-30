#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int arr[2], i; 
int *ptr = arr; 
int *ptr_new; 
	
arr[0] = 10; 
arr[1] = 20;	 
	
// incorrect use of new_ptr: undefined behaviour 
ptr_new = (int *)realloc(ptr, sizeof(int)*3); 
*(ptr_new + 2) = 30; 
	
for(i = 0; i < 3; i++) 
	printf("%d ", *(ptr_new + i)); 

//getchar(); 
return 0; 
} 

