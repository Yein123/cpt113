//sample asnwer
void DynIntStack::search(int searchItem)
{
    bool found = false;
    int aux;
    DynIntStack temp;
    
    // Iterate through the stack until it's empty
    while(!isEmpty())
    {
        pop(aux);
        
        // Check if the current item is the search item
        if(aux != searchItem)
        {
            temp.push(aux);
        }
        else
        {
            found = true;
            cout << "Item exists in the stack" << endl;
        }
    }
    
    // If the search item was not found
    if(!found)
        cout << "Item does not exist in the stack" << endl;
    
    // Restore the original stack by pushing items from the temporary stack
    while(temp.top)
    {
        temp.pop(aux);
        push(aux);
    }
}

// Function to create a copy of the stack
myStack myStack::stackCopy(const myStack stack){
    int temp ;
    myStack tempStack1, tempStack2;
    
    // Iterate through the stack and push items to tempStack1
    while (!stack.isEmptyStack()) {
        stack.pop(temp);
        tempStack1.push(temp);
    }
    
    // Iterate through tempStack1 and push items to tempStack2
    while (!tempStack1.isEmptyStack()) {
        tempStack1.pop(temp);
        tempStack2.push(temp);
    }
    
    // Return the copy of the stack
    return tempStack2;
}
