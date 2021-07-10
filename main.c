#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
  //dynamic array functions
    int n;
struct student
{
   char name[100];
   int ID;
   int birth_year,birth_month,birth_day;
   int score;
};
void lastinsert2(struct student* ptr)
    {int start=clock();

n++;
  ptr = (struct student*)realloc(ptr,n*sizeof(struct student) );
    printf("Enter name :\n");
    scanf("%s",(ptr + n-1)->name);
     printf("Enter ID :\n");
    scanf("%d",&(ptr + n-1)->ID);
     printf("Enter birth_year:\n");
    scanf("%d",&(ptr + n-1)->birth_year);
     printf("Enter birth_month:\n");
    scanf("%d",&(ptr + n-1)->birth_month);
     printf("Enter birth_day:\n");
    scanf("%d",&(ptr + n-1)->birth_day);
     printf("Enter score:\n");
    scanf("%d",&(ptr + n-1)->score);
    int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                  printf("The Excuetion Time is:%f\n",z);
                   printf("The total size of the dynamic array in memory before insertion%lu\n",(n-1)*sizeof(struct student));
                   printf("The total size of the dynamic array in memory after insertion %lu\n",n*sizeof(struct student));


    }
 void middelinsert2(struct student* ptr)
 {
int start=clock();
n++;
  ptr = (struct student*)realloc(ptr,n*sizeof(struct student) );
    for (int i = n; i >n/2-1; i--)
        *(ptr+i)=*(ptr+i-1);
  printf("Enter name :\n");
    scanf("%s",(ptr+n/2)->name);
     printf("Enter ID :\n");
    scanf("%d",&(ptr+n/2)->ID);
     printf("Enter birth_year:\n");
    scanf("%d",&(ptr+n/2)->birth_year);
     printf("Enter birth_month:\n");
    scanf("%d",&(ptr+n/2)->birth_month);
     printf("Enter birth_day:\n");
    scanf("%d",&(ptr+n/2)->birth_day);
     printf("Enter score:\n");
    scanf("%d",&(ptr+n/2)->score);
int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                  printf("The Excuetion Time is:%f\n",z);
                   printf("The total size of the dynamic array in memory before insertion%lu\n",(n-1)*sizeof(struct student));
                   printf("The total size of the dynamic array in memory after insertion %lu\n",n*sizeof(struct student));

 }
 void insert2(struct student* ptr)
{   int start=clock();
    n++;
  ptr = (struct student*)realloc(ptr,n*sizeof(struct student) );
struct student *q;
for (int i = n; i >=0; i--)
*(ptr+i)=*(ptr+i-1);
  printf("Enter name :\n");
    scanf("%s",(ptr + 0)->name);
     printf("Enter ID :\n");
    scanf("%d",&(ptr + 0)->ID);
     printf("Enter birth_year:\n");
    scanf("%d",&(ptr + 0)->birth_year);
     printf("Enter birth_month:\n");
    scanf("%d",&(ptr + 0)->birth_month);
     printf("Enter birth_day:\n");
    scanf("%d",&(ptr + 0)->birth_day);
     printf("Enter score:\n");
    scanf("%d",&(ptr + 0)->score);

int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                  printf("The Excuetion Time is:%f\n",z);
                   printf("The total size of the dynamic array in memory before insertion%lu\n",(n-1)*sizeof(struct student));
                   printf("The total size of the dynamic array in memory after insertion %lu\n",n*sizeof(struct student));

}
void display2(struct student* ptr)
{

    for (int i = 0; i < n; ++i)
{
printf("Name of student :");
printf("%s\n " ,(ptr + i)->name);
printf("ID :");
printf("%d\n " ,(ptr + i)->ID);
printf("birth_year:");
printf("%d\n " ,(ptr + i)->birth_year);
printf("birth_month:");
printf("%d\n ", (ptr + i)->birth_month);
printf("birth_day:");
printf("%d\n " ,(ptr + i)->birth_day);
printf("score:");
printf("%d\n\n\n ", (ptr + i)->score);
}
}
int main()
{struct student *ptr;
    head = NULL;
    int choice,x;// x for other operation insertion
    int ID;
     char name[100];
   int birth_year,birth_month,birth_day;
   int score;
   int z;
   printf("\nwrite 1 if you want to use linkedlist write 2 if you want to use dynamicarray: ");
    scanf("%d", &z);
    if(z==1){
   num1 =num;
    struct Student* head = NULL;
    printf("\nNumber of student: ");
    scanf("%d", &num);
    for(int i=0;i<num;i++)
    {

        printf("Enter ID: ");
                  scanf("%d", &ID);
                  printf("Enter name: ");
                scanf("%s", name);
                printf("Enter birth_year: ");
                scanf("%d", &birth_year);
                printf("Enter birth_month: ");
                scanf("%d", &birth_month);
                printf("Enter birth_day: ");
                scanf("%d", &birth_day);
                printf("score: ");
                scanf("%d", &score);
                insert(ID,name, birth_year ,birth_month, birth_day,score );

    }
     printf("\nDo you want other insertion operations?\n1 for yes\n2 for no");
    scanf("%d", &x);
    if(x==1)
    {


    printf("1 to insert student at begin\n2  to insert student at end\n3 to insert student at middle\n4 to display all student details\n 0 for exit");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                   printf("Enter ID: ");
                scanf("%d", &ID);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter birth_year: ");
                scanf("%d", &birth_year);
                printf("Enter birth_month: ");
                scanf("%d", &birth_month);
                printf("Enter birth_day: ");
                scanf("%d", &birth_day);
                 printf("score: ");
                scanf("%d", &score);
                insert(ID,name, birth_year ,birth_month, birth_day,score );
                break;
            case 2:

                printf("Enter ID: ");
                scanf("%d", &ID);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter birth_year: ");
                scanf("%d", &birth_year);
                printf("Enter birth_month: ");
                scanf("%d", &birth_month);
                printf("Enter birth_day: ");
                scanf("%d", &birth_day);
                 printf("score: ");
                scanf("%d", &score);
                lastinsert(ID, name, birth_year ,birth_month, birth_day,score);
                break;
                case 3:

                  printf("Enter ID: ");
                scanf("%d", &ID);
                printf("Enter name: ");
                scanf("%s", name);
                  printf("Enter birth_year: ");
                scanf("%d", &birth_year);
                printf("Enter birth_month: ");
                scanf("%d", &birth_month);
                printf("Enter birth_day: ");
                scanf("%d", &birth_day);
                 printf("score: ");
                scanf("%d", &score);
                middelinsert(ID,name, birth_year ,birth_month, birth_day,score);
                break;
            case 4:
                display();
                break;
        }

    } while (choice != 0);}
    }
    else if (z==2) {
        printf("Enter the number of students: ");
  scanf("%d", &n);

  // Memory allocation for n structures
  ptr = (struct student *)calloc(n , sizeof(struct student));
  for (int i = 0; i < n; ++i) {
    printf("Enter name :\n");
    scanf("%s",(ptr + i)->name);
     printf("Enter ID :\n");
    scanf("%d",&(ptr + i)->ID);
     printf("Enter birth_year:\n");
    scanf("%d",&(ptr + i)->birth_year);
     printf("Enter birth_month:\n");
    scanf("%d",&(ptr + i)->birth_month);
     printf("Enter birth_day:\n");
    scanf("%d",&(ptr + i)->birth_day);
     printf("Enter score:\n");
    scanf("%d",&(ptr + i)->score);
  }

printf("\nDo you want other insertion operations?\n1 for yes\n2 for no\n");
    scanf("%d", &x);
    if(x==1)
    {

do
    {
    printf("1 to insert student at begin\n2  to insert student at end\n3 to insert student at middle\n4 to display all student details\n 0 for exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {case 1:

                insert2(ptr);
                break;
            case 2:
                lastinsert2(ptr);
                break;
                case 3:
            middelinsert2(ptr);
                break;
            case 4:
                display2(ptr);
                break;
        }

    } while (choice != 0);}
  free(ptr); }
else {
    printf("invalid input");
}

return 0;
}
