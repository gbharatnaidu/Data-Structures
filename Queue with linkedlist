#include<stdio.h>
#include<stdlib.h>
struct queue  /*creation of queue node*/
{
  int data;
  struct queue *next;
}*front=NULL,*rear=NULL,*temp=NULL;
void createnode(){
    int n;
temp=(struct queue*)malloc(sizeof(struct queue));
printf("\nenter the data:");
scanf("%d",&n);
if(temp==NULL){
    printf("\noverflow");
}
else{
temp->data=n;
temp->next=NULL;
}
}
void enqueue()
{
  createnode();
  if(front==NULL){
    front=rear=temp;
    temp=NULL;
  }
  else{
    rear->next=temp;
    rear=temp;
    temp=NULL;
  }
}
void dequeue(){
    if(front==NULL){
        printf("\nunderflow");
    }

    temp=front;
    front=front->next;
    free(temp);
    temp=NULL;

}
void display(){
temp=front;
printf("\nthe elements are");
while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
}
}
int main(){
 int k;
do
{
        printf("\nchoose the option");
        printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
        scanf("%d",&k);
        switch(k){
            case 1:enqueue();
            display();
            break;
            case 2:dequeue();
            display();
            break;
            case 3:display();
            break;
            case 4:exit(1);
            default:
                printf("\nchoose the correct option");
        }
}while(1);
}
