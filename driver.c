#include <stdio.h>
#include <string.h>
#include "user.h"


int main(void) {
	struct User * head=NULL;

	//Tests 1-3: name, time, is hash included?

	head = add(head, "Eli");
	head = add(head, "Tim");
	head = add(head, "Nick");

	printLog(head);
	verify(head); // Baseline
	
	//Tests 4 and 5: Link connection with previous node, and moddified entry
	strcpy(head->next->Username, "Timothy");
	verify(head); // Should fail



	/* 
	head = add(head, "rob");
	head = add(head, "hanif");
	head = add(head, "gahyun");
	head = add(head, "matt");
	head = add(head, "sumita");
	head = add(head, "james");
	verify(head);
	*/
}