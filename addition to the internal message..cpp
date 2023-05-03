#include<iostream>
#include<string.h>
using namespace std;

class message{
	
	private:
		
		char name[20];
		
		public:
			
		message(char type[]){
		
		strcpy(name,type);
	}
		
			void print(){
				
				cout<<"welcome"<<endl;
				
			}
			void print(char NAME[]){
				
				cout<<name<<""<<NAME<<endl;
				
			}
}; 

int main(){
	
	message obj("jeeya ");
	
	obj.print();
	obj.print("savaliya");
	
	
}
