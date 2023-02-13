
#ifndef QUETYPE_H
#define QUETYPE_H

class FullQueue {
};

class EmptyQueue {
};

template<class T>
class Queue {
public:

    Queue();
    // Default constructors

    explicit Queue(int max);
    // Parameterized class constructor.

    ~Queue();
    // Class destructor.

    void MakeEmpty();
    // Function: Initializes the queue to an empty state.
    // Post: Queue is empty.

    bool IsEmpty() const;
    // Function: Determines whether the queue is empty.
    // Post: Function value = (queue is empty)

    bool IsFull() const;
    // Function: Determines whether the queue is full.
    // Post: Function value = (queue is full)

    void Enqueue(T newItem);
    // Function: Adds newItem to the rear of the queue.
    // Post: If (queue is full) FullQueue exception is thrown
    //       else newItem is at rear of queue.

    T Dequeue();
    // Function: Removes front item from the queue and returns it in item.
    // Post: If (queue is empty) EmptyQueue exception is thrown
    //       and item is undefined
    //       else front element has been removed from queue and
    //       returns a copy of removed element.

private:

    int front;
    int rear;
    T *items;
    int maxQue;
    int numItems;
};

#include "Queue.cpp"

#endif