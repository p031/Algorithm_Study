#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="}; //vector 선언해서 알파벳 넣어놓기
    int idx;
    string word;
    cin >> word;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(1){
            idx = word.find(croatian[i]); // word 안에 있는 알파벳의 인덱스 값을 idx에 넣어두기
            if(idx == string::npos) // word안에 크로아티아 문자가 없을 때
                break;
            word.replace(idx,croatian[i].length(),"#"); // 있으면 인덱스 값을 가지고 크로아티아 문자를 #으로 변경
        }
    }
    cout << word.length(); // word의 길이 측정
}
