#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
		int data;
		struct node *link;;
}Sll;

int main()
{
		Sll *head = NULL;
		Sll *second_node = NULL;
		Sll *third_node = NULL;

		head = malloc(sizeof(Sll));
		second_node = malloc(sizeof(Sll));
		third_node = malloc(sizeof(Sll));

	
		head->data = 100;
		head->link = second_node;

		
		second_node->data = 200;
	    second_node->link = third_node;

		
		third_node->data = 300;
	    third_node->link = NULL;	

		
		if(head == NULL)
		printf("LIST_IS_EMPTY\n");
		Sll *temp = head;
		for(int i=0;temp != NULL;i++)
		{
				printf("node[%d] = %d\n", i, temp->data);
				temp = temp->link;
		}
}
		


