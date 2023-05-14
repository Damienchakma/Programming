#include<bits/stdc++.h>
using namespace std;

#define QUEUE_SIZE 10

struct Queue {
    int data[QUEUE_SIZE + 1];
    int head, tail;
};

void enqueue(struct Queue* q, int item) {
    if(((q->tail + 1) % (QUEUE_SIZE + 1) == q->head)) {
        cout << "Queue is Full. Sorry!\n";
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (QUEUE_SIZE + 1);
}

int dequeue(struct Queue* q) {
    if(q->head == q->tail) {
        cout << "Queue is empty\n";
        return -1;
    }

    int element = q->data[q->head];
    q->head = (q->head + 1) % (QUEUE_SIZE + 1);
    return element;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    struct Queue q;
    q.head = 0;
    q.tail = 0;

    enqueue(&q, 10);
    enqueue(&q, 4);
    enqueue(&q, 1);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);
    enqueue(&q, 9);

    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
    cout << dequeue(&q) << "\n";
}