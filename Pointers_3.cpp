#include<stdio.h>
main ( )
{
int arr[5]={5,1,15,20,25};
int i, *ptr;
ptr=arr;
for(i=0;i<5;i++)
{
/*
printf ("Value of arr [%d] \n", *(arr+i) );
printf("Address of ,arr[%d] \n", (arr+i)  );
printf("Value of arr %d\n", arr[i]);
printf("Address of arr %d\n", &arr[i]);
*/
printf("1:Value of arr %d, %d, %d, %d\n", ptr[i], *(ptr+i), arr[i], *(arr+i));
printf("2:Address of arr %d, %d, %d, %d\n", &ptr[i], ptr+i, &arr[i] , arr+i);
}

}
