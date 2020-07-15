#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root = NULL;
void main(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(root == NULL){
		root = temp;
	}
	else{
		struct node* p;
		p=root;
		while(p->link != NULL){
			p = p->link;
		}
		p->link = temp;
	}
	struct node* p;
	p = root;
	while(p!= NULL){
		printf("%d ",p->data);
		p = p->link;
	}
}