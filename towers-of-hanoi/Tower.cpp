#include "Tower.hpp"
#include <iostream>
using namespace std;

Tower::Tower()
{
    this->count = 0;
    this->top = NULL;
}

void Tower::push(Disk* d)
{
   d->setNextDisk(this->top);
   this->top = d;
   this->count++;
}

Disk* Tower::pop()
{
    Disk* disk2Return = this->top;
    if(this->top != NULL)
    {
        this->top = this->top->getNextDisk();
        disk2Return->setNextDisk(NULL);
        this->count--;
    }
    return disk2Return;
}

Disk* Tower::peek()
{
    return this->top;
}

void Tower::display()
{
    Disk* currDisk = this->top;
    for(int i = 0; i < this->count; i++)
    {
        currDisk->display();
        currDisk = currDisk->getNextDisk();
    }
}
