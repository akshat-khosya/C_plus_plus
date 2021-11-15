#include<bits/stdc++.h>
using namespace std;
template <typename T>
class StackUsingArray{
    private:
    T*data;
    int capacity;
    int nextIndex;
    public:
    StackUsingArray(){
        capacity=1;
        data=new T[capacity];
        nextIndex=0;
    }
    // return the number of elements present in my stack
    int size(){
        return nextIndex;
    }
    // empty 
    bool isEmpty(){
        if(nextIndex==0){
            return true;
        }else{
            return false;
        }
    }
    // insert element 
    void push(T element){
        if(nextIndex==capacity){
            T *newData=new T[capacity*2];
            for (int i = 0; i < capacity; i++)
            {
                newData[i]=data[i];
            }
            delete [] data;
            data=newData;
            capacity=capacity*2;
              
        }
        data[nextIndex]=element;
        nextIndex++;
    }
    T pop(){
        if(nextIndex==0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        
        nextIndex--;
        return data[nextIndex];


    }
    T top(){
        if(nextIndex==0){
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }

};
int main()
{
    

    StackUsingArray<int> s;
    back:
    cout<<"Enter the choice you want to perform on Stack"<<endl;
    cout<<"Enter 1 for push"<<endl;
    cout<<"Enter 2 for pop"<<endl;
    cout<<"Enter 3 for top"<<endl;
    cout<<"Enter 4 for size"<<endl;
    cout<<"Enter 5 for isEMpty"<<endl;
    cout<<"Enter 6 for exit"<<endl;
    int choice;
    cin>>choice;

    switch (choice)
    {
    case 1:{
       int data;
       cout<<"Enter the value of data"<<endl;
       cin>>data;
        s.push(data);
        goto back;
        break;
        }
    case 2:{
       
        cout<<"The delted element is "<<s.pop()<<endl;
        goto back;
        break;
        }
    case 3:{
        cout<<"The Top element is "<<s.top()<<endl;
        goto back;
        break;
        }
    case 4:{
        cout<<"The size of stack is "<<s.size()<<endl;
        goto back;
        break;
        }
    case 5:{
        if(s.isEmpty()){
            cout<<"The stack is empty"<<endl;
        }
        else{
            cout<<"The stack is not empty"<<endl;
        }
        goto back;
        break;
        }
    case 6:{
        
        
        break;
        }
    
    default:
        cout<<"Invalid choice"<<endl;
        cout<<".............................................Continue...................."<<endl;
        goto back;
        break;
    }
     

return 0;
}