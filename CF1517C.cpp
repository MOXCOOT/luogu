#include<iostream>
#define NUM 5005
using namespace std;
int main() {
	int n, a[NUM], map[NUM][NUM] = { 0 };
	pair <int, int >p;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> map[i][i];
		p.first = i;
		p.second = i;
		for (int j = 1; j < map[i][i]; j++) {
			if (p.second > 1 && (!map[p.first][p.second - 1])) {//左边没有数字
				p.second--;;
				map[p.first][p.second] = map[i][i];
			}
			else {//左边没有数字则向下移
				p.first++;
				map[p.first][p.second] = map[i][i];
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << map[i][j];
			if (j != i)cout << ' ';
		}
		cout << endl;
	}
}
