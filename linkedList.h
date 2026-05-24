// linkedList.h

typedef struct {
	struct Node *prev;
	struct Node *next;
	int data;
} Node;

Node *index_at(Node *head, int index);
Node *end(Node *head);
int size(Node *head);
int insert_at(Node *head, int data, int index);
int insert(Node *head, int data);
int delete(Node *head, int index);
int print(Node *head);
