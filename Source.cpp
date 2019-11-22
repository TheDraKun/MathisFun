#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <concrt.h>

using namespace std;
int a[10];//Base Matrix
int b[10];//Missing Matrix
int c[10];//Copy of B for refresh
int x, val;
char m, n;//Row and Colmn
void randomizer();
void board();
void timer();
void missingBox();
void missingBoard();
void inputVal();
void editVal();
void compareBoard();
void giveup();




void randomizer() {
	a[0] = 0;
	b[0] = 0;

	srand((unsigned)time(0));

	for (int i = 1; i < 10; i++) {
		a[i] = (rand() % 9) + 1;

	}
}
void board() {
	cout << "|_____|_____|_____|" << endl;
	cout << "| " << a[1] << "   |  " << a[2] << "  |  " << a[3] << "  |  " << endl;

	cout << "|_____|_____|_____|=" << a[1] + a[2] + a[3] << endl;
	cout << "|     |     |     |" << endl;

	cout << "| " << a[4] << "   |  " << a[5] << "  |  " << a[6] << "  |  " << endl;

	cout << "|_____|_____|_____|=" << a[4] + a[5] + a[6] << endl;
	cout << "|     |     |     |" << endl;

	cout << "| " << a[7] << "   |  " << a[8] << "  |  " << a[9] << "  |  " << endl;

	cout << "|_____|_____|_____|=" << a[7] + a[8] + a[9] << endl;
	cout << "|  =  |  =  |  =  |" << endl;
	cout << "  " << a[1] + a[4] + a[7] << "    " << a[2] + a[5] + a[8] << "    " << a[3] + a[6] + a[9] << endl << endl;



}
void timer() {

	int m = 2, s = 0;
	cout << endl;
	cout << "A COUNTDOWN TIMER " << endl;

	cout << "Press any key to start" << endl;
	cout << " A COUNTDOWN TIMER" << endl;
	cout << "time remaining" << endl;
	cout << "mins : " << m << " secs : " << s << endl;

	for (int min = m; min >= 0; min--)
	{
		for (int sec = s; sec >= 0; sec--)
		{
			if (sec == 0)
				s = 59;
			//wait time
			Concurrency::wait(1000);
			//clearscreen
			system("cls");
			//	board();
			missingBoard();

			cout << min << " :mins " << sec << " :secs" << endl;
		}

	}



	Concurrency::wait(1000);
	cout << "THE END" << endl;

}
void missingBox() {
	srand((unsigned)time(0));
	for (int i = 1; i < 10; i++)
	{
		x = (rand() % 9) + 1;

		if (x == 1 && a[i] != 0)
			b[1] = a[1];
		if (x == 2 && a[i] != 0)
			b[2] = a[2];
		if (x == 3 && a[i] != 0)
			b[3] = a[3];
		if (x == 4 && a[i] != 0)
			b[4] = a[4];
		if (x == 5 && a[i] != 0)
			b[5] = a[5];
		if (x == 6 && a[i] != 0)
			b[6] = a[6];
		if (x == 7 && a[i] != 0)
			b[7] = a[7];
		if (x == 8 && a[i] != 0)
			b[8] = a[8];
		if (x == 9 && a[i] != 0)
			b[9] = a[9];
		c[i] = b[i];
	}

}

void missingBoard()
{
	cout << endl << endl << "MISSING BOARD" << endl;
	cout << "_______________________" << endl;
	cout << "     | a   |  b  | c   |" << endl;
	cout << "_____|_____|_____|_____|" << endl;
	cout << "     |     |     |     |" << endl;
	cout << "  a  | " << b[1] << "   |  " << b[2] << "  |  " << b[3] << "  |  " << endl;

	cout << "_____|_____|_____|_____|=" << a[1] + a[2] + a[3] << endl;
	cout << "     |     |     |     |" << endl;

	cout << "  b  | " << b[4] << "   |  " << b[5] << "  |  " << b[6] << "  |  " << endl;

	cout << "_____|_____|_____|_____|=" << a[4] + a[5] + a[6] << endl;
	cout << "     |     |     |     |" << endl;

	cout << "  c  | " << b[7] << "   |  " << b[8] << "  |  " << b[9] << "  |  " << endl;

	cout << "_____|_____|_____|_____|=" << a[7] + a[8] + a[9] << endl;
	cout << "     |  =  |  =  |  =  |" << endl;
	cout << "      " << a[1] + a[4] + a[7] << "    " << a[2] + a[5] + a[8] << "    " << a[3] + a[6] + a[9] << endl << endl;


}

void inputVal() {
	cout << "Enter the Location you wish to Change(Row X Column):  ";
	cin >> m >> n;
	tolower(m);

	tolower(n);
	for (int i = 1; i < 10; i++) {
		if (m == 'a' && n == 'a' && b[1] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[1] = val;
		}
		else if (m == 'a' && n == 'b' && b[2] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[2] = val;
		}
		else if (m == 'a' && n == 'c' && b[3] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[3] = val;
		}
		else if (m == 'b' && n == 'a' && b[4] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[4] = val;
		}
		else if (m == 'b' && n == 'b' && b[5] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[5] = val;
		}
		else if (m == 'b' && n == 'c' && b[6] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[6] = val;
		}
		else if (m == 'c' && n == 'a' && b[7] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[7] = val;
		}
		else if (m == 'c' && n == 'b' && b[8] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[8] = val;
		}
		else if (m == 'c' && n == 'c' && b[9] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[9] = val;
		}

	}
	missingBoard();

}
void editVal() {
	cout << endl << endl << "Editing Your Board" << endl << endl;
	//same as input
	cout << "Enter the Location you wish to edit(Row X Column):  ";
	cin >> m >> n;
	tolower(m);

	tolower(n);
	for (int i = 1; i < 10; i++) {
		if (m == 'a' && n == 'a' && c[1] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[1] = val;
		}
		else if (m == 'a' && n == 'b' && c[2] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[2] = val;
		}
		else if (m == 'a' && n == 'c' && c[3] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[3] = val;
		}
		else if (m == 'b' && n == 'a' && c[4] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[4] = val;
		}
		else if (m == 'b' && n == 'b' && c[5] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[5] = val;
		}
		else if (m == 'b' && n == 'c' && c[6] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[6] = val;
		}
		else if (m == 'c' && n == 'a' && c[7] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[7] = val;
		}
		else if (m == 'c' && n == 'b' && c[8] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[8] = val;
		}
		else if (m == 'c' && n == 'c' && c[9] == 0) {
			cout << "Enter the Value:  ";
			cin >> val;
			b[9] = val;
		}

	}
	missingBoard();

}
void compareBoard() {
	cout << endl << endl << "Verifying Your Board" << endl << endl;
	int f = 0;

	if (a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5] && a[6] == b[6] && a[7] == b[7] && a[8] == b[8] && a[9] == b[9])
	{
		f = 1;
	}

	if (f == 1) {
		cout << endl << endl << "You've solved it, CONGRADULATIONS!!" << endl << endl;
		exit(0);
	}
	else {
		cout << endl << endl << "You've Got wrong somewhere! I'm Sorry YOU LOOSE" << endl << endl;
		cout << endl << endl << "The Right Answer is" << endl << endl;
		board();
		cout << endl << endl << "Your Board" << endl << endl;
		missingBoard();
		exit(0);
	}

}
void giveup() {
	char op;
	cout << "Are You sure you wish to Give Up your Quest(y/n)" << endl;
	cin >> op;
	switch (op) {
	case 'y':
		cout << "YOU LOOSE" << endl;
		exit(0);
	case 'Y':
		cout << "YOU LOOSE" << endl;
		exit(0);
	case 'n':
		cout << "HeadBack to The Game" << endl;
		break;
	case 'N':
		cout << "HeadBack to The Game" << endl;
		break;
	default:
		cout << "Invalid Input" << endl;
	}


}

int main()
{
	int  ch;

	randomizer();
	//board();
	missingBox();
	missingBoard();
	//timer();
	while (1) {

		cout << endl << endl << "\t\t Menu \t\t" << endl << endl;
		cout << "\t 1.Fill Zeros" << endl;
		cout << "\t 2.Edit Your Fill-Ups" << endl;
		cout << "\t 3.Submit Your Board  (Finale)" << endl;
		cout << "\t 4.Give Up" << endl << endl;
		cout << "\t Enter Your Choice: ";
		cin >> ch;
		switch (ch) {
		case 1:
			inputVal();
			break;
		case 2:
			editVal();
			break;
		case 3:
			compareBoard();
			break;
		case 4:
			giveup();
			break;
		default:
			cout << "\t Invalid Input" << endl << endl;
			break;
		}


	}
	return 0;

}