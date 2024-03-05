#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class stack
{
public:
    node *head;
    int size;
    stack()
    {
        size = 0;
        head = nullptr;
    }
    void push(int val)
    {
        node *temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop()
    {

        if (head == nullptr)
        {
            cout << "empyt!!1\n";
            return;
        }
        size--;
        head = head->next;
    }
    int top()
    {
        if (head == nullptr)
        {
            cout << "stack is empty!! ";
            return -1;
        }
        return head->data;
    }
    void display()
    {
        node *d = head;
        while (d != nullptr)
        {
            cout << d->data << " ";
            d = d->next;
        }
        cout << endl;
    }
    int sizee()
    {
        return size;
    }
};

int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<"Size: "<<st.sizee()<<endl;
    st.display();
    cout << endl;
    st.pop();
    st.display();
    cout << endl;
    cout << "top is: " << st.top() << endl;
    ;
    st.pop();
    st.pop();
    st.pop();
    return 0;
}