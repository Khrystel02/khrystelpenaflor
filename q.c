#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *next;
} node;

typedef struct queue{
    node *head;
    node *tail;
} queue;



void enqueue(int val, queue *q){
    node *ptr;
    ptr = (node *)malloc(sizeof node);
}


