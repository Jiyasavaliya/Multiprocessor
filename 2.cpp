#include<iostream>
using namespace std;

class A{
public:
    void f0() { 
    
	cout<<"Function with 0 argument"<<endl; 
	}
            void f1(int arg1) 
	{ 
	cout<<"Function with 1 argument: "<<arg1<<endl;
	}
            void f2(int arg1, int arg2) { 
	cout<<"Function with 2 arguments: "<<arg1<<" "<<arg2<<endl;
	}
            void f3(int arg1, int arg2, int arg3) { 
	cout<<"Function with 3 arguments: "<< arg1<<" "<<arg2<<" "<<arg3<<endl;
	}
            void f(int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0) {
        cout<<"Function with default arguments: "<<arg1<<" "<<arg2<<" "<<arg3<<" "<<arg4<<endl;
    }
};

int main() {
    
    A obj;
    
    obj.f0();
    obj.f1(10);
    obj.f2(20,30);
    obj.f3(40,50,60);
    
    obj.f();
    obj.f(10,20);
    obj.f(10,20,30);
    obj.f(10,20,30,40);
    
    return 0;
}
