#include<stdio.h>
#include<conio.h>
#define MAX 10

int R,F;
void Queue()
{
  R=F=-1;
}

void Enqueue(int Q[], int x)
{
  if(R==(MAX-1))
    printf("Queue Overflow\n");
  else
  {
    if(R==-1)
      F=R=0;
    else
      R++;
      Q[R]=x;
  }
}

int Dequeue(int Q[])
{
  if(F==-1)
    printf("Queue Empty\n");
  else
  {
    int x=Q[F];
    if(F==R)
      Queue();
    else
      F++;
    return x;
  }
}

int peek(int Q[])
{
  if(F==-1)
    return -999;
  else
    return(Q[F]);
}

int SizeOfQ(int Q[])
{
  if(F==-1)
    return 0;
  else
    return(R-F+1);
}

void  Display(int Q[])
{
  if(F==-1)
    printf("Queue Empty\n");
  else
  {
    int i;
    for(i=F;i<=R;i++)
      printf("%d\t",Q[i]);
  }
  printf("\n");
}

int Underflow()
{
  if(F==-1)
    return 1;
  else
    return 0;
}

int Overflow()
{
  if(R==(MAX-1))
    return 1;
  else
    return 0;
}

int main()
{
  int qq[MAX];
  int ch,e;
  printf("1.Initialize\n 2.Enqueue\n 3.Dequeue\n 4.Peek\n 5.Size\n 6.Display\n 7.Underflow\n 8.Overflow\n 9.Exit\n");
  do
  {
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        Queue();
        break;
      case 2:
        printf("Enter element to be inserted:");
        scanf("%d",&e);
        Enqueue(qq,e);
        break;
      case 3:
        e=Dequeue(qq);
        if(e=-9999)
          printf("No element deleted\n");
        else
          printf("The deleted element is:%d\n",e);
        break;
      case 4:
        if(peek(qq)==-9999)
          printf("No element found\n");
        else
          printf("The last element is:%d\n",peek(qq));
        break;
      case 5:
        printf("Size of Queue is:%d\n",SizeOfQ(qq));
        break;
      case 6:
        printf("The Queue is:\n");
        Display(qq);
        break;
      case 7:
        if(Underflow()==1)
               printf("Stack Underflow\n");
        else
               printf("Not Underflow\n");
        break;
      case 8:
        if(Overflow()==1)
               printf("Stack Overflow\n");
        else
               printf("Not Overflow\n");
        break;
      case 9:
         printf("Exit\n");
         break;
    }
  }while(ch!=9);
  getch();
  return 0;
}
                      

                      
               
  
