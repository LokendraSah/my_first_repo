// WAP to implement linear queue using c++. Make a switch case statement to ask users to show operations?
#include <iostream>
#include<stdlib.h>
#define SIZE 10
using namespace std;
class Queue
{
private:
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue();
    void enqueue(int data);
    void dequeue();
    void display();
};
Queue::Queue()
{
    front = -1;
    rear = -1;
}
void Queue::enqueue(int data)
{
    if (rear == SIZE - 1)
    {
        cout << "Queue is full" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front++;
        rear++;
        arr[rear] = data;
    }
    else
    {
        rear++;
        arr[rear] = data;
    }
}
void Queue::dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else if (front == rear)
    {
        int data = arr[front];
        front = -1;
        rear = -1;
        cout << "The deleted queue is" << data << endl;
    }
    else
    {
        int data = arr[front];
        front++;
        cout << "The deleted queue is " << data << endl;
    }
}
void Queue::display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    Queue q;
    int choice, data;
    for (; ;)
    {
        cout << "1.Enqueue\n2.Dequeue\n3.Display\n4.exit\nEnter your choice:";
    cin>>choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the data:";
            cin >> data;
            q.enqueue(data);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
            case 4:exit(0);
            break;
           
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    return 0;
}