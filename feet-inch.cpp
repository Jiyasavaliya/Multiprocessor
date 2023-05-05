#include<iostream>
using namespace std;

class InchFeet {
private:
	
    int inch;
    int feet;
public:

    InchFeet(int in, int ft) {
        
		inch = in;
        feet = ft;
    }

    void display() {
        cout<<feet<<" feet "<<inch<<" inches "<<endl;
    }

    InchFeet operator+ (InchFeet obj) {
        int in = inch + obj.inch;
        int ft = feet + obj.feet;
        if (in >= 12) {
            in -= 12;
            ft += 1;
        }
        return InchFeet(in, ft);
    }

    InchFeet operator+ (int in) {
        int total_inches = inch + in;
        int ft = feet;
        if (total_inches >= 12) {
            total_inches -= 12;
            ft += 1;
        }
        return InchFeet(total_inches, ft);
    }
};

int main() {
    InchFeet obj1(4, 3);
    InchFeet obj2(5, 7);

    InchFeet result = obj1 + obj2;
    result.display();

    return 0;
}
