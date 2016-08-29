/*Queue - Linked List implementation*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 5
struct Node {
	int data;
	struct Node* next;
};
// Two glboal variables to store address of front and rear nodes. 
struct Node* front = NULL;
struct Node* rear = NULL;
 
// To Enqueue an integer
void Enqueue(int x) {
	struct Node* temp = struct Node*)malloc(sizeof(struct Node));
	temp->data =x; 
	temp->next = NULL;
	if(front == NULL && rear == NULL){
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}
 
// To Dequeue an integer.
void Dequeue() {
	struct Node* temp = front;
	if(front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	free(temp);
}
 
int Front() {
	if(front == NULL) {
		printf("Queue is empty\n");
		return 0;
	}
	return front->data;
}
 
void Print() {
	struct Node* temp = front;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
 
int main(){
	/* Drive code to test the implementation. */
	// Printing elements in Queue after each Enqueue or Dequeue 
	int i, j;
	char f1[] = "pear5666666666666666666666666666";
	char f2[] = "apple", f3[] = "orange";
	char v1[6] = "tomato";
	int count = 90;
	for (int i = 0; i < count; ++i)
	{
		printf("%c\n", f1[i]);
	}

	char *ptr;
	ptr = f1;
	printf("%s\n", ptr);
	printf("\n");
	printf(strcpy(f1,f3));
	printf("\n");


	char str1[]="Sample string";
  	char str2[40];
  	char str3[40];
  	strcpy (str2,str1);
  	strcpy (str3,"copy successful");
  	printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
	for(i = 0 ; i < SIZE ; i++){
		printf("%d=%c\n",i, v1[i]);
		printf("%d=%c\n",i, f1[i]);
		printf("%d=%c\n",i, f2[i]);
	}


	Enqueue(2); Print(); 
	Enqueue(4); Print();
	Enqueue(6); Print();
	Dequeue();  Print();
	Enqueue(8); Print();






}