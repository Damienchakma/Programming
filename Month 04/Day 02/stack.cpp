#include<bits/stdc++.h>
using namespace std;

#define STACK_MAX 100

struct Stack
{
    int top;
    int arr[STACK_MAX];
};

void push(struct Stack *s, int item) { // O(1)
    if(s->top == STACK_MAX) {
        cout << "Stack is full";
        return;
    } else {
        s->arr[s->top] = item;
        s->top++;
    }
}

void pop(struct Stack *s) { // O(1)
    if(s->top == 0) {
        cout << "Stack is empty";
        return;
    }
    s->top--;
}

int _top(struct Stack *s) { // O(1)
    if(s->top == 0) {
        cout << "Stack is empty";
        return -1;
    } else {
        return s->arr[s->top - 1];
    }
}

bool isEmpty(struct Stack *s) { // O(1)
    if(s->top == 0) {
        return true;
    } else {
        return false;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    struct Stack s;
    s.top = 0;

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);

    cout << _top(&s) << "\n";
    if(isEmpty(&s)) {
        cout << "Empty\n";
    } else {
        cout << "Not Empty\n";
    }

    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);
    pop(&s);

    if(isEmpty(&s)) {
        cout << "Empty\n";
    } else {
        cout << "Not Empty\n";
    }

    cout << _top(&s) << "\n";
}