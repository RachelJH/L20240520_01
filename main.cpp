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
		cout << "�÷��̾� �¸�";
	}
	else if (Player >21)
	{
		cout << "��ǻ�� �¸�";
	}
	else if (Computer > 21)
	{
		cout << "�÷��̾� �¸�";
	}
	else if (Player > Computer)
	{
		cout << "�÷��̾� �¸�";
	}
	else if (Player < Computer)
	{
		cout << "��ǻ�� �¸�";
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
	cout <<"�÷��̾� ī��1 : " << PlayerCard1 << endl;
	PlayerCard2 = Draw();
	cout << "�÷��̾� ī��2 : " << PlayerCard2 << endl;

	ComputerCard1 = Draw();
	cout << "��ǻ�� ī��1 : " << ComputerCard1 << endl;
	ComputerCard2 = Draw();
	cout << "��ǻ�� ī��2 : " << ComputerCard2 << endl;

	PlayerTotal = PlayerCard1 + PlayerCard2;
	ComputerTotal = ComputerCard1 + ComputerCard2;

	Compare(PlayerTotal, ComputerTotal);

	return 0;
}