#include<stdio.h>
struct student
{
    char name[25];
    int age;
}
void display(struct student st)
{
    printf("Name of Student : %s\n", st.name);
printf("Age of Student : %d\n", st.age);

}

int main()
{
    struct student s1,s2;
    strcpy(s1.name,"Harun");
    s1.age=12;
    display(s1);

    strcpy(s2.name,"Har");
    s2.age=19;
    display(s2);
    return 0;

}
