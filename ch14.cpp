#include<iostream>
using namespace std;
typedef struct myfirst
{
	int eId;
	char favChar;
	float salary;
}ep;
union money
{
	int rice;
	char car;
	float pounds;   

}
int main(){
	ep akshat;
	akshat .eId=1;
	akshat.favChar='M';
	akshat.salary = 4374;
	cout<<akshat.salary;





	return 0;
}
