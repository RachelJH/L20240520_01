#include <iostream>
#include <cstdlib>
using namespace std;

int Draw()
{
	return rand() % 10 + 1;
}
void Compare(int Player, int Computer)
{
	if (Player >21 && Computer >21)
	{
		cout << "플레이어 승리";
	}
	else if (Player >21)
	{
		cout << "컴퓨터 승리";
	}
	else if (Computer > 21)
	{
		cout << "플레이어 승리";
	}
	else if (Player > Computer)
	{
		cout << "플레이어 승리";
	}
	else if (Player < Computer)
	{
		cout << "컴퓨터 승리";
	}
}


int main() 
{
	int PlayerCard1 = 0;
	int PlayerCard2 = 0;
	int PlayerTotal = 0;
	int ComputerCard1 = 0;
	int ComputerCard2 = 0;
	int ComputerTotal = 0;
	
	PlayerCard1 = Draw();
	cout << PlayerCard1 << endl;
	PlayerCard2 = Draw();
	cout << PlayerCard2 << endl;

	ComputerCard1 = Draw();
	cout << ComputerCard1 << endl;

	ComputerCard2 = Draw();
	cout << ComputerCard2 << endl;

	PlayerTotal = PlayerCard1 + PlayerCard2;
	ComputerTotal = ComputerCard1 + ComputerCard2;

	Compare(PlayerTotal, ComputerTotal);

	return 0;
}