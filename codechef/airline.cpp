#include<iostream>
using namespace std;
int main(){
	int w1,w2,w3,num,D,E,count=0;
	cin>>num;
	for(int i=0;i<num;i++){
		cin>>w1>>w2>>w3>>D>>E;
		
			if(w1<=E){
				if(w2+w3<=D){
					count=1;
					
				}
				

			}
			

			 if(w2<=E){
				if(w1+w3<=D){
					count=1;
				}
				

			}
			if(w3<=E){
				if(w2+w1<=D){
					count=1;
				}
				

			}
			if(count==1){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}

			count=0;
	
	}

	return 0;




}
