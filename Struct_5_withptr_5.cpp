#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct returnptr{
	char name[32];
	int cost;
};
struct returnptr *function()
{
	struct returnptr *pr;
	pr=(struct returnptr *)malloc(sizeof(struct returnptr));
	strcpy(pr->name, "Hanvi baby");
	pr->cost=10;
return pr;
}
int main(void)
{
	struct returnptr *stptr;
	stptr=function();
	printf("stptr:stptr=%d\n", stptr->cost);
	printf("stptr:stptr=%s\n", stptr->name);
	
}
// cel 20, 8 to , 
// 
