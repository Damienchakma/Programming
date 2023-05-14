#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node {
    Node * prev;
    int data;
    Node * next;
};

Node * create_node(int item, Node * prev, Node * next) {
    Node * new_node = (Node *) malloc(sizeof(Node));
    if(new_node == NULL) {
        cout << "Node creation failed!\n";
        return NULL;
    }

    new_node->data = item;
    new_node->next = next;
    new_node->prev = prev;

    return new_node;
}

Node * prepend(Node * head, int item) {
    Node * new_node = create_node(item, NULL, head);
    head->prev = new_node;
    head = new_node;
    return head;
}

Node * append(Node * head, int item) {
    Node * new_node = create_node(item, NULL, NULL);

    if (head == NULL) {
        return new_node;
    }

    Node * current_node = head;
    while (current_node->next != NULL) {
        current_node = current_node->next;
    }

    current_node->next = new_node;
    new_node->prev = current_node;

    return head;
}

void print_doubly_linked_list(Node * head) {
    Node * current_node = head;
    while(current_node != NULL) {
        cout << current_node -> data << " ";
        current_node = current_node->next;
    }
    cout << "\n";
}

Node * remove_node(Node * head, Node * node) {
    if(node == head) {
        head = head->next;
        head->prev = NULL;
        free(node);
        return head;
    } else if (node -> next == NULL) {
        node->prev->next = NULL;
        free(node);
        return head;
    }

    Node * previous_node = node->prev;
    Node * next_node = node->next;

    previous_node->next = next_node;
    next_node->prev = previous_node;
    free(node);

    return head;
}

int count(Node * head) {
    int cnt = 0;
    Node * current_node = head;
    while(current_node != NULL) {
        current_node = current_node->next;
        cnt++;
    }

    return cnt;
}

bool search(Node * head, int item) {
    Node * current_node = head; 

    while(current_node != NULL) {
        if(current_node->data == item) {
            return true;
        }
        current_node = current_node->next;
    }

    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node * head = create_node(2, NULL, NULL);
    head = prepend(head, 9);
    head = append(head, 100);
    print_doubly_linked_list(head);

    cout << "Element count: " << count(head) << "\n";

    if(search(head, 9)) {
        cout << "Element found!\n";
    } else {
        cout << "Not found!\n";
    }

    head = remove_node(head, head->next->next);
    cout << "Element count: " << count(head) << "\n";

    print_doubly_linked_list(head);
}