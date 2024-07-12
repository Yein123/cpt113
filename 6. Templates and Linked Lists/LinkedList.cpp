#include <iostream>
using namespace std;

class LinkedList{
    private:
        struct Node{
            int value;
            Node *next;
        };
        Node *head;
    public:
        LinkedList(){
            head = nullptr;
            head->value = 0;
        }
        void appendNode(int num){
            Node *nodePtr;
            Node *newNode = new Node;
            newNode->value = num;
            newNode->next = nullptr;
            if (!head){
                head = newNode;
            }
            else{
                nodePtr = head;
                while (nodePtr->next)
                {
                    nodePtr = nodePtr->next;
                }
                nodePtr->next = newNode;
            }
        }

        void insertNode(int num){
            Node *nodePtr;
            Node *previousNode = nullptr;
            Node *newNode = new Node;
            newNode->value = num;
            newNode->next = nullptr;
            if(!head){
                head = newNode;
            }
            else{
                nodePtr = head;
                while(nodePtr != nullptr && nodePtr->value < num){
                    previousNode = nodePtr;
                    nodePtr = nodePtr->next;
                }
                //if the new node is to be the 1st in the list
                if(previousNode == nullptr){
                    head = newNode;
                    newNode->next = nodePtr;
                }
                else{
                    previousNode->next = newNode;
                    newNode->next = nodePtr;
                }
            }
        }

        void displayList(){
            Node *nodePtr;
            nodePtr = head;
            while(nodePtr){
                cout<<nodePtr->value<<endl;
                nodePtr = nodePtr->next;
            }
        }

        void deleteNode(int num){
            Node *nodePtr;
            Node *previousNode;
            if(!head){
                return;
            }
            if(head->value == num){
                nodePtr = head->next;
                delete head;
                head = nodePtr;
            }
            else{
                nodePtr = head;
                while(nodePtr != nullptr && nodePtr->value != num){
                    previousNode = nodePtr;
                    nodePtr = nodePtr->next;
                }
                if(nodePtr){
                    previousNode->next = nodePtr->next;
                    delete nodePtr;
                }
            }
        }

        void reverse()
        {
            Node *newHead = nullptr,
                *newNode,
                *nodePtr,
                *tempPtr;
            // Traverse the list, building a copy of it in reverse order.
            nodePtr = head;
            while (nodePtr)
            {
                // Allocate a new node & store the value of the current list
                // node in it.
                newNode = new Node;
                newNode->value = nodePtr->value;
                newNode->next = nullptr;
                // Shift the existing nodes in the new list down one,
                // inserting the new node at the top.
                if (newHead != nullptr)
                {
                    tempPtr = newHead;
                    newHead = newNode;
                    newNode->next = tempPtr;
                }
                else
                {
                    newHead = newNode;
                }
                // Go to the next node in the list.
                nodePtr = nodePtr->next;
            }
            // Destroy the existing list.
            destroy();
            // Make head point to the new list.
            head = newHead;
        }


        void destroy()
        {
            Node *nodePtr, *nextNode = nullptr;
            nodePtr = head;
            while (nodePtr != nullptr)
            {
                nextNode = nodePtr->next;
                delete nodePtr;
                nodePtr = nextNode;
            }
            head = nullptr;
        }
        //**************************************************
        // Destructor *
        // This function deletes every node in the list. *
        //**************************************************
        ~LinkedList()
        {
        destroy();
        }

        //*********************************************
        // LinkedList::insert *
        // Insert item at given position *
        //*********************************************
        void insert(int value, int pos)
        {
            // Allocate a new node & store the value of the current list node in
            // it.
            Node *newNode = new Node;
            newNode->value = value;
            newNode->next = nullptr;
            if (head == nullptr)
            {
                head = newNode;
                return;
            }

            if (pos == 0)
            {
                newNode->next = head;
                head = newNode;
                return;
            }
            Node *nodePtr = head; // Walk through nodes
            int numberToSkip = 1; //
            while (numberToSkip <= pos)
            {
                // At end or have skipped enough
                if (nodePtr->next == nullptr || numberToSkip == pos)
                {
                    Node *tempPtr = nodePtr->next;
                    nodePtr->next = newNode;
                    newNode->next = tempPtr;
                    return;
                }
                // Not at end and have not skipped enough So skip another one
                nodePtr = nodePtr->next;
                numberToSkip++;
            }
        }

};