#include <iostream>
#include <deque>
using namespace std;

deque<int> dq;

int push_front(int x)
{
    dq.push_front(x);
    return 0;
}

int push_back(int x)
{
    dq.push_back(x);
    return 0;
}

int pop_front(void)
{
    if(dq.empty() == true)
        cout << "-1" << "\n";
    else
    {
        int tmp = dq.front();
        dq.pop_front();
        cout << tmp << "\n"; 
    }
    return 0;
}

int pop_back(void)
{
    if(dq.empty() == true)
        cout << "-1" << "\n";
    else
    {
        int tmp = dq.back();
        dq.pop_back();
        cout << tmp << "\n"; 
    }
    return 0;
}

int size(void)
{
    cout << dq.size() << "\n";
    return 0;
}

int empty(void)
{
    if(dq.empty() == true)
        cout << "1" << "\n";
    else
        cout << "0" << "\n";
    return 0;
}

int front(void)
{
    if(dq.empty() == true)
        cout << "-1" << "\n";
    else
        cout << dq.front() << "\n";
    return 0;
}

int back(void)
{
    if(dq.empty() == true)
        cout << "-1" << "\n";
    else
        cout << dq.back() << "\n";
    return 0;
}

int main()
{
    int n,x = 0;
    string cmd;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> cmd;
        if(cmd == "push_front")
        {
            cin >> x;
            push_front(x);
        }   
        else if(cmd == "push_back")
        {
            cin >> x;
            push_back(x);
        }    
        else if(cmd == "pop_front")
            pop_front();
        else if(cmd == "pop_back")
            pop_back();
        else if(cmd == "size")
            size();
        else if(cmd == "empty")
            empty();
        else if(cmd == "front")
            front();
        else if(cmd == "back")
            back();
        else
            continue;
    }
    return 0;
}
