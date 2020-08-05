#include<stdio.h>
#define MAX 3
int queue[MAX];
int front=-1,rear=-1;
void enqueue(){
    int data;
    printf("enter the data to insert\n");
    scanf("%d",&data);
    if(front==-1)
        front=rear=0;
    else if( (rear+1)%MAX == front){
        printf("overflow condition in queue\n");
    }
    else
        rear=(rear+1)%MAX;
    queue[rear]=data;
}

void dequeue(){
    if(front==-1)
        printf("underflow\n");
    else if(front==rear)
        front=rear=-1;
    else
        front=(front+1)%MAX;
}

void display(){
    if(front==-1)
        printf("no elements in queue\n");
   /* else{
        if(rear>=front){
            for(int i=front;i<=rear;i++)
            printf("%d ",queue[i]);
        }
        else{
            for(int i=front;i<MAX;i++)
            printf("%d ",queue[i]);
            for(int i=0;i<=rear;i++)
            printf("%d ",queue[i]);
        }
    }*/
    for(int i=front;i<=rear;i=(i+1)%MAX){
        printf("%d ",queue[i]);
    }
    printf("\n");
}
void peek(){
    printf("the first element in the queue is : %d\n",queue[front]);
}
int main(){
    while(1){
    printf("1.enqueue\n2.dequeue\n3.display\n4.peek\n5.exit\n");
    int n;
    scanf("%d",&n);
        switch(n){
            case 1:enqueue();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            case 5:exit(1);
        }
    }
}
