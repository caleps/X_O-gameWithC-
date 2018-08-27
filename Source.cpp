#include<iostream>

using namespace std;
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player='x';

 
void drow()
{
	
	system("cls");
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<"   "<< matrix[i][j]<<"  ";

		}
		cout << endl;
		cout << "   "<<"_____________" << endl;
		cout << endl;

	}

}
void input()
{
	int x;
	cout << "enter the number you want:" << endl;
	cin >> x;
	if (x == 1)
	{
		if (matrix[0][0] == '1')
			matrix[0][0] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 2)
	{
		if (matrix[0][1] == '2')
			matrix[0][1] = player;
		else
			cout << "there is an input !\n";
	}

	else if (x == 3)
	{
		if (matrix[0][2] == '3')
			matrix[0][2] = player;
		else 
			cout << "there is an input !\n";
	}

	else if (x == 4)
	{
		if (matrix[1][0] == '4')
		matrix[1][0] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 5)
	{
		if (matrix[1][1] == '5')
			matrix[1][1] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 6)
	{
		if (matrix[1][2] == '6')
			matrix[1][2] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 7)
	{
		if (matrix[2][0] == '7')
			matrix[2][0] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 8)
	{
		if (matrix[2][1] == '8')
			matrix[2][1] = player;
		else
			cout << "there is an input !\n";
	}
	else if (x == 9)
	{
		if (matrix[2][2] == '9')
			matrix[2][2] = player;
		else
			cout << "there is an input !\n";
	}

}
void secondplayer()
{
	if (player == 'x')
		player = 'o';
	else
		player = 'x';

}
char win()
{//================================================<<X>>
	if (matrix[0][0] == 'x'&&matrix[0][1] == 'x'&&matrix[0][2] == 'x')
		return 'x';
    if (matrix[1][0] == 'x'&&matrix[1][1] == 'x'&&matrix[1][2] == 'x')
		return 'x';
    if (matrix[2][0] == 'x'&&matrix[2][1] == 'x'&&matrix[2][2] == 'x')
		return 'x';
//---------------------------------------------------------------------
	if (matrix[0][0] == 'x'&&matrix[1][0] == 'x'&&matrix[1][0] == 'x')
		return 'x';
if (matrix[0][1] == 'x'&&matrix[1][1] == 'x'&&matrix[2][1] == 'x')
		return 'x';
if (matrix[0][2] == 'x'&&matrix[1][2] == 'x'&&matrix[2][2] == 'x')
		return 'x';
//---------------------------------------------------------------------
if (matrix[0][0] == 'x'&&matrix[1][1] == 'x'&&matrix[2][2] == 'x')
return 'x';
if (matrix[0][2] == 'x'&&matrix[1][1] == 'x'&&matrix[2][0] == 'x')
return 'x';
//=======================================================<<O>>=======================================================
if (matrix[0][0] == 'o'&&matrix[0][1] == 'o'&&matrix[0][2] == 'o')
return 'o';
if (matrix[1][0] == 'o'&&matrix[1][1] == 'o'&&matrix[1][2] == 'o')
return 'o';
if (matrix[2][0] == 'o'&&matrix[2][1] == 'o'&&matrix[2][2] == 'o')
return 'o';
//---------------------------------------------------------------------
if (matrix[0][0] == 'o'&&matrix[1][0] == 'o'&&matrix[1][0] == 'o')
return 'o';
if (matrix[0][1] == 'o'&&matrix[1][1] == 'o'&&matrix[2][1] == 'o')
return 'o';
if (matrix[0][2] == 'o'&&matrix[1][2] == 'o'&&matrix[2][2] == 'o')
return 'o';
//---------------------------------------------------------------------
if (matrix[0][0] == 'o'&&matrix[1][1] == 'o'&&matrix[2][2] == 'o')
return 'o';
if (matrix[0][2] == 'o'&&matrix[1][1] == 'o'&&matrix[2][0] == 'o')
return 'o';

return '/';
}
int main()
{
	
	drow();
	
	while (1)
	{
		cout << "player(1)==>(x)\n\nplraer(2)==>(y)\n\n\n";
		input();
		drow();
		if (win() == 'x')
		{
			cout << " ===> (X) wins " << endl;
			break;
		}
		else if (win() == 'o')
		{
			cout << " ===> (O) wins" << endl;
			break;
		}
		secondplayer();

	}
	
	system("pause");
	return 0;
}
/* 00 01 02
   10 11 12
   20 21 22
*/
/*cout << matrix[0][0] << "|" << matrix[0][1] << "|" << matrix[0][2] << endl;
  cout << " ________________                 " << "_____________" << endl; 
  cout << matrix[1][0] << "|" << matrix[1][1] << "|" << matrix[1][2] << endl;
  cout << " ________________                 " << "______________" << endl;
  cout << matrix[2][0] << "|" << matrix[2][1] << "|" << matrix[2][2] << endl;*/
