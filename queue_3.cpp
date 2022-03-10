#include "queue_3.h"
int Queue_3::math_operation()
{
    int size = Queue_Size();
    int* arr = new int[size];
    int i = 0;
    for (i = 0; i < size; i++) {
        int save = remove();
        arr[i] = save;
        this->insert(save);
    }
    double element_denominator = 0,result = 0, harmonic_number;
    
    for (i = 0; i < size; i++) {
        if (arr[i] != 0) {
            element_denominator += 1.0 / arr[i];
        }
    }
    harmonic_number = size / element_denominator;

    for (i = 0; i < size; i++) {
        if(arr[i] < harmonic_number){
            result = arr[i];
        }
    }

    delete[] arr;
    return result;
}

void Queue_3::insert(int data) {
    Queue::insert(data);
}

int Queue_3::remove() {
    return Queue::remove();
}

void Queue_3::printQueue() {
    Queue::printQueue();
}

Queue* Queue_3::copy() {
    return Queue::copy();
}

Queue* Queue_3::merge(Queue* first, Queue* second) {
    return Queue::merge(first, second);
}


