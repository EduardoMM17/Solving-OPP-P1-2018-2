#ifndef SOLVING_OPP_P1_2018_2_STACK_H
#define SOLVING_OPP_P1_2018_2_STACK_H

enum Colors{Red, Yellow, BLue, Black};

struct Position{
    int x, y;
    void setX(int);
    void setY(int);
};

struct Point{
    Position pos;
    Colors color;
    void setPos(int,int);
    void setColor(int);

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
    void addAccordToColor(Stack*);
};




#endif //SOLVING_OPP_P1_2018_2_STACK_H
