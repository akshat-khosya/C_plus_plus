using namespace std;
class Student {
    public :
    int rollNumber;
    private :
    int age;
    public :
    void display(){
        cout<<age<<" "<<rollNumber;
    }
    void getAge(int Age){
        age=Age;
        
    }
};
