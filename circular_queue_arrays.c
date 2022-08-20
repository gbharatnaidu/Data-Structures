
#include <stdio.h>
#include <stdlib.h>
#define max 5
int queue[max];
int head=-1,tail=-1;
int enqueue(int val)
{
    
    if((tail+1)%max == head)
    {
        printf("queue overflow\n");
    }
    else
    {
        if(head==-1)
            head=tail=0;
        else
            tail=(tail+1)%max;
        queue[tail]=val;
    }
}

int dequeue()
{
    if(head==-1)
        printf("undeflow");
    else
    {
        if(head==tail)
            head=tail=-1;
        else
            head=(head+1)%max;
    }
}
void display()
{
    int i=head;
    while(i!=tail)
    {
        printf("%d ",queue[i]);
        i= (i+1)%max;
    }
    printf("%d ",queue[i]);
    printf("\n");
}
int main()
{
    
    while(1)
    {
        printf("choose the option\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        int n,val;
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                printf("enter the value\n");
                scanf("%d",&val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
                break;
        }
    }
    

    return 0;
}
