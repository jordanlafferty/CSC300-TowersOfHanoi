class Disk
{
    private:
        int size;
        Disk* nextDisk;
    
    public:
        Disk(int size);
        void display();
        void setNextDisk(Disk* d);
        Disk* getNextDisk();
        
};