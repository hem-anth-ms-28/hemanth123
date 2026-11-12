#include<stdio.h>
struct student
{
    int usn;
    char name[30];
    float marks;
};
  int main()
{
  struct student s;
  printf("enter usn:");
  scanf("%d",&s.usn);
  printf("enter name:");
  scanf("%s",s.name);
  printf("enter marks:");
  scanf("%f",&s.marks);
  printf("\nusn:%d",s.usn);
  printf("\nname:%s",s.name);
  printf("\nmarks:%f",s.marks);
  return 0;
}
