// C Program to illustrate the 2D array
#include <stdio.h>

int main() {
  
    // Create and initialize an array with 3 rows
    // and 2 columns
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };
	int ( * ptr) [2] ;
	ptr=arr;
	
    // Print each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
            printf("1: arr[%d][%d]: %d    ", i, j, *( *(arr+i) +j) );
            printf("2: arr[%d][%d]: %d    ", i, j, *(arr+i));
            printf("3: arr[%d][%d]: %d    ", i, j, arr[i]);
        }
          printf("\n");
    }
    
printf("%u %u %u\n",ptr,ptr+1,ptr+2);
printf("%u %u %u \n", *ptr, *(ptr+1) ,*(ptr+2) ) ;

printf("%d %d %d\n",**ptr,*(*(ptr+1)+1),*(*(ptr+2)+1));
printf("%d %d %d\n" ,ptr[0] [0] ,ptr[1][1] ,ptr[2][1]);

    return 0;
}

