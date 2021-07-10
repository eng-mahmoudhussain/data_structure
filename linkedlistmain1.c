#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
struct Student
{
    int ID;
 char name[100];
    int birth_year,birth_month,birth_day;
      int score;
    struct Student *next;

}* head;
int num;
int num1;
void insert(int ID,char* name, int birth_year,int birth_month,int birth_day,int score)
{  num1++;
    int start=clock();

    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    student->ID = ID;
    strcpy(student->name, name);
    student->birth_year =birth_year ;
    student->birth_month =birth_month;
    student->birth_day = birth_day;
    student->score = score;
    student->next = NULL;

    if(head==NULL){
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else{

        // if list is not empty insert student in beginning of head
        student->next = head;
        head = student;
    }
    int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                  printf("The Excuetion Time is:%f\n",z);
                   printf("The total size of the linked list in memory before insertion%lu\n",(num1-1)*sizeof(struct Student));
                   printf("The total size of the linked list in memory after insertion %lu\n",num1*sizeof(struct Student));


}



void display()
{
    struct Student * temp = head;
    while(temp!=NULL){


        printf("ID : %d\n", temp->ID);
        printf("Name: %s\n", temp->name);
        printf("birth_year: %d\n", temp->birth_year);
        printf("birth_month: %d\n", temp->birth_month);
        printf("birth_day: %d\n", temp->birth_day);
        printf("score: %d\n", temp->score);
        temp = temp->next;

    }
}
void lastinsert(int id, char* name, int birth_year,int birth_month,int birth_day,int score)
    { num1++;
        int start=clock();
        struct Student *ptr = (struct Student*)malloc(sizeof(struct Student));
        struct Student *temp;
        if(ptr == NULL)
        {
            printf("\empty linked list");
        }
        else
        {
            ptr->ID = id;
             strcpy(ptr->name, name);
             ptr->birth_year =birth_year;
            ptr->birth_month =birth_month;
            ptr->birth_day =birth_day;
            ptr->score =score;

            if(head == NULL)
            {
                ptr -> next = NULL;
                head = ptr;
            }
            else
            {
                temp = head;
                while (temp -> next != NULL)
                {
                    temp = temp -> next;
                }
                temp->next = ptr;
                ptr->next = NULL;

            }
        }
            int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                  printf("The Excuetion Time is:%f\n",z);
                  printf("The total size of the linked list in memory before insertion%lu\n",(num1-1)*sizeof(struct Student));
                   printf("The total size of the linked list in memory after insertion %lu\n",num1*sizeof(struct Student));
    }

    void middelinsert(int id, char* name,int birth_year,int birth_month,int birth_day,int score)
    { num1++;
        int start=clock();
        struct Student *ptr = (struct Student*)malloc(sizeof(struct Student));
        struct Student *temp;
        struct student *aft;
        struct Student * temp1 = head;
        if(ptr == NULL)
        {
            printf("\empty linked list");
        }
        else
        {
            ptr->ID = id;
              strcpy(ptr->name, name);
             ptr->birth_year =birth_year;
            ptr->birth_month =birth_month;
            ptr->birth_day =birth_day;
            ptr->score =score;


            if(head == NULL)
            {
                ptr -> next = NULL;
                head = ptr;
            }

            else
            {

                    int counter=0;
            while(temp1!=NULL){

            counter++;
            temp1 = temp1 -> next;}
            if(counter==0)
            printf("\empty linked list");
                temp = head;
                for(int i=0;i<counter/2-1;i++)
                {
                    temp = temp -> next;
                }
                aft =temp->next ;
                ptr->next = aft;
                temp->next =ptr;


            }
        }
        int finish=clock();
int z = (double)(finish-start)/CLOCKS_PER_SEC;
                printf("The total size of the linked list in memory before insertion%lu\n",(num1-1)*sizeof(struct Student));
                   printf("The total size of the linked list in memory after insertion %lu\n",num1*sizeof(struct Student));

    }
int main()
{
    head = NULL;
    int choice,x;// x for other operation insertion
    int ID;
     char name[100];
   int birth_year,birth_month,birth_day;
   int score;
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
return 0;
}
