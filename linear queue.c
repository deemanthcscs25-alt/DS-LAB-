#include <stdio.h>
# define max 5
int queue[max];
int front=-1,rear=-1;
void insert()
{

    int value;
    if(rear==max-1)
    {
        printf("queue overflow");
        return;
    }
    printf("enter the no.");
    scanf("%d",&value);
    if(front==-1)
        front=0;
    rear++;
    queue[rear]=value;
    printf("elemenat inserted successfully");

    }
    void delete()
    {

        if(front==-1)
        {

            printf("underflow");
            return;
        }
        else
        {
            printf("deleted element %d",queue[front]);
            front++;
            if(front>rear)
                front=rear-1;
        }
    }

        void display()
        {

            int i;
            if (front==-1)
            {

                printf("queue is empty");
                return;
            }
            printf("queu elemnts:");
            for(i=front;i<=rear;i++)
            {
                printf("\n%d",queue[i]);
            }
            printf("\n");
                   }
                   int main()
                   {
                       int choice;
                       do
                       {

                           printf("\n 1.insert \n 2. delete \n 3.display \n4.exit:");
                           printf("\nenter the choice:");
                           scanf("%d",&choice);
                           switch(choice)
                           {

                           case 1:
                            insert();
                            break;
                           case 2:
                            delete();
                            break;
                           case 3:
                            display();
                            break;
                           case 4:
                            printf("exit");
                            break;
                        default:
                                printf("invalid");
                           }

                            }while(choice!=4);

                            return 0;


                       }

