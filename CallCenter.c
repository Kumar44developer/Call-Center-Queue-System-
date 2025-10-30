#include <stdio.h>
#include <stdlib.h>
void enqueue(int *queue, int *rear, int *count, int size, int ticket);
void dequeue(int *queue, int *front, int *rear, int *count, int size);
void display(int *queue, int front, int count, int size);
