#include <iostream>
#include <map>
using namespace std;

map<string, int> m;

int main()
{
    int n,x = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++) // 과일과 숫자 받아서 map에 저장
    {
        string s;
        cin >> s >> x;
        m[s] += x;
    }

    bool answer = false;
  
    if(m["STRAWBERRY"] == 5) // 숫자가 5면 true로 바꿈
        answer = true;
    else if(m["BANANA"] == 5)
        answer = true;
    else if(m["LIME"] == 5)
        answer = true;
    else if(m["PLUM"] == 5)
        answer = true;
    
    cout << (answer ? "YES" : "NO");
    
    return 0;
}
