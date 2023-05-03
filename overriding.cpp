#include<iostream>
using namespace std;

class collage{
    
	public:
		
	void mark(){
		
		cout<<"your mark is 88"<<endl;
	}
};

class pri_school : public collage{
	
	public:
	
	void mark(){
		
		cout<<"your mark is 99"<<endl;
	}
};

class pub_school : public collage{

	public:
	
	void mark(){
		
		cout<<"your mark is 100";
	}
};

int main(){ 
     
collage obj1;
pri_school obj2;
pub_school obj3;
	 
	
	obj1.mark(); 
	obj2.mark(); 
	obj3.mark();
}

