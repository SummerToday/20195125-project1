//1�� ����

/*#include <iostream>

using namespace std;



int main()

{

	int x = 0, y = 0;

	char ch;



	cout << "�����ڸ� �Է��ϰ� ctrl+z�� ġ����" << endl;

	while (cin >> ch) {

		switch (ch) {

		case'a':case'i':case 'e': case'o':case 'u':

			x++;

			break;
		

		case'A':case'B':case'C':case'D':case'E':case'F':case'G':case'H':case'I':case'J':case'K':case'L':case'M':case'N':case'O':

		case'P':case'Q':case'R':case'S':case'T':case'U':case'V':case'W':case'X':case'Y':case'Z':
		

			cout << "Check to a alphabet" << endl;

			break;

		default:

			y++;

			break;

		}

	}

	cout << "����: " << x << endl;

	cout << "����: " << y << endl;

	return 0;



}*/



//2�� ����
#include <iostream>
#include <random>
using namespace std;
int main() {
	
	random_device rd;
	mt19937 x(rd());
	mt19937 y(rd());
	uniform_int_distribution<int> dis(0, 100);

		cout << "��� ������ �ڵ����� �����մϴ�." << endl;
		cout <<  dis(x)<<" ";
		cout <<  dis(y);
		cout << "������ �Է��ϱ�(+,-,*,/)" << endl;

}

//3�� ����
/*#include <iostream>
using namespace std;
int main()
{

	int n, m;

	int result = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {

		if (i % m == 0)

			result += i;
	}



	cout << result;

	return 0;

}*/

//4�� ����
/*#include<iostream>
using namespace std;
int main() {

	int n, sum = 1;

	cin >> n;

	cout << 1;

	for (int i = 2; i < n; i++) {

		if (n % i == 0) {

			sum += i;

			cout << " + " << i;

		}

	}

	cout << " = " << sum << endl;

}

*/

//5�� ����
/*#include<iostream>
using namespace std;

int main()

{

	char board[3][3];

	int x, y, k, i;



	for (x = 0; x < 3; x++)

		for (y = 0; y < 3; y++) board[x][y] = ' ';



	for (k = 0; k < 9; k++) {

		cout << "(x, y) ��ǥ:";

		cin >> x >> y;

		board[x][y] = (k % 2 == 0) ? 'X' : 'O';



		for (i = 0; i < 3; i++) {

			cout << "---l---l---" << endl;

			cout << board[i][0] << " l " << board[i][1] << " l " << board[i][2] << endl;

		}

		cout << "---l---l---" << endl;

	}

	return 0;

}*/

//6������

/*#include<iostream>

#include <time.h>

using namespace std;



int main()

{

	bool board[10][10] = { 0 };

	srand(time(NULL));



	for (int i = 0; i < 10; i++)

		for (int j = 0; j < 10; j++)

			if ((rand() % 100) < 30)

				board[i][j] = true;



	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 10; j++)

			if (board[i][j])

				cout << "# ";

			else

				cout << ". ";

		cout << endl;

	}

	return 0;

}*/