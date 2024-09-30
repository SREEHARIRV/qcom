#include<stdio.h>
main ( )
{
char a='R', *p1=&a;
int b=12, *p2=&b;
float c=12.4,*p3=&c;
double d=18.3,*p4=&d;
printf("sizeof()pl) %d  %d\nU" ,sizeof(p1),sizeof(*p1));
printf("sizeof(p2) %d  %d\nU" ,sizeof(p2),sizeof(*p2));
printf("sizeoflp3) %d  %d\nU" ,sizeof(p3),sizeof(*p3));
printf ("sizeof Ip4) %d %d\nU" ,sizeof(p4),sizeof(*p4));
}
//sizeof()pl) 8  1
//Usizeof(p2) 8  4
// Usizeoflp3) 8  4
// Usizeof Ip4) 8 8
