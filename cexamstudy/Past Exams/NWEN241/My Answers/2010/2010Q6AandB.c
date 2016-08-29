#define Node_Size sizeof(Node)

typedef struct node
{ 
	char data;
	struct node *next;
} Node;

typedef Node *ptrNode;

ptrNode createlisti(char*); /* iteration */
ptrNode createlistr(char*); /* recursion */
/*************************************************************/

ptrNode createlisti(char *s) /* create a list by iteration */
{ 
	ptrNode head = NULL, tail; /* make head and tail, head */
	int i; 						/* is going to be returned */
	if (s[0]!='\0') {
		head = malloc(Node_Size); /* create the first node */
		tail = head;
		tail->data = s[0];
		for (i=1; s[i]!='\0'; i++) { /* create the other nodes */
			tail->next = malloc(Node_Size); /* this is the pointer(next) */
			tail = tail->next; 				/* in the previous node */
			tail->data = s[i]; /* this is the data in the current node */
		}
		tail->next = NULL; /* the pointer in the last node*/
	}
	return head; /* return head so that we know where the list is */
}

ptrNode createlistr(char *s) /* list by recursion */
{ 
	if (s[0] == '\0') /* base case */
		return NULL;
	else { /* general recursive case */
		ptrNode head = malloc(Node_Size);
		/* create a node */
		head->data = s[0];
		/* assign the 1st character to the node */
		head->next = createlistr(s+1);
		/* point to next node */
		/* shift the string by one character */
		/* until s[0] == ‘\0’ */
		return head; /* return head so that */
	} 	/* we know where the list is */
} 		/* for the other returns...??? */