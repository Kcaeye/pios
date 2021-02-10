#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void list_add(struct Node* head, struct Node* elem){

	struct Node* tmp = head;

	while(tmp->next != Null){
		tmp = tmp->next;

	}
	tmp->next = elem;
	elem->prev = tmp;	


}
void list_remove(struct Node* head, struct Node* del){


	del->prev->next = del->next;
	del->next->prev = del->prev;

}

/*must use &head or something similar for first param*/
void list_remove(struct Node** head_ptr_addr, struct Node* elem)
{
	if(*head_ptr_addr == NULL)
		return;

	
	if (*head_ptr_addr == elem)
		*head_ptr_addr = elem->next;

	/*if elem is has a folowing node*/
	if (elem->next != NULL)
		elem->next->prev = elem->prev;

	/*if elem has a prev node connected as well*/
	if (elem->prev != NULL)
		elem->prev->next = elem->next;

/*	free(elem);*/

	elem->next = NULL;
	elem->prev = NULL;
}

