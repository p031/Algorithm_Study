#include<iostream>
#include<map>

using namespace std;
map<string, string, greater<string>> workman;

int main()
{
    int n = 0;
    string name, log;
    map<string, string>::iterator itr;
    
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> name >> log;
        if(workman.find(name) == workman.end())
            workman.insert({name, log});
        else
            workman.erase(name);
    }
    
    for(itr = workman.begin(); itr != workman.end(); ++itr)
    {
        cout << itr->first << "\n";
    }
    
    return 0;
}
