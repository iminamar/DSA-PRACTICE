#include <iostream>
#include <vector>
using namespace std;
#define endl "\n"
vector<int> stack(100);
int top = -1;

void push()
{
    int x;
    cout << "enter value: ";
    cin >> x;
    top++;
    stack[top] = x;
}

void pop()
{
    if (top == -1)
    {
        cout << "stack under flow: " << endl;
    }
    else
    {
        cout << "poped element is: " << stack[top] << endl;
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty:" << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

void sizee()
{
    if (top == -1)
    {
        cout << "size: " << 0 << endl;
    }
    else
    {
        cout << "size: " << top + 1 << endl;
    }
}
void IsEmpty()
{
    if (top == -1)
    {
        cout << "stack is empty: " << endl;
    }
    else
    {
        cout << "stack is not empty: " << endl;
    }
}
int main()
{
    int testcase = 6;
    cout << "ENTER CHOICE: PRESS" << endl;
    cout << "1: push()\n2: pop()\n3: display()\n4: Size()\n5: IsEmpty()\n";
    while (testcase--)
    {
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            sizee();
            break;
        case 5:
            IsEmpty();
            break;
        default:
            cout << "WRONG OPERTATION: " << endl;
        }
    }

    return 0;
}

/*
if you are using static array then you can use this push funtion defination:

void push()
{
    if (top >= stack.size())
    {
        cout << "stack over flow" << endl;
    }
    else
    {
    int x;
    cout << "enter value: ";
    cin >> x;
    top++;
    stack[top] = x;
    }
}


*/