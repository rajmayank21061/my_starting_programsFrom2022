#include <stdio.h>
#include <stdlib.h>

struct queue {
    int f;
    int r;
    int size;
    int *arr;
};

// Function to check if the queue is full
int isFull(struct queue *q) {
    if (q->r == q->size - 1) {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *q) {
    if (q->f == -1 || q->f > q->r) {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val) {
    if (isFull(q)) {
        printf("Queue is Full\n");
    } else {
        if (isEmpty(q)) {
            q->f = 0;
        }
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q){
    int a = -1;
    if( isEmpty(q)){
        printf("queue is empty");
    }
    else{
    q -> f++;
    a = q -> arr[q->f];
}
return a;
}
int main() {
    struct queue q;
    q.size = 9;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 23);
    enqueue(&q, 89);
    enqueue(&q, 98);
    printf("dequeue element %d \n",dequeue(&q));
    printf("dequeue element %d \n",dequeue(&q));
    printf("dequeue element %d \n",dequeue(&q));

    return 0;
}
