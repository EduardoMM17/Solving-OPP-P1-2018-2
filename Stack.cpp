#include <iostream>
#include "Stack.h"

int Point::position(int x, int y) {
    this->x = x;
    this->y =y;
    enum colors{Red, Yellow, BLue, Black};
}

Stack::Stack() {
    top = nullptr;
    size = 0;
}

void Stack::push(Point P1) {
    Node* newNode = new Node();
    newNode->pointOfNode = P1;
    newNode->next = top;
    top = newNode;
    size++;
    std::cout<<"\nA node has been correctly added to the top\n".
}

void Stack::pop() {
    Node* tempNode = top;
    top = top->next;
    delete tempNode;
    size--;
    std::cout<<"\nThe node of the top has been correctly eliminated\n";
}

void Stack::destroy() {
    Node* tempNode;
    while(top != nullptr){
        tempNode = top;
        top = top->next;
        delete tempNode;
        size --;
    }
    std::cout<<"\nAll nodes have being eliminated.\n";
}

Point Stack::Peek() {
    return top->pointOfNode;
}

int Stack::getSize() {
    return size;
}

bool Stack::isEmpty() {
    if(size >= 1){
        return false;
    }
    else{
        return true;
    }
}
