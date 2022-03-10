#include "queue_1.h"
int Queue_1::math_operation()
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

