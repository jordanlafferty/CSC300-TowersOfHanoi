#include "Disk.hpp"

class Tower
{
    private:
        Disk* top;
        int count;
        
    public:
        Tower();
        void push(Disk* d);
        Disk* pop();
        Disk* peek();
        void display();
};