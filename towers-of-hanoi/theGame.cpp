#include "theGame.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

theGame::theGame()
{
    this->theTowers[0] = new Tower();
    this->theTowers[1] = new Tower();
    this->theTowers[2] = new Tower();
    
    this->theTowers[0]->push(new Disk(3));
    this->theTowers[0]->push(new Disk(2));
    this->theTowers[0]->push(new Disk(1));
}

    

void theGame :: move ()
{
   cout << "Source Tower: ";
   int source;
   cin >> source;
   cout << "Destination Tower: ";
   int destination;
   cin >> destination;
   
    if (this->theTowers[destination]->peek() < this->theTowers[source]->peek())
    {
        this->theTowers[destination]->push(this->theTowers[source]->pop());
        display();
    }
    else
   {
        cout<< "INVALID MOVE" << endl;
    }
   
  
   

}


void theGame::display()
{

    for(int i = 0; i < 3; i++)
    {
        this->theTowers[i]->display();
        cout<< "\n\n **********Tower"<< i+1 << "************* \n\n"<< endl;
    }
}