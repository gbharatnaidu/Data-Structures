#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;
void enqueue(){
    int data;
    printf("enter the data to insert\n");
    scanf("%d",&data);
    if(front==-1){
    front=rear=0;
    queue[front]=data;
    }
    else if(rear==MAX-1){
        printf("overflow condition in queue\n");
    }
    else{
        rear++;
        queue[rear]=data;
    }
}
void dequeue(){
    if(front==-1)
    printf("underflow\n");
    else if(front==rear){
        front=rear=-1;
    }
    else{
        front++;
        queue[front];
    }
}
void display(){
    if(front==-1)
    printf("no elements in queue\n");
    else{
        printf("elements in the queue are:\n");
        for(int i=front;i<=rear;i++)
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
