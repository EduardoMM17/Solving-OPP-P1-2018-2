#ifndef SOLVING_OPP_P1_2018_2_STACK_H
#define SOLVING_OPP_P1_2018_2_STACK_H


struct Point{
    int x, y;
    int position(int x,int y);

};

struct Node{
    Point pointOfNode;
    Node* next = nullptr;
};

class Stack {
private:
    Node* top;
    int size;
public:
    Stack();
    void destroy();
    void push(Point);
    void pop();
    Point Peek();
    int getSize();
    bool isEmpty();
};




#endif //SOLVING_OPP_P1_2018_2_STACK_H
