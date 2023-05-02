#include<iostream>
using namespace std;

class A{
	
	private:
		
		int id;
		
		public:
			
			void set(int i){
				id=i;
				
			}
			void get(){			
				cout<<"id: "<<id<<endl;
			}
			
			A operator ++ (int){
				
				A temp;
				
				temp.id = id++;
				
				return temp;
			}
			
				A operator ++ (){
				
				A temp;
				
				temp.id = ++id;
				
				return temp;
			}
			
};
int main(){
	
	A obj1,obj2,obj3;
	
	obj1.set(1);
	obj1.get();
	
	obj2 = obj1++;
	obj2.get();
	
	obj3 = ++obj1;
	obj3.get();
	
}
