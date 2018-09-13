//march 27th 
//

#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

struct node {
	int val;
 	struct node * next;
};//node 

int main() {
	node* head = NULL;
	head = (node *)malloc(sizeof(node)); 
	second = (node *)malloc(sizeof(node));
	third = (node *)malloc(sizeof(node));
	head->val = 1; // setup first node
	head->next = second; // note: pointer assignment rule
	second->val = 2; // setup second node
	second->next = third;
	third->val = 3; // setup third link
	third->next = NULL;
	
	node* current;
	current = head; 
	do{
		cout << current-> val <<endl;
		current = current->next;
	}while (current !=NULL); 

	
	// more complicated 
	node* current_node = NULL;
	node* head = NULL;
	node* tail = NULL;
		
	for (int i = 0; i <3; i++){
		current_node = (node*) malloc(sizeof(node));
		current_node->val = i;
		current_node->next = NULL;
		
		if (head == NULL){
			head = current_node;
		}

		if(tail != NULL){
			tail->next = current_node;
		}// if tail is not null

		tail = current_node;
	}// for loop 
}//main 



