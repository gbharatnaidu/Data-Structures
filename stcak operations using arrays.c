#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int);
void pop();
void display();
int main(){
    int n,val;
    while(1){
    printf("choose the option:");
    printf("1.push\n2.pop\n3.display\n4.exit");
    scanf("%d",&n);
    switch(n){
    case 1:

        printf("enter the element to insert:");
        scanf("%d",&val);
        push(val);
        break;
    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        exit(1);
    default:
        printf("enter the correct option:");
    }


}
}
void push(int ele){
if(top==max-1){
    printf("out of the stack memory");
}
else{
    top++;
    stack[top]=ele;
}
}
void pop(){
if(top==-1){
    printf("no elements in the stack");
}
else{
    top--;
}
}
void display(){
if(top==-1)
    prinf("no elements to display");

else{
    int i;
    for(i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
}
}
