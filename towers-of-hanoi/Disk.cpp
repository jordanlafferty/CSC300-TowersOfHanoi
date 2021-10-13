#include "Disk.hpp"
#include <string>
#include <iostream>

using namespace std;

Disk::Disk(int size)
{
    this->size = size;
    this->nextDisk = NULL;
}

void Disk::setNextDisk(Disk* d)
{
    this->nextDisk = d;
}

Disk* Disk::getNextDisk()
{
    return this->nextDisk;
}

void Disk::display()
{
    string s = "";
    for(int i = 0; i < this->size; i++)
    {
        s = s + "==";
    }
    cout << s << endl;
}