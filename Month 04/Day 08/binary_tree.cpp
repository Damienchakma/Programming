#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node * left_child;
    Node * right_child;
};

Node * create_node (int item) {
    Node * new_node = (Node *)malloc(sizeof(Node));
    if (new_node == NULL) {
        cout << "Node creation failed!\n";
        exit(1);
    }

    new_node->data = item;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}

Node * add_left_child(Node * node, Node * child) {
    node->left_child = child;
    return node;
}

Node * add_right_child(Node * node, Node * child) {
    node->right_child = child;
    return node;
}

Node * create_tree () {
    Node * two = create_node(2);
    Node * three = create_node(3);
    Node * four = create_node(4);

    add_left_child(two, three);
    add_right_child(two, four);

    Node * seven = create_node(7);
    Node * six = create_node(6);
    Node * eight = create_node(8);

    add_left_child(three, seven);
    add_right_child(three, six);
    add_left_child(four, eight);

    Node * minus_three = create_node(-3);
    Node * minus_four = create_node(-4);
    Node * minus_two = create_node(-2);
    Node * five = create_node(5);

    add_left_child(seven, minus_three);
    add_right_child(seven, minus_four);
    add_left_child(eight, minus_two);
    add_right_child(eight, five);

    Node * ten = create_node(10);

    add_right_child(minus_two, ten);

    return two;
}

void pre_order (Node *node) {
    cout << node -> data << " ";

    if (node -> left_child != NULL) {
        pre_order(node->left_child);
    }

    if (node -> right_child != NULL) {
        pre_order(node->right_child);
    }
}

void post_order (Node *node) {
    if (node -> left_child != NULL) {
        post_order(node -> left_child);
    }

    if (node -> right_child != NULL) {
        post_order(node -> right_child);
    }

    cout << node -> data << " ";
}

void in_order (Node *node) {
    if (node -> left_child != NULL) {
        in_order(node -> left_child);
    }

    cout << node -> data << " ";

    if (node -> right_child != NULL) {
        in_order(node -> right_child);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node * root = create_tree();

    cout << "Pre-order traversal: ";
    pre_order(root);
    cout << "\n";

    cout << "Post-order traversal: ";
    post_order(root);
    cout << "\n";

    cout << "In-order traversal: ";
    in_order(root);
    cout << "\n";
}