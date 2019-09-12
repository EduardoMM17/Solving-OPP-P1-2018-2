#include <iostream>
#include <cassert>
#include "Stack.h"
#include "Functions.h"
#include <ctime>


int main() {
    srand(time(NULL));
    int numOfNodes;
    std::cout<<"Enter the number of nodes you want to put into the list:\n"; std::cin>>numOfNodes;
    auto* S = new Stack();
    assert(S->isEmpty()==true);
    addAllTheNodes(S,numOfNodes);
    assert(S->isEmpty()==false);
    auto* Red = new Stack();
    auto* Blue = new Stack();
    auto* Black = new Stack();
    auto* Yellow = new Stack;
    Red->addAccordToColor(S);
    Yellow->addAccordToColor(S);
    Blue->addAccordToColor(S);
    Black->addAccordToColor(S);

    return 0;
}