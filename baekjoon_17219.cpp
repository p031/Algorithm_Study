#include<iostream>
#include<map>

using namespace std;
map<string, string> memo;

int main()
{
    ios::sync_with_stdio(false)
    cin.tie(0)
    int n, m = 0;
    string url, pwd, want;
    map<string, string>::iterator itr;
    
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        cin >> url >> pwd;
        memo.insert({url, pwd});
    }
    
    for(int i = 0; i < m; i++)
    {
        cin >> want;
        cout << memo[want] << "\n";
    }

    return 0;
}
