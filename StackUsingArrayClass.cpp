#include<climits>

template<typename T>
class StackUsingArray
{
    int nextIndex;
    T *data;
    int capacity;

public:
    StackUsingArray()
    {
        data = new T[5];
        nextIndex = 0;
        capacity = 5;
    }

    void push(int element)
    {
        if(nextIndex == capacity)
        {
            T* newData = new T [2*capacity];
            for(int i=0;i < capacity;i++)
                newData[i]=data[i];
            capacity=2*capacity;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T top()
    {
        if(nextIndex == 0)
        {
            cout << "Stack Is Empty::" << endl;
            return 0;
        }
        else
            return data[nextIndex-1];
    }
    int size()
    {
        if(nextIndex != 0)
            return nextIndex;
        else
            return 0;
    }
    bool isEmpty()
    {
        if(nextIndex == 0)
            return true;
        else
            return false;
    }
    T pop()
    {
        if(nextIndex == 0)
        {
            cout << "Stack Is Empty::" << endl;
            return 0;
        }
        else
        {
            nextIndex--;
            return data[nextIndex];
        }
    }
};
