#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
}*root=NULL,*temp=NULL,*parent=NULL;
void createnode(){
int n;
printf("\nenter the data");
scanf("%d",&n);
temp= (struct node*)malloc(sizeof(struct node));
temp->data=n;
temp->left=NULL;
temp->right=NULL;
}
void insert()
{
createnode();
struct node *current;
if(root == NULL)
{
root =temp;
}
else
{
current= root;
while(current!= NULL)
{
parent= current;
if(temp->data<current->data)
{
current=current-> left;
}
else
{
current = current-> right;
}
}
if(temp->data< parent-> data)
{
parent->left = temp;
}
else
{
parent->right = temp;
}
parent=NULL;
current=NULL;
}
//printf("node inserted");
}
void inorder(struct node *t){
if(t==NULL)
    printf("no elements");
if(t->left)
    inorder(t->left);
printf("\n%d ",t->data);
if(t->right)
    inorder(t->right);
}
void main ()
{int i;
    while(1){
    for(i=1;i<=10;i++)
        insert();
        inorder(root);
    }
}
