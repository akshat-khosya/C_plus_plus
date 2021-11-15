#include<iostream>
using namespace std;
template <typename T>
class Queue{
    private:
    T* data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    Queue(){
        capacity=1;
        data= new T[capacity];
        nextIndex=0;
        firstIndex=-1;
        size=0;
    }
    int getSize(){
        return size;
    }
    int getCapacity(){
        return capacity;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(T element){
        if(size==capacity){
            capacity=capacity*2;
            T* newData=new T[capacity];
            for (int i = 0; i < size; i++)
            {
                newData[i]=data[i];
            }
            delete [] data;
            data=newData;
        }
        data[nextIndex]=element;
        size++;
        if(firstIndex==-1){
            firstIndex=0;
        }
        nextIndex++;
    }
    T front(){
         if(isEmpty()){
            cout<<"Queue is empty ! "<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty ! "<<endl;
            return ;
        }
        else{
            cout<<data[firstIndex]<<endl;
            for (int i = 0; i < size-1; i++)
            {
                data[i]=data[i+1];
            }
            size--;
            nextIndex--;
            
        }

    }

};
int main()
{
    Queue<int> q;
    int choice;
    back:
    cout<<"1. Insertion"<<endl;
    cout<<"2. Deletion"<<endl;
    cout<<"3. Size of Queue"<<endl;
    cout<<"4. Capacity of Queue"<<endl;
    cout<<"5. Check for Empty"<<endl;
    cout<<"6. Display front element"<<endl;
    cout<<"7. Exit"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        int data;
        cout<<"Enter the data"<<endl;
        cin>>data;
        q.enqueue(data);
        goto back;
        break;
    case 2:
        q.dequeue();
        goto back;
        break;
    case 3:
        cout<<q.getSize()<<endl;
        goto back;
        break;
    case 4:
        cout<<q.getCapacity()<<endl;
        goto back;
        break;
    case 5:
        if(q.isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Queue is not empty"<<endl;
        }
        goto back;
        break;
    case 6:
        cout<<q.front()<<endl;
        goto back;
        break;
    case 7:
        break;
    
    default:
        cout<<"Inavlid choice "<<endl;
        goto back;
        break;
    }

return 0;
}