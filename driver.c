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
	head->next->Username[0] = 'J';
	verify(head); // Should fail
	head->next->Username[0] = 'T'; //Fix

	// Test 6: 
	head->next->hash.hash0 = head->next->hash.hash0 + 1; // Modify hash	
	verify(head); // Should fail
	head->next->hash.hash0 = head->next->hash.hash0 - 1; //Fix

	verify(head); // Should pass

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