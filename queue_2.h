#pragma once
#include "queue.h"
class Queue_2 :
    protected Queue
{
public:
    void insert(int data);
    int remove();
    void printQueue();
    Queue* copy();
    static Queue* merge(Queue* first, Queue* second);
    int math_operation();
};
