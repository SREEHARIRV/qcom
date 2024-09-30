#include <stdio.h>
#include <string.h>

struct hanvika{
	char name[32];
	int *ptr;
};

int main(void)
{
	struct hanvika hanvi[3], *ptr;
	strcpy(hanvi[0].name, "HANVIKA RAMA");
	int hariptr=19;
	hanvi[0].ptr=&hariptr;
	ptr=&hanvi[0];
	printf("name:%s\n", hanvi[0].name);
	printf("name:%s\n", hanvi[1].name);
	printf("name:%s\n", hanvi[2].name);
	printf("ptr:%d\n", *(hanvi[0].ptr));
	printf("ptr:%d\n", *(hanvi[0].ptr));
	printf("ptrptr ptr:%d\n", *(ptr->ptr));
		printf("ptrptr name:%s\n", (ptr->name));
	
}
