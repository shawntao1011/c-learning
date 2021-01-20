#include <iostream>

class myQueue{
private:
    int* array;
    int Front;
    int Last;
    int size;

public: 
    myQueue(int size_);
    myQueue(const myQueue& myQueue_);
    myQueue operator= (const myQueue& myQueue_);
    ~myQueue();
    
    int getsize();
    int* getarray();
    bool clear();
    void push(const int& input);
    int pop();

}

myQueue::myQueue(int size_):Front(0),Last(0),size(size_)
{
    array=new int[size_];
}

myQueue::myQueue(const myQueue* myQueue_):Front(myQueue_::Front),Last(myQueue_::Last),Size(myQueue_::size)
{
    array=new int(myQueue.getsize());
}

myQueue& myQueue::operator=(const myQueue& myQueue_)
{
    if (this!=myQueue_){
        delete [] array;
        Front=myQueue_.Front;
        Last=myQueue_.Last;
        size=myQueue_.size;
        temp_array=myQueue.getarray()
        for (int i=0;i<size;i++){
            array[i]=temp_array[i];
            
        }
    }
}
int myQueue::getsize(){
    return size;
}

int* myQueue::getarray(){
    return array;
}

myQueue::~myQueue()
{
    delete []array;
}

void myQueue::push(int& input){
    array[last]=input;
    last++;

}

int myQueue::pop(){
    temp=array[Front];
    array=array[Front+1:size];
    return temp;
}

int main()
{
    std::cout << "Hello world" << std::endl;
    return 0;
}

