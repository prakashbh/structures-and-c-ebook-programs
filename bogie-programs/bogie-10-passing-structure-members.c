#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
  char name[20];
  int effort;
  float marks;
};

void update_marks(int effort, float *marks)
{
    if(effort == 1)
    {
        if(*marks <=40)
            *marks =  *marks + *marks * 0.25;
    }
}

int main()
{
    struct student s1;
    strcpy(s1.name, "Vishwa");
    s1.marks = 30;
    s1.effort = 1;
    update_marks(s1.effort, &s1.marks);

    printf("Student Details:\n");
    printf("Name: %s\nMarks: %f\n", s1.name, s1.marks);

    return 0;
}
