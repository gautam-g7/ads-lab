#include <stdio.h>
#define Size 5
int main();
int queue[Size];
int front = -1;
int rear = -1;

void enqueue(int ele) {
    if (rear == Size - 1) {
        printf("Queue is full\n");
    } 
    else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = ele;
    } 
    else {
        rear++;
        queue[rear] = ele;
    }
}
