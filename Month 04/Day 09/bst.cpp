#include<bits/stdc++.h>
using namespace std;

typedef struct node Node;

struct node {
    int data;
    Node * left_child;
    Node * right_child;
    Node * parent;
};

Node * create_node(int item) {
    Node * new_node = (Node *)malloc(sizeof(Node));

    if(new_node == NULL) {
        cout << "Node creation failed!\n";
        exit(1);
    }

    new_node->data = item;
    new_node->left_child = NULL;
    new_node->right_child = NULL;
    new_node->parent = NULL;

    return new_node;
}

void add_left_child (Node * node, Node * child) {
    node -> left_child = child;
    if (child != NULL) {
        child->parent = node;
    }
}

void add_right_child (Node * node, Node * child) {
    node -> right_child = child;
    if (child != NULL) {
        child->parent = node;
    }
}

Node * bst_insert(Node * root, Node * node) {
    if (root == NULL) {
        return node;
    }

    Node * parent_node, * current_node;

    parent_node = NULL;
    current_node = root;

    while (current_node != NULL) {
        parent_node = current_node;

        if(current_node->data < node -> data) {
            current_node = current_node->right_child;
        } else {
            current_node = current_node->left_child;
        }
    }

    if (parent_node->data < node->data) {
        add_right_child(parent_node, node);
    } else {
        add_left_child(parent_node, node);
    }

    return root;
}

Node * create_bst() {
    Node * root = create_node(10);

    int arr[] = {5, 17, 3, 7, 12, 19, 1, 4};

    for (int i = 0; i < 8; i++) {
        Node * node = create_node(arr[i]);
        root = bst_insert(root, node);
    }

    return root;
}

void pre_order (Node * node) {
    cout << node -> data << " ";

    if(node -> left_child != NULL) {
        pre_order(node ->left_child);
    }

    if (node -> right_child != NULL) {
        pre_order(node -> right_child);
    }
}

void post_order (Node * node) {
    if(node -> left_child != NULL) {
        post_order(node ->left_child);
    }

    if (node -> right_child != NULL) {
        post_order(node -> right_child);
    }

    cout << node -> data << " ";
}

void in_order (Node * node) {
    if(node -> left_child != NULL) {
        in_order(node ->left_child);
    }

    cout << node -> data << " ";

    if (node -> right_child != NULL) {
        in_order(node -> right_child);
    }
}

bool bst_search(Node * root, int item) {
    Node * current_node = root;
    while (current_node != NULL) {
        if (current_node -> data == item) {
            return true;
        }

        if(current_node->data < item) {
            current_node = current_node->right_child;
        } else {
            current_node = current_node->left_child;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    Node * root = create_bst();
    
    cout << "Pre-order: ";
    pre_order(root);
    cout << "\n";

    cout << "Post-order: ";
    post_order(root);
    cout << "\n";

    cout << "In-order: ";
    in_order(root);
    cout << "\n";

    if(bst_search(root, 1222)) {
        cout << "Found!";
    } else {
        cout << "Not found!";
    }
}