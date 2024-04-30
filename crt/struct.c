#include<stdio.h>

struct student 
{    double a;
   float b;
    char c;
};

void main()
{
    struct student std1;
    struct student *ptr1;
    printf("\n size of std1 = %d", sizeof(std1));
    printf("\n size of ptr1 = %d", sizeof(ptr1));

}
