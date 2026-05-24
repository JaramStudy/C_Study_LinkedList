#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

int main() {
    Node *head = (Node*) malloc(sizeof(Node));
    head->next=NULL;//시작 노드를 가리키는 노드로, 데이터가 들어있지 않습니다.

	insert(head, 4);
	printf("Insert 4 done\n");
    print(head);
	insert(head, 1);
	printf("Insert 1 done\n");
    print(head);
	insert(head, 2);
	printf("Insert 2 done\n");
    print(head);
	insert(head, 8);
	printf("Insert 8 done\n");
	print(head);
	insert_at(head, 7, 2);
	printf("Insert 7 done at index 2\n");
	print(head);
	delete(head, 1);
	printf("Remove done at index 1\n");
	print(head);
    printf("Data list size is : %d\n", size(head));
	printf("Data at index 2: %d\n", index_at(head, 2)->data);
	printf("Data at last node: %d\n", end(head)->data);	
	return 0;
}