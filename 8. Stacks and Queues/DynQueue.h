#ifndef DYN_QUE_H
#define DYN_QUE_H

// Dynqueue class template
template <class T>
class Dynque
{
private:
    struct QueueNode
    {
        T value;
        QueueNode *next;
    };

    QueueNode *front;
    QueueNode *rear;
    int numItems;

public:
    Dynque();
    ~Dynque();
    void enqueue(T);
    void dequeue(T &);
    bool isEmpty();
    bool isFull();
    void clear();
};

// Constructor
template <class T>
Dynque<T>::Dynque()
{
    front = nullptr;
    rear = nullptr;
    numItems = 0;
}

// Destructor
template <class T>
Dynque<T>::~Dynque()
{
    clear();
}

// Function enqueue inserts the value in num at the rear of the queue.
template <class T>
void Dynque<T>::enqueue(T num)
{
    QueueNode *newNode = nullptr;
    newNode = new QueueNode;
    newNode->value = num;
    newNode->next = nullptr;

    if (isEmpty())
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    numItems++;
}

// Function dequeue removes the value at the front of the queue, and copies it into num.
template <class T>
void Dynque<T>::dequeue(T &num)
{
    QueueNode *temp = nullptr;

    if (isEmpty())
        cout << "The queue is empty.\n";
    else
    {
        num = front->value;
        temp = front->next;
        delete front;
        front = temp;
        numItems--;
    }
}

// Function isEmpty returns true if the queue is empty, and false otherwise.
template <class T>
bool Dynque<T>::isEmpty()
{
    bool status = true;

    if (numItems)
    {
        status = false;
    }

    return status;
}

// Function clear dequeues all the elements in the queue.
template <class T>
void Dynque<T>::clear()
{
    T value; // Dummy variable for dequeue

    while (!isEmpty())
    {
        dequeue(value);
    }
}

#endif
