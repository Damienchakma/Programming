#include<bits/stdc++.h>
using namespace std;


typedef struct node Node;

struct node {
    int data; // 4 bytes
    Node * next; // 8 bytes
}; // 16 bytes

Node* create_node (int item) {
    Node * newNode = (Node *)malloc(sizeof(Node));

    if(newNode == NULL) {
        cout << "Node creation failed!\n";
        return NULL;
    }

    newNode->data = item;
    newNode->next = NULL;

    return newNode;
}

Node * prepend (Node * head, int item) {
    Node * newNode = create_node(item);

    newNode->next = head;
    head = newNode;

    return head;
}

Node * append(Node * head, int item) {
    Node * newNode = create_node(item);
    if (head == NULL) {
        head = newNode;
        return head;
    }

    Node * current_node = head;
    while (current_node->next != NULL) {
        current_node = current_node -> next;
    }
    current_node->next = newNode;
    newNode->next = NULL;

    return head;
}

void insert(Node *node, int item) {
    Node * newNode = create_node(item);
    newNode -> next = node -> next;
    node -> next = newNode;
}

Node * remove_node(Node * node, Node * head) {
    Node * current_node = head;
    
    while(current_node != NULL) {
        if(current_node->next == node) {
            break;
        }
        current_node = current_node -> next;
    }

    if(current_node == NULL) {
        cout << "Node doesn't exist!\n";
        return head;
    } else {
        current_node -> next = node -> next;
        free(node);
        return head;
    }
}

void print_linked_list(Node * head) {
    Node *current_node = head;

    while(current_node != NULL) {
        cout << current_node->data << "\n";
        current_node = current_node -> next;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node * head;
    head = create_node(5);

    head = prepend(head, 7);
    head = prepend(head, 22);
    head = prepend(head, 321);
    head = append(head, 8);
    head = append(head, 2);
    head = append(head, 3);
    head = append(head, -12);
    head = prepend(head, 500);

    insert(head -> next -> next -> next, 100);
    cout << "Before: ";
    print_linked_list(head);
    head = remove_node(head -> next -> next, head);
    cout << "After: ";
    print_linked_list(head);
}