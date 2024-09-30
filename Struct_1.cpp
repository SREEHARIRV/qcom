#include <stdio.h>  
#include <string.h>  
  
struct Person {  
    char name[50];  
    int age;  
    float height;  
};  
  
int main() {  
    struct Person person1, person2, *personptr;
    struct Person person3={	"sreehari", 30, 164};
	
  
  
    strcpy(person1.name, "John Doe");  
    person1.age = 25;  
    person1.height = 6.1;  
  	person2=person1;
  	personptr=&person3;
  	
    printf("Name: %s\n", person1.name);  
    printf("Age: %d\n", person1.age);  
    printf("Height: %.2f\n", person1.height);  
  printf("\n");
    printf("Name: %s\n", person2.name);  
    printf("Age: %d\n", person2.age);  
    printf("Height: %.2f\n", person2.height);  
  printf("\n");
    printf("Name: %s\n", person3.name);  
    printf("Age: %d\n", person3.age);  
    printf("Height: %.2f\n", person3.height);
  printf("\n");
    printf("Ptr:Name: %s\n", personptr->name);  
    printf("Ptr:Age: %d\n", personptr->age);  
    printf("Ptr:Height: %.2f\n", personptr->height);
  printf("\n");  
	printf("size of struct Person=%d, sizeof(person1)=%d, sizeof(person2)=%d", sizeof(struct Person), sizeof(person1), sizeof(person2));
	
    return 0;  
}    
