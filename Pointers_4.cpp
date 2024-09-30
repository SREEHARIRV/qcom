#include<stdio.h>
main ( )
{
int arr [5] = {3, 5,6,7,9} ;
int *p=arr;
int (*ptr)[5]=&arr;
int *st=ptr[0];

printf("p = %u, ptr = %u\n",p,ptr);
printf("*p = %d, *ptr = %u\n",*p,*ptr);
printf("sizeof(p) = %u, sizeof(*p) = %u\n",sizeof(p),sizeof(*p));
printf("sizeof(ptr) = %u, sizeof(*ptr) =0 %u\n",sizeof(ptr), sizeof (*ptr));

printf("Value of Array: ptr[1]=%d\n", *(ptr[0]+4));
printf("Value of Array: ptr[1]=%d\n", *(*(ptr+0)+4));
printf("Value of Array: ptr[2]=%d\n", (ptr+2));
printf("Value of Array: ptr[2]=%d\n", *(st+3));
}
