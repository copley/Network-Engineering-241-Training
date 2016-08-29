#define Node_Size sizeof(Node)

typedef struct node
{ 
	char data;
	struct node *next;
} Node;
typedef char Data;
typedef Node *ptrNode;
typedef struct queue
{ 
	int cnt; /* counts the number of nodes */
	ptrNode front; /* points to the front node */
	ptrNode rear; /* points to the rear node */
} Queue;
typedef Queue *ptrQueue;

void enqueue(Data, ptrQueue);
Data dequeue(ptrQueue);

/***********************************/

void enqueue(Data d, ptrQueue q) {
	ptrNode pn; /* to create a new node */
	pn = malloc(Node_Size);
	pn->data = d;
	pn->next = NULL; /* the new node points to NULL */

	q->rear->next = pn; /* old rear to new rear node*/
	q->rear = pn; /* update rear ptr of new rear node */

	q->cnt++;
}

Data dequeue(ptrQueue q)
{
	Data d; /* to be used to store the data */
	ptrNode tmp; /* to be used for handling the node*/
				/* that is going to be deleted */
	tmp = q->front; /* tmp has the address of the node */
					/* that is going to be deleted */
	d = tmp->data;
	q->front = tmp->next; /*updating the new front node*/
	q->cnt--;
	free(tmp); /* do not forget this */
	return d;
}