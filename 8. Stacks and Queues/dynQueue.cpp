#include <iostream>
using namespace std;

class DynQueue{
    private:
        struct QueueNode{
            double value;
            QueueNode *next;
        };
        QueueNode *front;
        QueueNode *rear;
        int numItems;
    public:
        DynQueue(){
            front = nullptr;
            rear = nullptr;
            numItems = 0;
        }
        ~DynQueue(){
            clear();
        }
        void enqueue(double num){
            QueueNode *newNode = new QueueNode;
            newNode->value = num;
            newNode->next = nullptr;
            if (isEmpty()){
                front = newNode;
                rear = newNode;
            }
            else{
                rear->next = newNode;
                rear = newNode;
            }
            numItems++;
        }
        void dequeue(double &num){
            QueueNode *temp;
            if (isEmpty()){
                cout<<"The queue is empty.\n";
            }
            else{
                num = front->value;
                temp = front;
                front = front->next;
                delete temp;
                numItems--;
            }
        }
        bool isEmpty(){
            if (numItems > 0){
                return false;
            }
            else{
                return true;
            }
        }
        void clear(){
            double value;
            while (!isEmpty()){
                dequeue(value);
            }
        }
};

int main()
{
    // Constant for the number of items
    const int NUM_ITEMS = 5;
    // Create a dynamic queue object.
    DynQueue queue;
    cout << "Enqueuing " << NUM_ITEMS << " items...\n";
    // enqueue some items.
    for (int x = 0; x < NUM_ITEMS; x++)
        queue.enqueue(x * 3.14);
    // Deqeue and retrieve all items in the queue
    cout << "The values in the queue were:\n";
    while (!queue.isEmpty())
    {
        double value;
        queue.dequeue(value);
        cout << value << endl;
    }
    return 0;
}