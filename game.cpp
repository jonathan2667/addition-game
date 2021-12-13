#include <iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<bitset>
#include <ctime>
#include <cstdlib>

#define FO(x) {freopen(#x".in","r",stdin);freopen(#x".out","w",stdout);}

using namespace std;

const int inf = 1e6;

int cntrau=5, cntbun=67;

int main() {
	while (1) {
		if (cntbun & 1) {
			int a = (rand() % 13) + 1;
			int b = (rand() % 9) + 1;
			cout << a << " + " << b << " = ";

			int x;
			cin >> x;

			if (x != a + b) {
				cntrau++;
				printf("\x1B[31mIncorect, mai incearca\n\033[0m\t\t");
				cin >> x;

				if (x != a + b)
					cout << "\nRaspunsul corect este " << a + b << endl;

			}
			else
				printf("\x1B[32m\nBravo\n\033[0m\t\t"),  cntbun++;

			cout << "Ai facut bine " << cntbun << " si ai gresit " << cntrau << "\n\n";
		}
		else {
			int a = (rand() % 20) + 1;
			int b = (rand() % 20) + 1;
			if (a < b)
				swap(a, b);
			cout << a << " - " << b << " = ";

			int x;
			cin >> x;

			if (x != a - b) {
				cntrau++;
				printf("\x1B[31mIncorect, mai incearca\n\033[0m\t\t");
				cin >> x;

				if (x != a - b)
					cout << "\nRaspunsul corect este " << a - b << endl;

			}
			else
				printf("\x1B[32m\nBravo\n\033[0m\t\t"), cntbun++;

			cout << "Ai facut bine " << cntbun << " si ai gresit " << cntrau << "\n\n";
		}
	}

}
