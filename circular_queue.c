#include<stdio.h>
#include<stdlib.h>
struct circular_buffer{
int data;
struct circular_buffer *next;
}*head=NULL,*tail=NULL,*temp=NULL;
void createnode(){
int n;
temp=(struct circular_buffer*)malloc(sizeof(struct circular_buffer));
printf("\nenter the data:");
scanf("%d",&n);
temp->data=n;
temp->next=NULL;
}
void enqueue(){
createnode();
if(head==NULL){
    head=tail=temp;
    temp=NULL;
}
else{
    tail->next=temp;
    tail=temp;
    temp=NULL;
}
tail->next=head;
}
void dequeue(){
if(head==NULL){
    printf("\nempty");
}
else if(head==tail){
    temp=head;
    free(temp);
    temp=head=tail=NULL;
}
else {
    temp=head;
    head=head->next;
    tail->next=head;
    free(temp);
    temp=NULL;
}
}
void display(){
    if(head==NULL)
    printf("\nno elements to display");
else{
temp=head;
do{
    printf("%d ",temp->data);
    temp=temp->next;
}while(temp!=head);
temp=NULL;
}
}
int main(){
    int k;
    do{
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
