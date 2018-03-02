/**
Desing a chess game using object 
oriented principles
**/

#include <iostream>
#include <string>

using namespace std;

class Player
{
	int piece;
public:
	bool win();
	bool lose();
};

class Piece 
{
	int value;
public:
	void move();
	void capture();
};

class King : public Piece
{
public:
	void castle_king();
	void castle_queen();
	void check();
};

class Queen : public Piece
{

};

class Rook : public Piece
{
public:
	void castle_king();
	void castle_queen();
};

class Knight : public Piece
{

};

class Bishop : public Piece
{

};

class Pawn : public Piece
{
public:
	void en_passant();
};

int main()
{
	char board[8][8];
	string move_from,move_to;

	cout << " Black" << endl;

	board[0][0]='R';
	board[0][1]='N';
	board[0][2]='B';
	board[0][3]='Q';
	board[0][4]='K';
	board[0][5]='B';
	board[0][6]='N';
	board[0][7]='R';

	
	for(int i=0;i<8;i++)
	{
	cout << board[0];
	}
	cout << endl;

	for (int i=0;i<8;i++)
	{
	board[1]='P';
	}
	for(int i=0;i<8;i++)
	{
	cout << board[1];
	}
	cout << endl;
	for(int i=0;i<8;i++)
	{
	board[2]='*';
	board[3]='*';
	board[4]='*';
	board[5]='*';
	}
	for(int j=2;j<6;j++)
	{
	for(int i=0;i<8;i++)
	{
	cout << board[j];
	}
	cout << endl;
	}
	for (int i=0;i<8;i++)
	{
	board[6]='P';
	}
	for(int i=0;i<8;i++)
	{
	cout << board[6];
	}
	cout << endl;

	board[7][0]='R';
	board[7][1]='N';
	board[7][2]='B';
	board[7][3]='Q';
	board[7][4]='K';
	board[7][5]='B';
	board[7][6]='N';
	board[7][7]='R';

	for(int i=0;i<8;i++)
	{
	cout << board[7];
	}
	cout << endl;
	
	cout << "abcdefgh" << endl;

	cout << " White" << endl;

	cout    << "White moves first." << endl;
	
	cout << "Enter White Move: ";
	cin >> move_from;
	cout << "to ";
	cin >> move_to;
