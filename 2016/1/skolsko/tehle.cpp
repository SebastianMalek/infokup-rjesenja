// Sebastian Malek / 2016

#include <iostream>

using namespace std;

int main() {
	string tel;
	cin >> tel;

	string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string numbers = "22233344455566677778889999";

	for (auto& c : tel) {
		if (isalpha(c)) {
			auto pos = letters.find(c);
			c = numbers[pos];
		}
	}

	cout << tel;
	return 0;
}
