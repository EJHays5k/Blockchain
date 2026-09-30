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