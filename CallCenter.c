#include <stdio.h>
#include <stdlib.h>
void enqueue(int *queue, int *rear, int *count, int size, int ticket);
void dequeue(int *queue, int *front, int *rear, int *count, int size);
void display(int *queue, int front, int count, int size);
int main() {
int size;
printf("Enter size of queue ");
scanf("%d", &size);
int *queue = (int *)malloc(size * sizeof(int));
if (queue == NULL) {
printf("Memory allocation failed!\n");
return 1;
}















