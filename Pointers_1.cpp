#include <stdio.h>
main( )
{

int a=4;
float b=4.5;
int *p1=&a;
float *p2=&b;



printf ("Value of pl = address of a=%u\n", &p1) ;
printf ("Value of p1 = address of a=%u\n", &p2) ;
printf ( "Valu of a -, %d %d %d \ n" , a, *p1 , * (&a) ) ;
printf ("Value of b %f %f %f \n", b, *p2, *(&b) ) ;
}
