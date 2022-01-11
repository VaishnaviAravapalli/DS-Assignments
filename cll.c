#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
   

struct node{  
    char data;  
    struct node *next;  
};  
   
  
struct node *head = NULL;  
struct node *tail = NULL;  
   
void add(char data){  
    //Create new node  
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    //Checks if the list is empty.  
    if(head == NULL){  
        //If list is empty, both head and tail would point to new node.  
        head = newNode;  
        tail = newNode;  
        newNode->next = head;  
    }else {  
        //tail will point to new node.  
        tail->next = newNode;  
        //New node will become new tail.  
        tail = newNode;  
        //Since, it is circular linked list tail will point to head.  
        tail->next = head;  
    }  
}  
   

void display(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("Nodes of the circular linked list: \n");  
         do{  
             //Prints each node by incrementing pointer.  
            printf("%c ", current->data);  
            current = current->next;  
        }while(current != head);  
        printf("\n");  
    }  
}  
      
int main()  
{  
    //Adds data to the list  
   add('a');  
   add('e');  
   add('i');  
   add('o');  
   add('u');
   //Displays all the nodes present in the list  
   display();  
     
   return 0; } 
