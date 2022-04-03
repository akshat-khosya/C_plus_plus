#include<bits/stdc++.h>

using namespace std;
#include "Student.cpp"
typedef long long ll;

int main()
{
    Student s1; 
    s1.getAge(20);
    
    s1.rollNumber=101;
    
    s1.display();
    Student s2(s1);
    s2.display();
    Student* s3=new Student();
     
    return 0;
}