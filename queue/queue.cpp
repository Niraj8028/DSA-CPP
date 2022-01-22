#include <iostream>
using namespace std;
#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "queue overflow";
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
            return;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty";
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            cout << "queue is empty";
            return 1;
        }
        return -1;
    }
};
int main()
{
    queue q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    cout << q.peek();
    q.pop();
    cout << q.peek();

    return 0;
}