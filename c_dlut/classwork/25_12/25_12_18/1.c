#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
int data;
struct Node*next;
}Node;

Node*create(){
Node*head=NULL,*tail=NULL,*p;
int x;
while(1){
scanf("%d",&x);
if(x==-1)break;
p=(Node*)malloc(sizeof(Node));
p->data=x;
p->next=NULL;
if(head==NULL){
head=p;
tail=p;
}
else{
tail->next=p;
tail=p;
}
}
return head;
}

int main(){
Node*head;
Node*p;
int cnt=0;
head=create();
p=head;
while(p){
printf("%d",p->data);
if(p->next)printf(" -> ");
cnt++;
p=p->next;
}
printf("\n");
printf("节点总数: %d\n",cnt);
return 0;
}
