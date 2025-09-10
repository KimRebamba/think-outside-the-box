#include <iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

void header() {

	system("CLS");
	cout << "\n\t\t\t\t\t\t\t\t\t\t/==========================================================================\\" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||                                                                        ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||  _____ _   _ ___ _   _ _  __   ___  _   _ _____ ____ ___ ____  _____   ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t|| |_   _| | | |_ _| \\ | | |/ /  / _ \\| | | |_   _/ ___|_ _|  _ \\| ____|  ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||   | | | |_| || ||  \\| | ' /  | | | | | | | | | \\___ \\| || | | |  _|    ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||   | | |  _  || || |\\  | . \\  | |_| | |_| | | |  ___) | || |_| | |___   ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||  _|_|_|_| |_|___|_| \\_|_|\\_\\__\\___/_\\___/  |_| |____/___|____/|_____|  ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t|| |_   _| | | | ____| | __ ) / _ \\ \\/ /  \\ \\                             ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||   | | | |_| |  _|   |  _ \\| | | \\  /  (_) |                            ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||   | | |  _  | |___  | |_) | |_| /  \\   _| |       By Kim.              ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||   |_| |_| |_|_____| |____/ \\___/_/\\_\\ (_) |                            ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||                                        /_/                             ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t||                                                                        ||" << endl;
	cout << "\t\t\t\t\t\t\t\t\t\t\\==========================================================================/\n\n\n";
}

void instructions_1() {

	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 1 >>\n\n";
	cout << "\t\t\t\t\t\t\t\tGoal:\n"
		<< "\t\t\t\t\t\t\t\t       -> GET THAT ASTERISK. You are 'P'.\n\n";
	cout << "\t\t\t\t\t\t\t\tInstructions:\n\n"
		<< "\t\t\t\t\t\t\t\tW -> UP\n"
		<< "\t\t\t\t\t\t\t\tA -> LEFT\n"
		<< "\t\t\t\t\t\t\t\tS -> DOWN\n"
		<< "\t\t\t\t\t\t\t\tD -> RIGHT\n";
}

void maze_print(char boundaries[19][23]) {
	for (int column = 0; column < 19; column++) {
		cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t ";
		for (int row = 0; row < 23; row++) {
			cout << boundaries[column][row];
		}
	}
}

int menu_print() {

	while (true) {

		header();

		cout << "\t\t\t\t\t\t\t\t\t\t     A series of games where you either have to \"think-outside-the-box\"\n\t\t\t\t\t\t\t\t\t\t\t\t     or just have fun. Made with <3.\n\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t   << Choose a Game >>\n\n\n";
		cout << "\t\t(1) Simple Maze Game!\t\t\t\t\t\t\t\t(2) Rock, Paper, Scissors!\t\t\t\t\t    (3) Tic-Tac-Toe!\n\n";
		cout << "\t\t    ->  Think you're smart enough to get the asterisk?\t\t\t\t    ->  Think you could beat my AI?\t\t\t\t\t->  Think, Attack, & GO!\n\n";
		cout << "\t\t                     ################\t\t\t\t\t\t\t    _______          \t\t\t\t\t              -----------\n";
		cout << "\t\t                     #     ## # ### #\t\t\t\t\t\t\t---'   ____)____     \t\t\t\t\t             | X | O | X |\n";
		cout << "\t\t                    P   #   #   # # #\t\t\t\t\t\t\t          ______)    \t\t\t\t\t             | O | O | X |\n";
		cout << "\t\t                     # ###    #      *\t\t\t\t\t\t\t          _______)  PAPER!!!\t\t\t\t\t     | X | O | X |\n";
		cout << "\t\t                     #   ## # ## #  #\t\t\t\t\t\t\t          ______)    \t\t\t\t\t              -----------\n";
		cout << "\t\t                     ################\t\t\t\t\t\t\t---.__________)\n\n\n";


		cout << "\t\t                        \t\t\t\t\t\t        (4) Jokes Simulator!\n\n";
		cout << "\t\t                                                                                    ->  For when you just want to laugh :)\n "
			<< "\t\t        \n\n";

		cout << "\t\t                                                                                       +-----------------------------+" << endl;
		cout << "\t\t                                                                                       |  Barya ka ba?               |\n";
		cout << "\t\t                                                                                       |     Kasi umaga pa lang,     |\n";
		cout << "\t\t                                                                                       |         kailangan na kita.  |\n";
		cout << "\t\t                                                                                       +-----------------------------+\n";
		cout << "\t\t                                                                                                \\ (^ - ^) /\n";
		cout << "\t\t                                                                                                 \\       /\n";
		cout << "\t\t         \n";
		cout << "\t\t    \n\n";

		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t   Enter Game Number: ";
		int ask;
		cin >> ask;

		switch (ask) {
		case 1: case 2: case 3: case 4: case 5: case 6:
			return ask;
		}
	}
}

void game_1() {
	//18, 5
	char boundaries[19][23]{
		{"                      "},
		{" #################### "},
		{" #       ##  ##     # "},
		{" # #### ####  ####   *"},
		{" #  ##   # ##       # "},
		{" # ##   ##  #### ## # "},
		{"    #  ##  ## #  #### "},
		{" # #####    #      ## "},
		{" #   ####  ## ####  # "},
		{" ## ## #  ##  ###  ## "},
		{" #     ##    ## ## ## "},
		{" ## ##  ###   #  #### "},
		{" ##  ##     ####   ## "},
		{" #    ## #        ### "},
		{" ##  ### ## ###  #### "},
		{" ## ###   ######  ### "},
		{" #           ##    ## "},
		{" #################### "},
		{"                      "} };

	bool game_finished = false;
	string position{};

	int y = 6, x = 0; //player's initial position

	boundaries[y][x] = 'P';

	while (!game_finished) {

		header();

		instructions_1();
		maze_print(boundaries);

		cout << "\n\t\t\t\t\t\t\t\tEnter Move: ";
		getline(cin, position);

		boundaries[y][x] = ' ';

		switch (position[0]) {
		case 'W': case 'w':
			if (y >= 0 && (boundaries[y - 1][x] == ' ' || boundaries[y - 1][x] == '*')) {
				y--;
			}
			break;
		case 'A': case 'a':
			if (x >= 0 && (boundaries[y][x - 1] == ' ' || boundaries[y][x - 1] == '*')) {
				x--;
			}
			break;
		case 'S': case 's':
			if (y >= 0 && (boundaries[y + 1][x] == ' ' || boundaries[y + 1][x] == '*')) {
				y++;
			}
			break;
		case 'D': case 'd':
			if (x >= 0 && (boundaries[y][x + 1] == ' ' || boundaries[y][x + 1] == '*')) {
				x++;
			}
			break;
		}

		if (x == 16 && y == 5) {
			boundaries[4][17] = '#';
		}

		if (boundaries[y][x] == '*') {

			boundaries[y][x] = 'P';

			header();

			cout << "\t\t\t\t\t\t\t\t\t\tMAP FINISHED!";

			maze_print(boundaries);

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tCongratulations, you got the asterisk!\n\n";
			game_finished = true;
		}

		boundaries[y][x] = 'P';
	}
}

void asciiArt(int choice) {

	if (choice == 0) {  // Rock
		cout << "\t\t\t\t\t\t\t\t\t\t\t   _______\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t  /       \\ \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t /         \\ \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t|           |     ROCK!!!\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t \\         / \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t  \\_______/ \n";
	}
	else if (choice == 1) {  // Paper
		cout << "\t\t\t\t\t\t\t\t\t\t\t  _______ \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t |       | \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t |       | \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t |       |       PAPER!!!\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t |       | \n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t |_______| \n";
	}
	else if (choice == 2) {  // Scissors
		cout << "\t\t\t\t\t\t\t\t\t\t\t   _       ,/'\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t  (_).  ,/'\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t   _  ::         SCISSORS!!!\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t  (_)'  `\\.\n";
		cout << "\t\t\t\t\t\t\t\t\t\t\t           `\\.\n";
	}
}
void game_2() {

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 2 >>\n\n";

	int totalRounds = 0;
	int pointsNeeded = 0;

	bool made_choice = false;

	while (!made_choice) {

		cout << "\t\t\t\t\t\t\tEnter total rounds for Best-of-X (1, 3, or 7): ";
		cin >> totalRounds;

		switch (totalRounds) {
		case 1:
			pointsNeeded = 1; // Best-of-1 requires 1 point to win
			break;
		case 3:
			pointsNeeded = 2; // Best-of-3 requires 2 points to win
			break;
		case 7:
			pointsNeeded = 4; // Best-of-7 requires 4 points to win
			break;
		}

		header();
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 2 >>\n\n";

		if (pointsNeeded > 0) made_choice = true;
	}

	int userScore = 0;
	int computerScore = 0;
	int round = 1;

	while (userScore < pointsNeeded && computerScore < pointsNeeded) {

		bool validChoice = false;
		int userChoice;

		while (!validChoice) {

			header();
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 2 >>\n\n";

			cout << "\t\t\t\t\t\t\t\t\t\t  Current Round: " << round++ << endl;
			cout << "\n\t\t\t\t\t\t\t\t\t\t  ->  Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
			cin >> userChoice;

			switch (userChoice) {
			case 0: case 1: case 2: case 47: validChoice = true;
			}
		}

		if (userChoice == 47) {

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t  You chose: " << userChoice << endl << endl;

			cout << "\t\t\t\t\t\t\t\t\t\t\t_______/]_________[\\___" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t|    ____     ___|---------------|=====      AK - 47!!!" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t|_ /      /  /_|   |" << endl;
			cout << "\t\t\t\t\t\t\t\t\t\t\t         /_/     \\_ \\" << endl;

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t  \\\\ Player shoots computer, what an awful way to end the game." << endl;

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Enter Any Key to Continue.. ";
			string get;
			getline(cin >> ws, get);

			header();
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 2 >>\n\n";

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Score - You: " << 99 << " Computer: " << computerScore << endl;
			cout << "\n\t\t\t\t\t\t\t\t\t\t  Congratulations, you won the game..?" << endl << endl << endl;

			return;
		}

		int computerChoice = rand() % 3;  // 0=Rock, 1=Paper, 2=Scissors

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t  You chose: " << userChoice << endl << endl;
		asciiArt(userChoice);

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Computer chose: " << computerChoice << endl << endl;
		asciiArt(computerChoice);

		if (userChoice == computerChoice) {
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t     It's a tie!" << endl;
			round--;
		}
		else if ((userChoice == 0 && computerChoice == 2) ||  // Rock beats Scissors
			(userChoice == 1 && computerChoice == 0) ||  // Paper beats Rock
			(userChoice == 2 && computerChoice == 1)) { // Scissors beats Paper
			userScore++;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t   You win this round!" << endl;
		}
		else {
			computerScore++;
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tComputer wins this round!" << endl;
		}

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Score - You: " << userScore << " Computer: " << computerScore << endl;

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Enter Any Key to Continue.. ";
		string get;
		getline(cin >> ws, get);
	}

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 2 >>\n\n";

	cout << "\t\t\t\t\t\t\t\t\t\tFinal Score - You: " << userScore << " Computer: " << computerScore << endl;
	if (userScore == pointsNeeded) {
		cout << "\n\t\t\t\t\t\t\t\t\t\t  Congratulations, you won the game!" << endl << endl << endl;
	}
	else if (userScore != pointsNeeded) {
		cout << "\n\t\t\t\t\t\t\t\t\t\t  Computer wins the game. Better luck next time!" << endl << endl << endl;
	}
}

bool check_winner(char platform[7][14], char character) {

	// Horizontal checks
	for (int i = 1; i <= 5; i += 2) {
		if (platform[i][2] == character && platform[i][6] == character && platform[i][10] == character)
			return true;
	}

	// Vertical checks
	for (int i = 2; i <= 10; i += 4) {
		if (platform[1][i] == character && platform[3][i] == character && platform[5][i] == character)
			return true;
	}

	// Diagonal checks
	if ((platform[1][2] == character && platform[3][6] == character && platform[5][10] == character) || (platform[1][10] == character && platform[3][6] == character && platform[5][2] == character)) {
		return true;
	}

	return false;
}

void platform_print(char platform[7][14]) {

	for (int i = 0; i < 7; i++) {
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       ";
		for (int j = 0; j < 14; j++) {
			cout << platform[i][j];
		}
		cout << endl;
	}
}
void game_3()
{

	char platform[7][14]{
		" ----------- ",
		"| 1 | 2 | 3 |",
		" ----------- ",
		"| 4 | 5 | 6 |",
		" ----------- ",
		"| 7 | 8 | 9 |",
		" ----------- "
	};

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";

	bool valid_put = false;

	char user_pick, computer_pick;

	while (!valid_put) {

		cout << "\n\n\t\t\t\t\t\t\t\t\t\t Choose your pick (X or O): ";
		char pick;
		cin >> pick;

		switch (pick) {
		case 'X': case 'x':
			user_pick = 'X';
			computer_pick = 'O';
			valid_put = true;
			break;
		case 'O': case 'o':
			user_pick = 'O';
			computer_pick = 'X';
			valid_put = true;
			break;
		}
	}

	for (int i = 0; i < 9; i++) {

		bool valid_num = false;

		if (i % 2 == 0) {

			while (!valid_num) {

				header();
				cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";

				platform_print(platform);

				cout << "\n\t\t\t\t\t\t\t\t\t\t It's your turn!\n";

				cout << "\n\n\t\t\t\t\t\t\t\t\t\t Enter # to Replace: ";
				int num;
				cin >> num;

				switch (num) {
				case 1:
					if (platform[1][2] == '1') {
						platform[1][2] = user_pick;
						valid_num = true;
						break;
					}

					else continue;
				case 2:
					if (platform[1][6] == '2') {
						platform[1][6] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 3:
					if (platform[1][10] == '3') {
						platform[1][10] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 4:
					if (platform[3][2] == '4') {
						platform[3][2] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 5:
					if (platform[3][6] == '5') {
						platform[3][6] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 6:
					if (platform[3][10] == '6') {
						platform[3][10] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 7:
					if (platform[5][2] == '7') {
						platform[5][2] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 8:
					if (platform[5][6] == '8') {
						platform[5][6] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				case 9:
					if (platform[5][10] == '9') {
						platform[5][10] = user_pick;
						valid_num = true;
						break;
					}
					else continue;
				}
			}
		}
		else {

			int computer_num = 0;

			while (!valid_num) {

				computer_num = (rand() % 9) + 1;

				switch (computer_num) {
				case 1:
					if (platform[1][2] == '1') {
						platform[1][2] = computer_pick;
						computer_num = 1;
						valid_num = true;
						break;
					}
					else continue;
				case 2:
					if (platform[1][6] == '2') {
						platform[1][6] = computer_pick;
						computer_num = 2;
						valid_num = true;
						break;
					}
					else continue;

				case 3:
					if (platform[1][10] == '3') {
						platform[1][10] = computer_pick;
						computer_num = 3;
						valid_num = true;
						break;
					}
					else continue;
				case 4:
					if (platform[3][2] == '4') {
						platform[3][2] = computer_pick;
						computer_num = 4;
						valid_num = true;
						break;
					}
					else continue;
				case 5:
					if (platform[3][6] == '5') {
						platform[3][6] = computer_pick;
						computer_num = 5;
						valid_num = true;
						break;
					}
					else continue;
				case 6:
					if (platform[3][10] == '6') {
						platform[3][10] = computer_pick;
						computer_num = 6;
						valid_num = true;
						break;
					}
					else continue;
				case 7:
					if (platform[5][2] == '7') {
						platform[5][2] = computer_pick;
						computer_num = 7;
						valid_num = true;
						break;
					}
					else continue;
				case 8:
					if (platform[5][6] == '8') {
						platform[5][6] = computer_pick;
						computer_num = 8;
						valid_num = true;
						break;
					}
					else continue;
				case 9:
					if (platform[5][10] == '9') {
						platform[5][10] = computer_pick;
						computer_num = 9;
						valid_num = true;
						break;
					}
					else continue;
				}
			}

			header();

			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";

			platform_print(platform);

			cout << "\n\t\t\t\t\t\t\t\t\t\t It's the computer's turn!\n";
			cout << "\n\n\t\t\t\t\t\t\t\t\t\t Computer chose: " << computer_num;

			cout << "\n\n\t\t\t\t\t\t\t\t\t\t  Enter Any Key to Continue.. ";
			string get;
			getline(cin >> ws, get);

		}

		if (check_winner(platform, user_pick)) {
			header();
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";
			platform_print(platform);
			cout << "\n\t\t\t\t\t\t\t\t\t\tCongratulations! You won! \\( - _ -)/\n\n";
			return;
		}
		else if (check_winner(platform, computer_pick)) {
			header();
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";
			platform_print(platform);
			cout << "\n\t\t\t\t\t\t\t\t\t\tSorry, you lost. Computer wins! \\(^ - ^ )/\n\n";
			return;
		}
	}

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 3! >>\n\n";
	platform_print(platform);
	cout << "\n\t\t\t\t\t\t\t\t\t\tIt's a tie! ( ~ _ ~ )\n\n";
	return;
}
void duck_print() {
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t            \\\\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t             \\\\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                _.-. \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t          __.-' ,  \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t         '--'-'._   \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                 '.  \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                  )-- \\ __.--._\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                 /   .'        '--.\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                .               _/-._\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                :       ____._/   _-'\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                 '._          _.'-'\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                    '-._    _.'\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                        \\_|/\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                       __||| \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t                      >__/  \n\n\n";
}

void game_4() {

	const string jokes[] = {
		"Anong sabi ng tambay kapag nagpapasalamat siya?\n\n\t\t\t\t\t\t\t\t\t\t\t'Thank you and Jobless you'",
		"Saan lumiliko ang mga spaceship? Saturn.",
		"'Mahilig ka ba mag-binge watch?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Minsan pag maganda, tuloy-tuloy ako manood. ikaw ba?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Hindi, gusto ko pag nanonood rinig ko yung sounds'",
		"'I love your smile.'\n\n\t\t\t\t\t\t\t\t\t\t\t'aww. Bakit?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Because my favorite color is yellow.'",
		"'Kapag ba ang Baboy nagkamali, need din ba siyang turuan ng Lechon?'",
		"'Kapag pinugutan mo ng ulo yung isang tao, kasama parin ba sila sa head count?'",
		"'Anong tawag sa pari na nag fli-fliptop?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Edi priestyle.'",
		"'Alam mo kung ano gusto ko? Earrings'\n\n\t\t\t\t\t\t\t\t\t\t\t'Ha? Earrings?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Gusto ko H-Ikaw.'",
		"'Anong isda ang marunong mag-karate?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Edi.. TilapYAAA!!'",
		"'Ano ang sapatos ng mga magnanakaw?'\n\n\t\t\t\t\t\t\t\t\t\t\t'Robber shoes!'",
		"'Ano ang sinabi ng isda nung namamatay na siya?'\n\n\t\t\t\t\t\t\t\t\t\t\t'I'm daing!'",
		"Meron akong joke tungkol sa puno\n\n\t\t\t\t\t\t\t\t\t\t\tWag nalang, Medyo green eh",
		"Meron akong joke tungkol sa mayonnaise\n\n\t\t\t\t\t\t\t\t\t\t\tWag nalang, Baka ma-spread eh",
		"Two whales walk into a bar. The bar-man says to the first whale, 'Can I get you a drink?'.\n\n\t\t\t\t\t\t\t\t\t\t\tThe first whale responds: 'WwhwhheheeeoooooaaaaaoooohhhhhaaahhheeeeWwwWWWWOOOOOaaahhaoooooOOOOOAAAEEeeeeAaaaaaEEEEEeooohhhhhhaaahhhh wwoooooowwwwhhhaaaaeeeeeehhhaaaahhhoooowwwwoooaAAAAAAAAAoooooWWEeee....'\n\n\t\t\t\t\t\t\t\t\t\t\tThe second whale interrupts, 'Shut up Steve, you're drunk.'",
		"Why don't skeletons fight each other?\n\n\t\t\t\t\t\t\t\t\t\t\tThey don't have the guts.",
		"What did the ocean say to the beach?\n\n\t\t\t\t\t\t\t\t\t\t\tNothing, it just waved.",
		"How do cows stay up to date with current events?\n\n\t\t\t\t\t\t\t\t\t\t\tThey read the moo-s-paper.",
		"Why did the coffee file a police report?\n\n\t\t\t\t\t\t\t\t\t\t\tIt got mugged.",
		"What's a skeleton's least favorite room?\n\n\t\t\t\t\t\t\t\t\t\t\tThe living room.",
		"What did one hat say to the other?\n\n\t\t\t\t\t\t\t\t\t\t\tStay here, I'm going on ahead!",
		"What's long, brown and sticky?\n\n\t\t\t\t\t\t\t\t\t\t\tA stick.",
		"Why did the computer go to the doctor?\n\n\t\t\t\t\t\t\t\t\t\t\tIt had a virus!",
		"Whiteboards are remarkable!",
		"Geology rocks!",
		"One bird can't make a pun.\n\n\t\t\t\t\t\t\t\t\t\t\tBut toucan.",
		"I bought a book on antigravity. I couldn't put it down.",
		"What is the oldest fish?\n\n\t\t\t\t\t\t\t\t\t\t\tCentury Tuna.",
		"Paano ka magkakaroon ng friend sa Ateneo?\n\n\t\t\t\t\t\t\t\t\t\t\tEdi ADMU!",
		"Anong tawag sa superior ng mga madre?\n\n\t\t\t\t\t\t\t\t\t\t\tEdi Nun of the Above!",
		"Ano tawag sa bagong cr?\n\n\t\t\t\t\t\t\t\t\t\t\tEdi banew.",
		"Anong pagkain ang mabilis? Fast food.\n\n\t\t\t\t\t\t\t\t\t\t\tEh ang mas mabilis? Pasta.\n\n\t\t\t\t\t\t\t\t\t\t\tEh pinakamabilis? Sopas!",
		"May joke ako about airport kaso NAIA ako ih.",
		"I used to be a baker, but I couldn't make enough dough.",
		"I'm friends with all electricians. We have good current connections.",
		"I don't trust stairs. They're always up to something.",
		"I bought some shoes from a drug dealer. I don't know what they were laced with, \n\n\t\t\t\t\t\t\t\t\t\t\tbut I've been tripping all day.",
		"I have a fear of speed bumps, but I'm slowly getting over it.",
		"Why did the blind man fall in the well?\n\n\t\t\t\t\t\t\t\t\t\t\tBecause he couldn't see that well.",
		"What's blue and smells like red paint?\n\n\t\t\t\t\t\t\t\t\t\t\tBlue paint.",
		"What do you get if you throw a blue towel into the red sea?\n\n\t\t\t\t\t\t\t\t\t\t\tA wet towel.",
		"What's the difference between a piano and a tuna?\n\n\t\t\t\t\t\t\t\t\t\t\tYou can tuna piano, but you can't piano a tuna.",
		"A blind man walked into a bar. And a chair. And a table.",
		"What do you say when you see 3 whales?\n\n\t\t\t\t\t\t\t\t\t\t\tWhale whale whale, what do we have here?",
		"How does Moses make his tea?\n\n\t\t\t\t\t\t\t\t\t\t\tHebrews it.",
		"I only know 25 letters of the alphabet; I don't know why.",
		"She told me I was average, but she was just being mean.",
		"C++ is like an abusive relationship.\n\n\t\t\t\t\t\t\t\t\t\t\tOne day she's loving you, \n\n\t\t\t\t\t\t\t\t\t\t\tbut the next day she's beating the shit out of you for the smallest mistake.\n\n\t\t\t\t\t\t\t\t\t\t\tBut you just can't help but stay with her because she can do a lot of things that others can't.",
		"The code doesn't work... Why?\n\n\t\t\t\t\t\t\t\t\t\t\tThe code works... Why?",
		"There are only 10 kinds of people in this world: \n\n\t\t\t\t\t\t\t\t\t\t\tthose who know binary and those who don't.",
		"How many programmers does it take to change a light bulb?\n\n\t\t\t\t\t\t\t\t\t\t\tNone.. It's a hardware problem."
	};

	for (int i = 0; i < 50; i++) {
		header();
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t       << GAME 4 >>\n\n";
		cout << "\t\t\t\t\t\t\t\t\t\t  Instructions: " << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t       ->  The most corniest jokes I could find.. :>" << endl;
		cout << "\t\t\t\t\t\t\t\t\t\t       ->  Y for Continue, N to End Game" << endl << endl << endl << endl;

		cout << "\t\t\t\t\t\t\t\t\t\t\t" << jokes[i] << endl << endl << endl;

		duck_print();

		cout << "\t\t\t\t\t\t\t\t\t\t  Option (Y/N): ";
		char opt;
		cin >> opt;

		cout << endl;

		switch (opt) {
		case 'Y': case 'y': continue; break;
		default: return;
		}
	}
}

int game_5() {
	int secretNumber, userGuess, attempts = 0;
	const int MAX_ATTEMPTS = 10;

	srand(time(0));

	secretNumber = rand() % 100 + 1;

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t   << SECRET GAME 5 >>\n\n";
	cout << "\t\t\t\t\t\t\t\t\tGuess the secret number between 1 and 100.\n";
	cout << "\t\t\t\t\t\t\t\t\tYou have " << MAX_ATTEMPTS << " attempts to guess it correctly.\n\n";

	while (attempts < MAX_ATTEMPTS) {
		cout << "\t\t\t\t\t\t\t\t\tAttempt " << attempts + 1 << "/" << MAX_ATTEMPTS << ": Enter your guess: ";
		cin >> userGuess;

		if (userGuess < secretNumber) {
			cout << "\t\t\t\t\t\t\t\t\tYour guess is too low. Try again!\n\n";
		}
		else if (userGuess > secretNumber) {
			cout << "\t\t\t\t\t\t\t\t\tYour guess is too high. Try again!\n\n";
		}
		else {
			cout << "\n\t\t\t\t\t\t\t\t\tCongratulations! You've guessed the secret number " << secretNumber << "!\n\n";
			cout << "\t\t\t\t\t\t\t\t\tIt took you " << attempts + 1 << " attempts.\n\n";
			return 0;
		}

		attempts++;
	}

	header();
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t   << SECRET GAME 5 >>\n\n";
	cout << "\t\t\t\t\t\t\t\t\tSorry, you've run out of attempts! The secret number was " << secretNumber << ".\n\n";
}

void end_menu() {

	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\"THANKS FOR PLAYING THE GAME, MAN!\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t     SPREAD LOVE AND POSITIVITY! ALWAYS!\"\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t              \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t _____         \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t| | | |/\\       \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t|_|_|_|\\ \\       \\ \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t|        / \n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t\\_______/            (  ( ) ) ( )  )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t \\______\\           ( ( ( ( )  )  ) )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t \\       \\         ( ( )) ) (   ) ( ( )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t  \\       \\        ( (__.-.___.-.__) )\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t   \\       \\        /---._.---._.--- \\\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t    \\       \\       \\||   '  \\'    ||/\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t     \\       \\       |||     _)   |||\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t      \\       \\       ||||///\\\\\\\\||||\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t       \\       \\_____/ ||||\\__/||||\\___\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t        \\             \\ |||||||||| /   \\\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t         \\             \\  ||||||  /     \\\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\t\t          \\_____ \n";
	cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t- Kim\n\n";

	cout << "\tWhere I got this wonderful ASCII Art: https://ascii.co.uk/art/rock\n\n";
}
int main() {

	bool game_loop = false;

	while (!game_loop) {

		int game_num = menu_print();

		switch (game_num) {
		case 1:
			game_1();
			break;
		case 2:
			game_2();
			break;
		case 3:
			game_3();
			break;
		case 4:
			game_4();
			break;
		case 5:
			game_5();
			break;
		}

		cout << "\t\t\t\t\t\t\t\t\t\t\tGo Back to Menu? (Y/N): ";
		char ask;
		cin >> ask;

		switch (ask) {
		case 'n': case 'N':
			header();
			end_menu();
			game_loop = true;
			return 0;
		}

	}

}