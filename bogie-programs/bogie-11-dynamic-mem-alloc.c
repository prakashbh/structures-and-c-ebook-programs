#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct bunk_class
{
	int sem;
	int no_of_students;
	char reason[50];
	char punishment[20];
};

int main()
{
    struct bunk_class *day1;

    day1 = (struct bunk_class *) malloc(sizeof(struct bunk_class));

    if(day1== NULL){
        printf("Memory Allocation Failed\n");
        return -1;
    }

    day1->sem = 3;
    day1->no_of_students = 50;
    strcpy(day1->reason, "Too Tired From Sports");
    strcpy(day1->punishment, "NO");

    printf("Here is what happened on day one:\n");
    printf("%d students of %d sem Bunked class for %s reason and got %s punishment!\n", day1->no_of_students, day1->sem, day1->reason, day1->punishment);

    return 0;
}
