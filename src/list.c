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
void list_remove(struct Node* head, struct Node* del){


	del->prev->next = del->next;
	del->next->prev = del->prev;

}

