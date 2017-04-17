#include <iostream>
#include <stdlib.h>

using namespace std;
void showboard(char board[][3]);
void player1(char board[][3]);
void comp(char board[][3]);
void comp2(char board[][3]);
void comp3(char board[][3]);
void player2(char board[][3]);
bool gamewon1(char board[][3]);
bool gamewon2(char board[][3]);

int main(){
		char board[3][3]= {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
	int cp,d_l,x=1;
	cout<<"\t\t\tWELCOME TO TIC TAC TOE GAME\n\t\t\t  Developed by Faizan Shah"<<endl;
	cout<<"\t\t\t\t and Usama Farman\n";
	cout<<"\n\n\n";
	cout<<"Who do you want to play with?\n1.Computer(1)\n2.Another Player(2)\n";
	cin>>cp;
	if(cp==1){
	system("cls");
	cout<<"\t\t\tWELCOME TO TIC TAC TOE GAME\n\t\t\t  Against the computer"<<endl;
	cout<<"\n\n\n";
	cout<<"Kindly select difficulty level \n1.Easy(0)\n2.Medium(1)\n3.Hard(2)\n";
	cin>>d_l;
	if(d_l==0){
		system("cls");
	cout<<"\n\t\t\t\tEASY LEVEL\n";
	cout<<"You will be marked 'X' when you select while computer will be marked '0'\n\n";
	showboard(board);
	while(x<6){
	cout<<"\t\t\tYour Turn?";
	cout<<"\n\n\n\t\t\tWhich possition will you chose?\n";
	player1(board);
	system("cls");
	cout<<"\n\t\t\t\tEASY LEVEL\n";
	showboard(board);
	if(gamewon1(board)==true)
	{
	cout<<"Player won";
	break;
	}
	system("cls");
	if(x==5){
		x++;
		continue;
	}
	cout<<"\n\t\t\t\tEASY LEVEL\n";
	comp(board);
	showboard(board);
	if(gamewon2(board)==true){
		system("cls");
		showboard(board);
	cout<<"Computer won";
	break;
	}
	x++;
	}
	start: if(gamewon1(board)==false&&gamewon2(board)==false)
	cout<<"\nGame draw";
	}
	else if(d_l==1){
		system("cls");
		cout<<"\n\t\t\t\tMEDIUM LEVEL\n";
		cout<<"You will be marked 'X' when you select while computer will be marked '0'\n\n";
	showboard(board);
	while(x<6){
	cout<<"\t\t\tYour Turn?";
	cout<<"\n\n\n\t\t\tWhich possition will you chose?\n";
	player1(board);
	system("cls");
	cout<<"\n\t\t\t\tMEDIUM LEVEL\n";
	showboard(board);
	if(gamewon1(board)==true)
	{
	cout<<"Player won";
	break;
	}
	system("cls");
	if(x==5){
	 x++;
	 continue;
	 }
	cout<<"\n\t\t\t\tMEDIUM LEVEL\n";
	comp2(board);
	showboard(board);
	if(gamewon2(board)==true){
		system("cls");
	cout<<"\n\t\t\t\tMEDIUM LEVEL\n";
		showboard(board);
	cout<<"Computer won";
	break;
	}
	x++;
	}
	start1: if(gamewon1(board)==false&&gamewon2(board)==false)
	cout<<"\nGame draw";
	}
	if(d_l==2){
		system("cls");
		cout<<"\n\t\t\t\tHARD LEVEL\n";
		cout<<"You will be marked 'X' when you select while computer will be marked '0'\n\n";
	showboard(board);
	while(x<6){
	cout<<"\t\t\tYour Turn?";
	cout<<"\n\n\n\t\t\tWhich possition will you chose?\n";
	player1(board);
	system("cls");
	cout<<"\n\t\t\t\tHARD LEVEL\n";
	showboard(board);
	if(gamewon1(board)==true)
	{
	cout<<"Player won";
	break;
	}
	system("cls");
	cout<<"\n\t\t\t\tHARD LEVEL\n";
	if(x==5){
		x++;
	 continue;
	 }
	comp3(board);
	showboard(board);
	if(gamewon2(board)==true){
		system("cls");
		showboard(board);
	cout<<"Computer won";
	break;
	}
	x++;
	}
	 if(gamewon1(board)==false&&gamewon2(board)==false)
	cout<<"\nGame draw";
	}
}
	else if(cp==2){
		system("cls");
		cout<<"\t\t\tWELCOME TO TIC TAC TOE GAME\n\t\t\t  Against Another Player"<<endl;
		cout<<"\n\n\n";
		while(x<6) {
		cout<<"Player X turn.\n\n";
		showboard(board);
		player1(board);
		system("cls");
		showboard(board);
		if(gamewon1(board)==true){
			cout<<"\nplayer X won\n";
		break;
		}
		system("cls");
		if(x==5){
		x++;
		 continue;
		}
		cout<<"\n\n\nPlayer 0 turn: \n\n";
		showboard(board);
		player2(board);
		system("cls");
		showboard(board);
		if(gamewon2(board)==true){
		cout<<"\nPlayer 0 won: ";
		break;
		}
		cout<<endl<<endl;
		system("cls");
		x++;
		}
	if(gamewon1(board)==false&&gamewon2(board)==false) cout<<"\nGame draw \n";
	}
	cout<<"\nThe end: \n";
	return 0;

}
void showboard(char board[][3]){
	cout<<"\n-------------"<<endl;
	for(int x=0;x<3;x++){
	cout<<"| ";
		for(int y=0;y<3;y++){
			cout<<board[x][y]<<" | ";
		}
			cout<<"\n-------------"<<endl;
	}
}
void player1(char board[][3]){
x:	int row,col,pos;
	cout<<"Enter your location: ";
	cin>>pos;
	switch (pos){
		case 1: row=1;
				col=1;
				break;
		case 2: row=1;
				col=2;
				break;
		case 3: row=1;
				col=3;
				break;
		case 4: row=2;
				col=1;
				break;
		case 5: row=2;
				col=2;
				break;
		case 6: row=2;
				col=3;
				break;
		case 7: row=3;
				col=1;
				break;
		case 8: row=3;
				col=2;
				break;
		case 9: row=3;
				col=3;
				break;
	}
	if(board[row-1][col-1]=='X'||board[row-1][col-1]=='0'){
	cout<<"Enter a Valid Possition\n";
	goto x;
	}
	else board[row-1][col-1]='X';
}
void comp(char board[][3]){
	int row,col;
x:	row=(rand()%3)+1;
	col=(rand()%3)+1;
	if(board[row-1][col-1]=='X'||board[row-1][col-1]=='0')
	goto x;
	else{
			board[row-1][col-1]='0';
		}
	}
void player2(char board[][3]){
x:	int row,col,pos;
	cout<<"Enter your location: ";
	cin>>pos;
	switch (pos){
		case 1: row=1;
				col=1;
				break;
		case 2: row=1;
				col=2;
				break;
		case 3: row=1;
				col=3;
				break;
		case 4: row=2;
				col=1;
				break;
		case 5: row=2;
				col=2;
				break;
		case 6: row=2;
				col=3;
				break;
		case 7: row=3;
				col=1;
				break;
		case 8: row=3;
				col=2;
				break;
		case 9: row=3;
				col=3;
				break;
	}
		if(board[row-1][col-1]=='0'||board[row-1][col-1]=='X'){
			cout<<"Enter a Valid Position\n";
			goto x;
		}
	else {
	board[row-1][col-1]='0';
	}
}
bool gamewon1(char board[][3]){
	for (int x = 0; x < 3; x++) {
		if ('X' == board[x] [0] && 'X' == board[x] [1] && 'X' == board[x] [2]) return true;//all the horizontal rows are equal
	}
	for (int y = 0; y < 3; y++)
	    if ('X' == board[0] [y] && 'X' == board[1] [y] && 'X' == board[2] [y]) return true;//all the vertical rows are equal
		if ('X' == board[0] [0] && 'X' == board[1] [1] && 'X' == board[2] [2]) return true;//diagnal from  upper left to lower right
	  	if ('X' == board[0] [2] && 'X' == board[1] [1] && 'X' == board[2] [0]) return true;//diagonal from upper right to lower left

	  return false;
}
bool gamewon2(char board[][3]){
	for (int x = 0; x < 3; x++) {
		if ('0' == board[x] [0] && '0' == board[x] [1] && '0' == board[x] [2]) return true;
	}
	for (int y = 0; y < 3; y++)
	    if ('0' == board[0] [y] && '0' == board[1] [y] && '0' == board[2] [y]) return true;
		if ('0' == board[0] [0] && '0' == board[1] [1] && '0' == board[2] [2]) return true;
	  	if ('0' == board[0] [2] && '0' == board[1] [1] && '0' == board[2] [0]) return true;
	  return false;
}
void comp2(char board[][3]){
	//horixontally balance
		 if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]!='0') board[0][2]='0';
		else if(board[0][1]=='X'&&board[0][2]=='X'&&board[0][0]!='0') board[0][0]='0';
		else if(board[0][2]=='X'&&board[0][0]=='X'&&board[0][1]!='0') board[0][1]='0';


		else if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]!='0') board[1][2]='0';
		else if(board[1][1]=='X'&&board[1][2]=='X'&&board[1][0]!='0') board[1][0]='0';
		else if(board[1][2]=='X'&&board[1][0]=='X'&&board[1][1]!='0') board[1][1]='0';


		else if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]!='0') board[2][2]='0';
		else if(board[2][1]=='X'&&board[2][2]=='X'&&board[2][0]!='0') board[2][0]='0';
		else if(board[2][2]=='X'&&board[2][0]=='X'&&board[2][1]!='0') board[2][1]='0';

//vertically

		else if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]!='0') board[2][0]='0';
		else if(board[1][0]=='X'&&board[2][0]=='X'&&board[0][0]!='0') board[0][0]='0';
		else if(board[2][0]=='X'&&board[0][0]=='X'&&board[1][0]!='0') board[1][0]='0';


		else if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]!='0') board[2][1]='0';
		else if(board[1][1]=='X'&&board[2][1]=='X'&&board[0][1]!='0') board[0][1]='0';
		else if(board[2][1]=='X'&&board[0][1]=='X'&&board[1][1]!='0') board[1][1]='0';


		else if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]!='0') board[2][2]='0';
		else if(board[1][2]=='X'&&board[2][2]=='X'&&board[0][2]!='0') board[0][2]='0';
		else if(board[2][2]=='X'&&board[0][2]=='X'&&board[1][2]!='0') board[1][2]='0';
//diagonally

	else if(board[0][0]=='X'&& board[1][1]=='X'&&board[2][2]!='0') board[2][2]='0';
	else if(board[0][0]=='X'&& board[2][2]=='X'&&board[1][1]!='0') board[1][1]='0';
	else if(board[1][1]=='X'&& board[2][2]=='X'&&board[0][0]!='0') board[0][0]='0';
	//
	else if(board[0][2]=='X'&& board[1][1]=='X'&&board[2][0]!='0') board[2][0]='0';
	else if(board[0][2]=='X'&& board[2][0]=='X'&&board[1][1]!='0') board[1][1]='0';
	else if(board[1][1]=='X'&& board[2][0]=='X'&&board[0][2]!='0') board[0][2]='0';
	else comp(board);
	
}
void comp3(char board[][3]){
	//horizontally win
		if(board[0][0]=='0'&&board[0][1]=='0'&&board[0][2]!='X') board[0][2]='0';
		else if(board[0][1]=='0'&&board[0][2]=='0'&&board[0][0]!='X') board[0][0]='0';
		else if(board[0][2]=='0'&&board[0][0]=='0'&&board[0][1]!='X') board[0][1]='0';

		else if(board[1][0]=='0'&&board[1][1]=='0'&&board[1][2]!='X') board[1][2]='0';
		else if(board[1][1]=='0'&&board[1][2]=='0'&&board[1][0]!='X') board[1][0]='0';
		else if(board[1][2]=='0'&&board[1][0]=='0'&&board[1][1]!='X') board[1][1]='0';

		else if(board[2][0]=='0'&&board[2][1]=='0'&&board[2][2]!='X') board[2][2]='0';
		else if(board[2][1]=='0'&&board[2][2]=='0'&&board[2][0]!='X') board[2][0]='0';
		else if(board[2][2]=='0'&&board[2][0]=='0'&&board[2][1]!='X') board[2][1]='0';
//vertically win
		else if(board[0][0]=='0'&&board[1][0]=='0'&&board[2][0]!='X') board[2][0]='0';
		else if(board[1][0]=='0'&&board[2][0]=='0'&&board[0][0]!='X') board[0][0]='0';
		else if(board[2][0]=='0'&&board[0][0]=='0'&&board[1][0]!='X') board[1][0]='0';
		else if(board[0][1]=='0'&&board[1][1]=='0'&&board[2][1]!='X') board[2][1]='0';
		else if(board[1][1]=='0'&&board[2][1]=='0'&&board[0][1]!='X') board[0][1]='0';
		else if(board[2][1]=='0'&&board[0][1]=='0'&&board[1][1]!='X') board[1][1]='0';

		else if(board[0][2]=='0'&&board[1][2]=='0'&&board[2][2]!='X') board[2][2]='0';
		else if(board[1][2]=='0'&&board[2][2]=='0'&&board[0][2]!='X') board[0][2]='0';
		else if(board[2][2]=='0'&&board[0][2]=='0'&&board[1][2]!='X') board[1][2]='0';
//diagonally win
		else if(board[0][0]=='0'&& board[1][1]=='0'&&board[2][2]!='X') board[2][2]='0';
		else if(board[0][0]=='0'&& board[2][2]=='0'&&board[1][1]!='X') board[1][1]='0';
		else if(board[1][1]=='0'&& board[2][2]=='0'&&board[0][0]!='X') board[0][0]='0';
//diagonally win
		else if(board[0][2]=='0'&& board[1][1]=='0'&&board[2][0]!='X') board[2][0]='0';
		else if(board[0][2]=='0'&& board[2][0]=='0'&&board[1][1]!='X') board[1][1]='0';
		else if(board[1][1]=='0'&& board[2][0]=='0'&&board[0][2]!='X') board[0][2]='0';
//horixontally balance
		else if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]!='0') board[0][2]='0';
		else if(board[0][1]=='X'&&board[0][2]=='X'&&board[0][0]!='0') board[0][0]='0';
		else if(board[0][2]=='X'&&board[0][0]=='X'&&board[0][1]!='0') board[0][1]='0';


		else if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]!='0') board[1][2]='0';
		else if(board[1][1]=='X'&&board[1][2]=='X'&&board[1][0]!='0') board[1][0]='0';
		else if(board[1][2]=='X'&&board[1][0]=='X'&&board[1][1]!='0') board[1][1]='0';


		else if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]!='0') board[2][2]='0';
		else if(board[2][1]=='X'&&board[2][2]=='X'&&board[2][0]!='0') board[2][0]='0';
		else if(board[2][2]=='X'&&board[2][0]=='X'&&board[2][1]!='0') board[2][1]='0';

//vertically

		else if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]!='0') board[2][0]='0';
		else if(board[1][0]=='X'&&board[2][0]=='X'&&board[0][0]!='0') board[0][0]='0';
		else if(board[2][0]=='X'&&board[0][0]=='X'&&board[1][0]!='0') board[1][0]='0';


		else if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]!='0') board[2][1]='0';
	//	else if(board[0][1]=='X'&&board[1][1]=='X') board[2][1]='0';
		else if(board[1][1]=='X'&&board[2][1]=='X'&&board[0][1]!='0') board[0][1]='0';
		else if(board[2][1]=='X'&&board[0][1]=='X'&&board[1][1]!='0') board[1][1]='0';


		else if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]!='0') board[2][2]='0';
		else if(board[1][2]=='X'&&board[2][2]=='X'&&board[0][2]!='0') board[0][2]='0';
		else if(board[2][2]=='X'&&board[0][2]=='X'&&board[1][2]!='0') board[1][2]='0';
//diagonally

	else if(board[0][0]=='X'&& board[1][1]=='X'&&board[2][2]!='0') board[2][2]='0';
	else if(board[0][0]=='X'&& board[2][2]=='X'&&board[1][1]!='0') board[1][1]='0';
	else if(board[1][1]=='X'&& board[2][2]=='X'&&board[0][0]!='0') board[0][0]='0';
	//
	else if(board[0][2]=='X'&& board[1][1]=='X'&&board[2][0]!='0') board[2][0]='0';
	else if(board[0][2]=='X'&& board[2][0]=='X'&&board[1][1]!='0') board[1][1]='0';
	else if(board[1][1]=='X'&& board[2][0]=='X'&&board[0][2]!='0') board[0][2]='0';
	else comp(board);
}


