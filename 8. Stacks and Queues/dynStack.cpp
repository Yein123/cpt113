#include <iostream>
using namespace std;

class DynStack{
    private:
        struct StackNode{
            int value;
            StackNode *next;
        };
        StackNode *top;
    public:
        DynStack(){
            top = nullptr;
        }
        ~DynStack(){
            StackNode *nodePtr, *nextNode;
            nodePtr = top;
            while(nodePtr != nullptr){
                nextNode = nodePtr->next;
                delete nodePtr;
                nodePtr = nextNode;
            }
        }
        // Copy constructor
        DynStack(const DynStack &stack){
            StackNode *newNode, *last = nullptr;
            StackNode *nodePtr = stack.top;
            top = nullptr;
            while(nodePtr != nullptr){
                newNode = new StackNode;
                newNode->value = nodePtr->value;
                newNode->next = nullptr;
                if (last == nullptr){
                    top = newNode;
                    last = newNode;
                }
                else{
                    last->next = newNode;
                    last = newNode;
                }
                nodePtr = nodePtr->next;
            }
        }
        void push(int num){
            StackNode *newNode = new StackNode;
            newNode->value = num;
            if (isEmpty()){
                top = newNode;
                newNode->next = nullptr;
            }
            else{
                newNode->next = top;
                top = newNode;
            }
        }
        void pop(int &num){
            StackNode *temp;
            if (isEmpty()){
                cout<<"The stack is empty.\n";
            }
            else{
                num = top->value;
                temp = top->next;
                delete top;
                top = temp;
            }
        }
        void search(int num){
            bool found = false;
            int aux;
            DynStack temp;
            while(!isEmpty()){
                pop(aux);
                if(aux != num){
                    temp.push(aux);
                }
                else{
                    found = true;
                    cout<<"Item exists in the stack."<<endl;
                }
            }
            if(!found){
                cout<<"Item does not exist in the stack."<<endl;
            }
            while(temp.top){
                temp.pop(aux);
                push(aux);
            }
        }
        bool isEmpty(){
            if (!top){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    DynStack stack;
    DynStack stack2 = stack; // Copy constructor
    stack.push(3);
    stack.push(5);

    int num;
    stack.pop(num);
    cout<<num<<endl;
    return 0;
}