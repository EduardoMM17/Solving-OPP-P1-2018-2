#include "Functions.h"
#include <iostream>
#include <stdlib.h>

void addAllTheNodes(Stack*& S1, int numOfNodes){
    for(int i = 0; i < numOfNodes; i++){
        Point P;
        P.setPos(rand()%600,rand()%600);
        P.setColor(Colors(rand()%4));
        S1->push(P);
        switch(P.color){
            case 0: std::cout<<"\nA node with the color red, posX of " << P.pos.x << " and posY of " << P.pos.y << " has been added to the list. \n";break;
            case 1: std::cout<<"\nA node with the color yellow, posX of " << P.pos.x << " and posY of " << P.pos.y << " has been added to the list. \n";break;
            case 2: std::cout<<"\nA node with the color blue, posX of " << P.pos.x << " and posY of " << P.pos.y << " has been added to the list. \n";break;
            case 3: std::cout<<"\nA node with the color black, posX of " << P.pos.x << " and posY of " << P.pos.y << " has been added to the list. \n";break;
        }
    }
}
