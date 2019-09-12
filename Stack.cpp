#include <iostream>
#include "Stack.h"

void Position::setX(int x) {
    this->x = x;
}

void Position::setY(int y) {
    this->y = y;
}

void Point::setPos(int x, int y) {
    pos.setX(x);
    pos.setY(y);
}

void Point::setColor(int Color) {
    this->color = Colors(Color);
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

void Stack::addAccordToColor(Stack* S1) {
    Node* aux = S1->top;
    while(aux!= nullptr){
        if(aux->pointOfNode.color == 0){
            std::cout<<"\nAdding colors to the stack of color red.\n";
            Node* newNode = new Node();
            newNode->pointOfNode = S1->top->pointOfNode;
            newNode->next = top;
            top = newNode;
        }
        else if(aux->pointOfNode.color == 1){
            std::cout<<"\nAdding colors to the stack of color yellow.\n";
            Node* newNode = new Node();
            newNode->pointOfNode = S1->top->pointOfNode;
            newNode->next = top;
            top = newNode;
        }
        else if(aux->pointOfNode.color == 2){
            std::cout<<"\nAdding colors to the stack of color blue.\n";
            Node* newNode = new Node();
            newNode->pointOfNode = S1->top->pointOfNode;
            newNode->next = top;
            top = newNode;
        }
        else if(aux->pointOfNode.color == 3){
            std::cout<<"\nAdding colors to the stack of color black.\n";
            Node* newNode = new Node();
            newNode->pointOfNode = S1->top->pointOfNode;
            newNode->next = top;
            top = newNode;
        }
        aux = aux->next;
    }
}


