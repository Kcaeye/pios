#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void list_add(struct Node* new_elem, int elem_data, struct Node** head_ptr_addr){

	/*if nothing is in the list*/
	if (*head_ptr_addr == NULL){
		new_elem = *head_ptr_addr;
	}





}

/*must use &head or something similar for first param*/
void list_remove(struct Node** head_ptr_addr, struct Node* elem)
{
	if(*head_ptr_addr == NULL)
		return;

	/*if elem is the head*/
	if (*head_ptr_addr == elem)
		*head_ptr_addr = elem->next;

	/*if elem is has a folowing node*/
	if (elem->next != NULL)
		elem->next->prev = elem->prev;

	/*if elem has a prev node connected as well*/
	if (elem->prev != NULL)
		elem->prev->next = elem->next;

	free(elem);
}
