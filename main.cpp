//
//  main.cpp
//  laboratory work
//
//  Created by Андрей Осадченко on 10.03.2022.
//

#include <iostream>
#include "queue_1.h"
#include "queue_2.h"
#include "queue_3.h"
using namespace std;

int main() {
    Queue_3 Myqueue; // create queue
    // interface
    int n = 1;

    cout<<" 1: Add value\n 2: Delete value\n 3: Print queue\n 4: math operations\n 5: create copy\n 6: merge\n 7: exit"<<endl;
    while(n != 0){
        cin >> n;
        if(n == 1){
            // add value in queue
            int value;
            cout<<"Input value: ";
            cin >> value;
            Myqueue.insert(value);
        }else if (n == 2){
            // delete value in queue
            Myqueue.remove();
            
        }else if (n == 3){
            // print queue
            Myqueue.printQueue();
        }else if (n == 4){
            // count
            cout<<Myqueue.math_operation()<<endl;
        }else if (n == 5){
            cout<<"copy created\n";
            Myqueue.copy();
        }else if (n == 6){
            Queue *copyMyqueue = Myqueue.copy();
            
            Queue *copyMyqueue_1 = Myqueue.copy();
            
            Myqueue.merge(copyMyqueue, copyMyqueue_1);
            
        }else if (n == 7){
            //close program
            return 0;
        }
    }
   
    return 0;
}
