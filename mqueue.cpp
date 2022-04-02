/*
//class implementing queue in C++
//the same functionality as STL (Standard Template Library) class queue in C++ 
//with usage example
//Version 1.2
Consists
a. Program template
b. definition of class mqueue 
c. Constructor
d. empty() method
e. push() method
f. dequeue() method
Author: gofer0 / Olimpijskie Kolo Informatyczne
 */

#include <iostream>
#include <vector>
using namespace std;

class mqueue{
    public:
    int dequeue(){
        if(!empty()){
            ++first;
        return elements[first-1];
        }
    }
    bool empty(){
        return last-first == 0;
    }
    void push(int element){
        elements.push_back(element);
        ++last;
    }
    mqueue(){
        first=0;
        last=0;
    }
    private:
    vector<int> elements;
    int first, last;
};

int main(){
    mqueue payments;
    cout << "empty?: " << payments.empty() << "\n";
    payments.push(5);
    payments.push(-3);
    payments.push(8);
    cout << "empty?: " << payments.empty() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    payments.push(11);
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "serviced: " << payments.dequeue() << "\n";
    cout << "empty?: " << payments.empty() << "\n";
    return 0;
}
