  //Insertion of Data in node
#include<stdio.h>
#include<stdlib.h>              // necessary for NULL

struct node{
	int data;
	struct node* next;
};
 void linklisttraversal(struct node* ptr)
 {
 	while(ptr!=NULL)
 	{
 		printf("Element: %d\n",ptr->data);
		ptr=ptr->next;
	 }
 }

int main()
{
	struct node* head;
	struct node* second;
	struct node* third;
	
	//Allocation of dynamic memory which is stored in heap
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));	
	third=(struct node*)malloc(sizeof(struct node));
	
	//link 1st & 2nd node
	head->data=7;
	head->next=second;
	
    //link 2nd & 3rd node
    second->data=8;
    second->next=third;
    
    //link 2nd & 3rd node
    third->data=10;
    third->next=NULL;
    
    linklisttraversal(head);
    return 0;
}
