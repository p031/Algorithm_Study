#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, cnt = 0;
    
    cin >> n; // 3 받음

    for(int i = 0; i < n; i++)
    {
        string word;
        cin >> word;  // 단어 하나 받았음
        int check = 0;

        for(int j = 0; j < word.length()-1; j++) // 받은 단어의 길이 만큼 반복
        {
            if(word[j] != word[j+1] && word.substr(j+1).find(word[j]) != string::npos) 
            // 알파벳이 연속적으로 이어져있지 않으면서 0에서 j+1 범위 안에 똑같은 문자가 있으먄
            {
                check = 1;
                break;
            }
        }
        if(check == 0) cnt += 1;
    }
    cout << cnt << endl;

    return 0;
}
