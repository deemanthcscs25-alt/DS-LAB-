#include<stdio.h>
int stac[5],top=-1,max=5;
void push(){
    int value;
    if(top==max-1){
        printf("stack overflow");
    }
    else{
    printf("enter value");
    scanf("%d",&value);
    top++;
    stac[top]=value;
}
}
void pop()
{
 if(top==-1){
 printf("stack underflow");
  }
else{
    printf("popped elements are:%d \n",stac[top]);
    top--;
 }
}

void display()
{
    int i;
    if(top==-1){
        printf("stack is empty \n");
}
    else
  {
    printf("stack elements are: \n");
    for(i=top;i>=0;i--){
        printf("%d \n",stac[i]);
    }
}
}

int main(){
   int choice;
   while(1){
        printf("enter:1-push,2:pop,3:display--\n");
        scanf("%d",&choice);
        switch(choice){
          case 1:
                 push();
                 break;
          case 2:
                 pop();
                 break;
          case 3:
                 display();
                 break;
          case 4:
                 return 0;
          default:
            printf("invalid \n");
        }
    }


    }




