#include<iostream>
using namespace std;
#include "StackUsingArray.cpp"

int main()
{
    StackUsingArray<double> s1;
    s1.push(100.23);
    s1.push(25.67);
    s1.push(56.23);
    s1.push(5.7);
    s1.push(10);
    s1.push(20);

    cout << "The top element is: :" << s1.top() << endl;
    cout << "The size of the stack is: :" << s1.size() << endl;
    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.size() << endl;
    cout << s1.isEmpty() << endl;
}
