// linkedList.h

typedef struct Node {
	struct Node *prev;
	struct Node *next;
	int data;
} Node;

Node *index_at(Node *head, int index);
Node *end(Node *head);
int size(Node *head);
void insert_at(Node *head, int data, int index);
void insert(Node *head, int data);
void delete(Node *head, int index);
void print(Node *head);
