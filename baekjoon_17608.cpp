#include <iostream>
using namespace std;

int main() {
  int arr[100001], n, max=0, count=0;

  cin>>n;

  for(int i=0; i<n; i++)
      cin>>arr[i];

  for(int i=n-1; i>=0; i--)  //n-1번 방까지 입력된 배열을 거꾸로 읽어간다.
  {
    if(max < arr[i])  //뒤부터, 앞으로 읽어가면서 max변수에 가장 긴 막대기의 길이를 저장하고, 개수를 세준다.
    {
      count++;
      max=arr[i];
    }
  }

  cout<<count;

}
