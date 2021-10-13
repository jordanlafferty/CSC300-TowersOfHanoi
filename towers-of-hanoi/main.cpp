#include "theGame.hpp"
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    theGame* g1 = new theGame();
    g1->display();
    while(true)
    {
       g1-> move();
       //g1->display(); 
    }
    
    
    
}