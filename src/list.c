#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void list_add(struct Node* head, struct Node* elem){

	struct Node* tmp = head;

	while(tmp->next != NULL){
		tmp = tmp->next;

	}
	tmp->next = elem;
	elem->prev = tmp;	


}
void list_remove(struct Node* head, int data){

	struct Node* tmp = head;

	if(head == null){
		return;
	}
	if(tmp->data == data){
		head = tmp->next;
		return;
	}
	while(tmp->next){
		if(data == tmp->data){
			tmp->prev_next = tmp->next;
			tmp = tmp->next;
			continue;
		}
		tmp = tmp->next;
			
}

