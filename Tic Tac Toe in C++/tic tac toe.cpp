#include<iostream>
#include<windows.h>
using namespace std;
char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
class tik{
public:
    char name[50];
	void cal();
    void information();
    int rules();
    void board();
   // int result();
    int proccessing();



};\
void tik::cal(){
cout<<"\n\n\n                          WELCOME TO TIC TAK TOE"<<endl;Sleep(1000);
    cout<<"\n                              .";/*Beep(2000,500);Sleep(2000);*/cout<<"     .";/*Beep(2000,500);Sleep(2000);*/cout<<"     .";//Beep(2000,500);Sleep(500);
    cout<<"\n\n\n     ________________________________***__________________________________"<<endl;
    cout<<"                                     ***"<<endl;
}
void tik::information(){
    cout<<"\n\n\n\n\n\n\n\nENTER PLAYER NAME : "; cin>>name;
    //cout<<"\n\n\n\n\n\n\n\nENTER 2nd PLAYER NAME : ";cin>>name;Sleep(2000);
    cout<<"\n\n\n\n\n\n\n\n\n\                          LETS START : ";Sleep(2000);
}

int tik::rules(){

		if (square[1] == square[2] && square[2] == square[3])

			return 1;
		else if (square[4] == square[5] && square[5] == square[6])

			return 1;
		else if (square[7] == square[8] && square[8] == square[9])

			return 1;
		else if (square[1] == square[4] && square[4] == square[7])

			return 1;
		else if (square[2] == square[5] && square[5] == square[8])

			return 1;
		else if (square[3] == square[6] && square[6] == square[9])

			return 1;
		else if (square[1] == square[5] && square[5] == square[9])

			return 1;
		else if (square[3] == square[5] && square[5] == square[7])
			return 1;
		else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
			&& square[4] != '4' && square[5] != '5' && square[6] != '6'
			&& square[7] != '7' && square[8] != '8' && square[9] != '9')

			return 0;
		else
			return -1;
}
void tik::board(){

    cout<<"\n\n\n\n\n\n\n\n                       Match 1";Sleep(400);
    cout<<"\n\n\n\n\n                   |           |";
    cout<<"\n           "<<square[1]<<"       |      "<<square[2]<<"    |"<<"     "<<square[3];
    cout<<"\n       ____________|___________|__________";
    cout<<"\n                   |           |";
    cout<<"\n           "<<square[4]<<"       |      "<<square[5]<<"    |"<<"     "<<square[6];
    cout<<"\n       ____________|___________|__________";
    cout<<"\n                   |           |";
    cout<<"\n           "<<square[7]<<"       |      "<<square[8]<<"    |"<<"     "<<square[9];
    cout<<"\n                   |           |";



}

int main()
{
    tik a;
    a.cal();
    a.information();
	int player = 1, i, choice;

	char mark;
	do
	{
		a.board();
		player = (player % 2) ? 1 : 2;

		cout << "\n\n\n\n         Player " << player << ", enter a number:  ";
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}
		i = a.rules();

		player++;
	} while (i == -1);
	a.board();
	system("color 0A");
	if (i == 1)
		cout << "\n\n\n\          Congratulation  Player " << --player << " win ";
	else
		cout << "==>\aGame draw";
	cin.ignore();
	cin.get();
    system("cls");
    system("color 0A");
    cout<<"\n\n\n\n\n\n\n                       THANK YOU FOR PLAYING GAME   "<<endl;//Sleep(30000);
    cin.ignore();
    system("cls");
    return 0;
}
