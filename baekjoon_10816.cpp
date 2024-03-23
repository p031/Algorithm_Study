#include <iostream>
#include <unordered_map> // map보다 더 빠른 탐색을 하기 위한 자료구조(해시 테이블)
//중복된 데이터 허용 x, map에 비해 데이터가 많을 때 월등히 높은 성능
using namespace std;

unordered_map <int, int> m; // 2차원 배열로 선언
int N, M, card;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) { // card번째 자리의 요소를 1씩 올려서 개수 입력
		cin >> card;
		m[card]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++) { // card번째 자리의 요소 값 출력
		cin >> card;
		cout << m[card] << " ";
	}
}
