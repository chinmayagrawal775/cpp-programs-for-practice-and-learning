/********************************************************************************************************/
/********************************************* TIC-TAC-TOE **********************************************/
/**************************************** Written by - CHINMAY AGRAWAL **********************************/
/***** This is a C++ code of a TIC-TAC-TOE GAME which can be played by 2 players, and have 3 rounds *****/
/********************************************************************************************************/


#include<iostream.h>										// for basic i/o operations.
#include<ctype.h>										// for functions like- isdigit(),isalpha().

//using namespace std;

//global variables...
char game_matrix[9];									// for game matrix and positions.
char player1_symbol='X';								// symbol of 1st player.
char player2_symbol='O';								// symbol of 2nd player.
int  round=1;											// keep track of rounds in game.
int  player1_point=0;									// keep track of no. of games won by 1st player,as it increases by 1 each time when 1st player won.
int  player2_point=0;									// keep track of no. of games won by 2nd player,as it increases by 1 each time when 1st player won..
int  no_of_games_draw=0;								// keep track of no. of games drawn.

// function declarations...
void initialse_game_matrix();
void show_game_info();
void show_game_matrix();
void start_game();
int who_win();
char check_if_someone_win();
void show_results();

// this function intitialise the value of each 9 positions of a matrix,so that user can enter the position number to play the game.
void initialse_game_matrix()
{
	game_matrix[0]='1';
	game_matrix[1]='2';
	game_matrix[2]='3';
	game_matrix[3]='4';
	game_matrix[4]='5';
	game_matrix[5]='6';
	game_matrix[6]='7';
	game_matrix[7]='8';
	game_matrix[8]='9';
}

// this function display the game introduction & keeps track of number of rounds played.
void show_game_info()
{
	cout<<"\n\n\t\t\t\tTIC TAC TOE\n\n";
	cout<<"\nSymbol of player 1: X";
	cout<<"\nSymbol of player 2: O\n";
	cout<<"\nRound"<<round;
	round++;								 			// value of round will increases by one each time when display will be called.
}

// this function shows the updated current matrix each time when called. Matrix is formatted using escape sequences like \n,\t.
void show_game_matrix()
{
	cout<<"\n\n\n\n";
	cout<<"\t\t\t\t "<<game_matrix[0]<<" | "<<game_matrix[1]<<" | "<<game_matrix[2]<<"\n";
	cout<<"\t\t\t\t---|---|---\n";
	cout<<"\t\t\t\t "<<game_matrix[3]<<" | "<<game_matrix[4]<<" | "<<game_matrix[5]<<"\n";
	cout<<"\t\t\t\t---|---|---\n";
	cout<<"\t\t\t\t "<<game_matrix[6]<<" | "<<game_matrix[7]<<" | "<<game_matrix[8]<<"\n";
}

// this is the main driver function of the game, which runs the game.
void start_game()
{
	int position;										// for holding the position at which player wants to enter his symbol.

	for(int i=0;i<=8;i++)								// this loop iterates for maximum 9 times, so that players can play the game.
	{
		if(i%2==0)										// check if it is a even number, then there will be a chance of 1st player,otherwise else part will be executed.
		{
			cout<<"\nplayer 1 chance(X): ";
			cin>>position;								// takes positon number entered by user.
			game_matrix[position-1]=player1_symbol;		// allocates the symbol of 1st player at the position enterd by 1st user.
			if(who_win())								// checks if some player win the round to break out of the loop and give control to main() ,so that new round can be started.
			{
				break;
			}
		}
		else
		{
			cout<<"\nplayer 2 chance(O): ";
			cin>>position;								// executed when it is a odd number, then there is the chance of 2nd player.
			game_matrix[position-1]=player2_symbol;		// allocates the symbol of 2nd player at the position enterd by 2nd player.
			if(who_win())								// checks if some player win the round to break out of the loop and give control to main(),so that new round can be started.
			{
				break;
			}
		}
	}
	if(isdigit(check_if_someone_win()))					// this will executed only if none of the player wins the round & shows no more chances are left.
	{
		cout<<"\n\n\t\t\tGame is drawn....!!!!";
		no_of_games_draw++;								// increase the number of games draw.
	}
}

// this function will show the winner of the particular round, if nobody wins then it clears the console and show the updated martix.
int who_win()
{
	if(isalpha(check_if_someone_win()))					// checks if some player wins the game.
	{
		int r=check_if_someone_win();					// this variable holds the name of the player who wins,which is returned by end funtion.
		if(r=='o')										// this will execute if 1st player wins the round.
		{
			system("cls");
			show_game_matrix();
			cout<<"\n\n\t\t\tplayer 1 won the round"<<round-1<<"....!!!!";
			player1_point++;
		}
		else if(r=='t')
		{
			system("cls");
			show_game_matrix();
			cout<<"\n\n\t\t\tplayer 2 won the round"<<round-1<<"....!!!!";
			player2_point++;
		}
		return 1;										// after showing the results it will return 1 to break the for loop of calling funtion[ start() ].
	}
	system("cls");
	show_game_matrix();									// if nobody wins then it clears the console and show the updated martix.
}

// this function checks if is there is any player who wins a round or not, and return the result accordingly.
char check_if_someone_win()
{
	char w1='o';										// this value will be returned if 1st player wins a round.
	char w2='t';										// this value will be returned if 2nd player wins a round.

	if( (game_matrix[0]==player1_symbol && game_matrix[1]==player1_symbol && game_matrix[2]==player1_symbol) || (game_matrix[3]==player1_symbol && game_matrix[4]==player1_symbol && game_matrix[5]==player1_symbol) || (game_matrix[6]==player1_symbol && game_matrix[7]==player1_symbol && game_matrix[8]==player1_symbol) )
		return w1;
	
	else if( (game_matrix[0]==player2_symbol && game_matrix[1]==player2_symbol && game_matrix[2]==player2_symbol) || (game_matrix[3]==player2_symbol && game_matrix[4]==player2_symbol && game_matrix[5]==player2_symbol) || (game_matrix[6]==player2_symbol && game_matrix[7]==player2_symbol && game_matrix[8]==player2_symbol) )
		return w2;
	
	else if( (game_matrix[0]==player1_symbol && game_matrix[3]==player1_symbol && game_matrix[6]==player1_symbol) || (game_matrix[1]==player1_symbol && game_matrix[4]==player1_symbol && game_matrix[7]==player1_symbol) || (game_matrix[2]==player1_symbol && game_matrix[5]==player1_symbol && game_matrix[8]==player1_symbol) )
		return w1;
		
	else if( (game_matrix[0]==player2_symbol && game_matrix[3]==player2_symbol && game_matrix[6]==player2_symbol) || (game_matrix[1]==player2_symbol && game_matrix[4]==player2_symbol && game_matrix[7]==player2_symbol) || (game_matrix[2]==player2_symbol && game_matrix[5]==player2_symbol && game_matrix[8]==player2_symbol) )
		return w2;
		
	else if( (game_matrix[0]==player1_symbol && game_matrix[4]==player1_symbol && game_matrix[8]==player1_symbol) || (game_matrix[2]==player1_symbol && game_matrix[4]==player1_symbol && game_matrix[6]==player1_symbol) )
		return w1;
		
	else if( (game_matrix[0]==player2_symbol && game_matrix[4]==player2_symbol && game_matrix[8]==player2_symbol) || (game_matrix[2]==player2_symbol && game_matrix[4]==player2_symbol && game_matrix[6]==player2_symbol) )
		return w2;
		
	else return 48;										// this value will be returned if none of the player wins a round.
}

//this function will call at the end of program,and show the end results and winner of the game.
void show_results()
{
	system("cls");
	cout<<"\n\n\n\n\n";
	cout<<"\n\t\t\tpoints of player one:- "<<player1_point;
	cout<<"\n\t\t\tpoints of player two:- "<<player2_point;
	cout<<"\n\t\t\tnumber of games draw:- "<<no_of_games_draw;
	if(player1_point>player2_point)
		cout<<"\n\n\n\n\t\t!!!!....player 1 won the game....!!!!";
	
	else if(player1_point<player2_point)
		cout<<"\n\n\n\n\t\t!!!!....player 2 won the game....!!!!";
	
	else if(player1_point==player2_point)
		cout<<"\n\n\n\n\t\t!!!!....game is drawn....!!!!";
}

// this is the main program who control the execution of game...
int main()
{
	while(round!=4)
	{
		system("cls");
		show_game_info();
		initialse_game_matrix();
		show_game_matrix();
		start_game();
		if(round<4)
			cout<<"\n\n\n\n\n\n\n\n\npress any key to start the next round...!!...";
		else
			cout<<"\n\n\n\n\n\n\n\n\npress any key to see the results...!!...";
	
	system("pause") ;
	}
	show_results();
	system("pause") ;
	
	return 0;
}