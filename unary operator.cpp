#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void set(int a1){
			a=a1;
		}
		void get(){
		 cout<<a<<endl;
		}
	   A operator ++ (){
		A ans;
		 ans.a=++a;
		 return ans;
	}
};
class B{
	private:
		int b;
	public:
		void set(int b1){
			b=b1;
		}
		void get(){
		 cout<<b<<endl;
		}

	B operator -- (){
	    B asn;
		 asn.b=--b;
		 return asn;
	}
};
int main(){
	A obj1,obj2;
	cout<<"Increment"<<endl;
	obj1.set(1);
	obj1.get();
	obj2 = ++obj1;
	obj2.get();
	cout<<endl;

	B ob1,ob2;
	cout<<"Decrement"<<endl;#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void set(int a1){
			a=a1;
		}
		void get(){
		 cout<<a<<endl;
		}
	   A operator ++ (){
		A ans;
		 ans.a=++a;
		 return ans;
	}
};
class B{
	private:
		int b;
	public:
		void set(int b1){
			b=b1;
		}
		void get(){
		 cout<<b<<endl;
		}

	B operator -- (){
	    B asn;
		 asn.b=--b;
		 return asn;
	}
};
int main(){
	A obj1,obj2;
	cout<<"Increment"<<endl;
	obj1.set(1);
	obj1.get();
	obj2 = ++obj1;
	obj2.get();
	cout<<endl;

	B ob1,ob2;
	cout<<"Decrement"<<endl;
	ob1.set(1);
	ob1.get();
	ob2 = --ob1;
	ob2.get();

	return 0;

}
	ob1.set(1);
	ob1.get();
	ob2 = --ob1;
	ob2.get();

	return 0;

}
