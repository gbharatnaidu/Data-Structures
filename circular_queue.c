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
    head=temp->next;
    tail->next=head;
    free(temp);
    temp=NULL;
}
}
void display(){
temp=head;
do{
    printf("%d ",temp->data);
    temp=temp->next;
}while(temp!=head);
temp=NULL;
}
int main(){
int size=1;
do{
enqueue();
display();
dequeue();
printf("hello");
display();
size++;
}while(size<8);
return 0;
}
