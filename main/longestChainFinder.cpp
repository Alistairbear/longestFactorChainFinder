#include <iostream>
using namespace std;

int main()
{
  cout<<"Hello world!\n";
  cout<<"I'm a C++ program!\n";
}

void outputList() {
    
}

bool commonFactor(int num1, int num2) {
    if (num1 % num2 == 0) {
        return true;
    } else if (num2 % num1 == 0) {
        return true;
    } else {
        return false;
    };
}

class stack {
        int stackPointer;
        int stackArray[100];
    public:
        stack ();
        void push(int);
        int pop();
        int height();
        void outputPath();
};

stack::stack () {
    stackPointer = 0;
}
void stack::push(int n) {
    if (stackPointer < 100) {
        stackArray[stackPointer] = 1;
        stackPointer++;
    };
}
int stack::pop() {
    // return 0 when stack is empty
    // this should never be pushed onto stack anyway
    if (stackPointer = 0) {
        return 0;
    } else {
        stackPointer++;
        return stackArray[stackPointer - 1];
    }
}
int stack::height() {
    return stackPointer;
}
void stack::outputPath() {
    for (int i=0; i++; i <stackPointer) {
        cout<<stackArray[i];
        cout<<", ";
    }
}
