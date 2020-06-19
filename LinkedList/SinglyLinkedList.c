#include<stdio.h>
#include<stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();

struct node
{
    int data;
    struct node* link;
};

struct node *head = NULL;

int main()
{
    int num;
    while(1)
    {
        printf("\n---SINGLE LINKED LIST SIMPLE IMPLEMENTATION -----\n");
        printf("       MENU       \n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert at the beginning\n");
        printf("4.Insert at the End\n");
        printf("5.Insert at the specified position\n");
        printf("6.Delete at the beginning\n");
        printf("7.Delete at the End\n");
        printf("8.Delete at the specified position\n");
        printf("9.EXIT\n");
        printf("----------------------------------------------------\n");
        scanf("%d",&num);
        switch(num)
        {
            case 1 :
                        create();
                        break;
            case 2 :
                        display();
                        break;
            case 3 :
                        insert_begin();
                        break;
            case 4 :
                        insert_end();
                        break;
            case 5 :
                        insert_pos();
                        break;
            case 6 :
                        delete_begin();
                        break;
            case 7 :
                        delete_end();
                        break;
            case 8 :
                        delete_pos();
                        break;
            case 9 :
                        exit(0);
                        break;

        }
    }
    return 0;
}

                        void create()
                        {
                            struct node* temp,*temp1;
                            temp=(struct node*)malloc(sizeof(struct node));

                            printf("Input Data : ");
                            scanf("%d",&temp->data);
                            temp->link=NULL;

                            if(head==NULL)
                            {
                                head = temp;
                            }
                            else
                            {
                                temp1 = head;
                                while((temp1->link)!=NULL)
                                {
                                    temp1=(temp1->link);
                                }
                                (temp1->link)=temp;
                            }

                        }

                        void display()
                        {
                            struct node* temp=head;

                            printf("The Value in the Linked list are : ");
                            while(temp!=NULL)
                            {
                                printf("\t%d",temp->data);
                                temp=temp->link;
                            }
                            printf("\n");
                        }

                        void insert_begin()
                        {
                            struct node* temp;
                            temp = (struct node*)malloc(sizeof(struct node));

                            printf("Enter data : ");
                            scanf("%d",&temp->data);
                            temp->link=head;
                            head=temp;
                        }
                        void insert_end()
                        {
                            struct node* temp,*temp2;
                            temp = (struct node*)malloc(sizeof(struct node));

                            printf("Enter data : ");
                            scanf("%d",&temp->data);
                            temp->link = NULL;

                            temp2=head;
                            while(temp2->link!=NULL)
                            {
                                temp2 = temp2->link;
                            }

                            temp2->link = temp;

                        }
                        void insert_pos()
                        {
                            struct node *temp,*cur=head,*pre=head,*temp1;
                            int in;
                            printf("Insert Index Position : ");
                            scanf("%d",&in);

                            if(in==0)
                            {
                                insert_begin();
                                return;
                            }

                            for(int i=0;i<in && cur->link!=NULL;i++)
                            {
                                temp1 = cur;
                                cur = cur->link;
                                pre= temp1;
                            }

                            if(cur->link==NULL)
                            {
                                insert_end();
                                return;
                            }

                            temp = (struct node*)malloc(sizeof(struct node));

                            temp->link = NULL;
                            printf("Enter Data : ");
                            scanf("%d",&temp->data);
                            pre->link = temp;
                            temp->link = cur;

                        }
                        void delete_begin()
                        {
                            struct node* temp = head;
                            head = head->link;
                            free(temp);
                        }
                         void delete_end()
                        {
                            struct node* temp = head;

                            while(temp->link->link!= NULL)
                            {
                                temp = temp->link;
                            }
                            temp->link = NULL;
                        }
                        void delete_pos()
                        {
                            int pos,i;
                            printf("Enter the Position you want to Delete : ");
                            scanf("%d",&pos);

                            if(pos == 0)
                            {
                                delete_begin();
                                return;
                            }

                            struct node* cur=head,*pre=NULL,*temp;
                            for(i = 0 ; i<pos && cur->link!=NULL; i ++)
                            {
                                temp=cur;
                                cur=cur->link;
                                pre=temp;
                            }
                            if(i==pos)
                            {
                                pre->link = cur->link;
                                return;
                            }
                            if(cur->link == NULL)
                            {
                                printf("Invalid Position!!!!!\n");
                                return;
                            }

                        }
