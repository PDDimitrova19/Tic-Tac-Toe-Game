#include <iostream>
using namespace std;
void GameName() {
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << endl;
	cout << "    ///////    /////////     ////////         ////////     ////     ///////" << endl;
	cout << "      //          //        //                  //       //  //    //" << endl;
	cout << "     //          //        //                  //      //   //    //" << endl;
	cout << "    //          //        //        i          //     ////////    //   " << endl;
	cout << "   //       ////////     ////////            //    //     //    ///////" << endl;
	cout << endl;
	cout << "                       ///////     //////      ///////" << endl;
	cout << "                         //      //    //     //" << endl;
	cout << "                        //      //    //     /////// " << endl;
	cout << "                       //      //    //     //" << endl;
	cout << "                      //       //////      ////////" << endl;
	cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
	cout << endl;
}
void GameBoard() {
	cout << endl;
	cout << "                     ----------------------------- " << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    1    |    2    |    3    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |-----------------------------|" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    4    |    5    |    6    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |-----------------------------|" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                    |    7    |    8    |    9    |" << endl;
	cout << "                    |         |         |         |" << endl;
	cout << "                     -----------------------------" << endl;
}
void GameBetween2Players() {
	cout << "\n" << "                   Player 1 (X) ------- Player 2 (O)" << endl;
	GameBoard();

}
void GameBetweenComputerAnd1Player() {
	cout << "\n" << "                   Player 1 (X) ------- Computer (O)" << endl;
	GameBoard();
}
int main()
{
	GameName();
	int NumberChoice;
	cout << "                Enter number '2' for game between 2 Players." << endl;
	cout << "           Enter number '1' for game between 1 Player and Computer." << endl;
	cout << "                            Enter number: ";
	cin >> NumberChoice;
	cout << endl;
	if (NumberChoice == 1) {
		GameBetweenComputerAnd1Player();
	}
	else if (NumberChoice == 2) {
		GameBetween2Players();
	}
	else {
		cout << "Incorrect input!";
	}
}