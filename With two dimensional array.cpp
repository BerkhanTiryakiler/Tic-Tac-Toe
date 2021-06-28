#include<stdio.h>
#include<stdlib.h>
  
int tictactoe (int playerx, int playery, char matrix[3][3],int i, int j, int result);
int main() {
	char playerchoice;
	char player1;
	char player2;
	int i;
	int j;
	char tablearray[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
	int result;
	printf(" Welcome to tic tac toe game! \n First pick your side (x or o with lower case) then enter row and column.\n Be careful, row and column starts from 0,1,2...\n 0 represents first, 1 represents second, and 2 represents third line.\n Have enjoy!!!\n\n\n");
	printf("x or o? (for player 1) : ");
	scanf("%c", &playerchoice);
	printf("%c | %c | %c\n", tablearray[0][0],tablearray[0][1], tablearray[0][2]);
	printf("%c | %c | %c\n", tablearray[1][0],tablearray[1][1], tablearray[1][2]);
	printf("%c | %c | %c\n", tablearray[2][0],tablearray[2][1], tablearray[2][2]);
	if(playerchoice == 'x'){
		player1 = playerchoice;
		player2 = 'o';
	tictactoe(player1,player2,tablearray,i,j,result);
	}
	else if(playerchoice == 'o'){
		player1 = playerchoice;
		player2 = 'x';
		tictactoe(player1,player2,tablearray,i,j,result); 
		
	}
	else{
		printf("invalid choice");
	}
	
return 0;	
}

int tictactoe (int playerx, int playery, char matrix[3][3],int i, int j, int result){
	result =0;
	while(result != 1){
	printf("player 1 turn:\n");
	printf("enter row(0-2):");
	scanf("%d", &i);
	if((i==0 || i==1 || i==2)) {
	printf("enter column(0-2):");
	scanf("%d", &j);
	if( matrix[i][j] != 'x' && matrix[i][j] != 'o' && ((i==0 || i==1 || i==2) && (j==0 || j==1 || j==2) )) {
			matrix[i][j] = playerx;
	}
	
	else{
		printf("invalid choice.\n");
	}
}
else{
		printf("invalid choice.\n");
	}
	printf("%c | %c | %c\n", matrix[0][0],matrix[0][1], matrix[0][2]);
	printf("%c | %c | %c\n", matrix[1][0],matrix[1][1], matrix[1][2]);
	printf("%c | %c | %c\n", matrix[2][0],matrix[2][1], matrix[2][2]);
		if((matrix[0][0] == matrix[0][1]) && (matrix[0][1] == matrix[0][2]) && ((matrix[0][0] == playerx) && (matrix[0][1] == playerx) && (matrix[0][2] == playerx)) ||
	    (matrix[1][0] == matrix[1][1]) && (matrix[1][1] == matrix[1][2]) && ((matrix[1][0] == playerx) && (matrix[1][1] == playerx) && (matrix[1][2] == playerx)) ||
	    (matrix[2][0] == matrix[2][1]) && (matrix[2][1] == matrix[2][2]) && ((matrix[2][0] == playerx) && (matrix[2][1] == playerx) && (matrix[2][2] == playerx)) ||
	    
	    (matrix[0][0] == matrix[1][0]) && (matrix[1][0] == matrix[2][0]) && ((matrix[0][0] == playerx) && (matrix[1][0] == playerx) && (matrix[2][0] == playerx)) ||
	    (matrix[0][1] == matrix[1][1]) && (matrix[1][1] == matrix[2][1]) && ((matrix[0][1] == playerx) && (matrix[1][1] == playerx) && (matrix[2][1] == playerx)) ||
	    (matrix[0][2] == matrix[1][2]) && (matrix[1][2] == matrix[2][2]) && ((matrix[0][2] == playerx) && (matrix[1][2] == playerx) && (matrix[2][2] == playerx)) ||
	    
	    (matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2]) && ((matrix[0][0] == playerx) && (matrix[1][1] == playerx) && (matrix[2][2] == playerx)) ||
	    (matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[0][2]) && ((matrix[2][0] == playerx) && (matrix[1][1] == playerx) && (matrix[0][2] == playerx)) 
		){
    	printf("player 1 wins");
    	break;
	}
	if( matrix [0][0] != '1' && matrix [0][1] !='2' && matrix [0][2] !='3' && matrix [1][0] !='4' && matrix [1][1] !='5' && matrix [1][2] !='6'&& matrix [2][0] !='7' && matrix [2][1] !='8' && matrix [2][2] !='9') {
		printf("Draw! Restart the game!");
		break;
}
				
	printf("player 2 turn:\n");
	printf("enter row(0-2):");
	scanf("%d", &i);
	if((i==0 || i==1 || i==2)) {
	printf("enter column(0-2):");
	scanf("%d", &j);
	if( matrix[i][j] != 'x' && matrix[i][j] != 'o' && ((i==0 || i==1 || i==2) && (j==0 || j==1 || j==2) )) {
			matrix[i][j] = playery;
	}
	
	else{
		printf("invalid choice.\n");
	}
}
else{
		printf("invalid choice.\n");
	}
	printf("%c | %c | %c\n", matrix[0][0],matrix[0][1], matrix[0][2]);
	printf("%c | %c | %c\n", matrix[1][0],matrix[1][1], matrix[1][2]);
	printf("%c | %c | %c\n", matrix[2][0],matrix[2][1], matrix[2][2]);
	
	if((matrix[0][0] == matrix[0][1]) && (matrix[0][1] == matrix[0][2]) && ((matrix[0][0] == playery) && (matrix[0][1] == playery) && (matrix[0][2] == playery)) ||//1.st row
	    (matrix[1][0] == matrix[1][1]) && (matrix[1][1] == matrix[1][2]) && ((matrix[1][0] == playery) && (matrix[1][1] == playery) && (matrix[1][2] == playery)) ||
	    (matrix[2][0] == matrix[2][1]) && (matrix[2][1] == matrix[2][2]) && ((matrix[2][0] == playery) && (matrix[2][1] == playery) && (matrix[2][2] == playery)) ||
	    
	    (matrix[0][0] == matrix[1][0]) && (matrix[1][0] == matrix[2][0]) && ((matrix[0][0] == playery) && (matrix[1][0] == playery) && (matrix[2][0] == playery)) ||//1.st column
	    (matrix[0][1] == matrix[1][1]) && (matrix[1][1] == matrix[1][1]) && ((matrix[0][1] == playery) && (matrix[1][1] == playery) && (matrix[2][1] == playery)) ||
	    (matrix[0][2] == matrix[1][2]) && (matrix[1][2] == matrix[2][2]) && ((matrix[0][2] == playery) && (matrix[1][2] == playery) && (matrix[2][2] == playery)) ||
	    
	   ( matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2]) && ((matrix[0][0] == playery) && (matrix[1][1] == playery) && (matrix[2][2] == playery)) ||
	   ( matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[0][2]) && ((matrix[2][0] == playery) && (matrix[1][1] == playery) && (matrix[0][2] == playery)) 
		){
    	printf("player 2 wins");
    	break;
	}
	if( matrix [0][0] != '1' && matrix [0][1] !='2' && matrix [0][2] !='3' && matrix [1][0] !='4' && matrix [1][1] !='5' && matrix [1][2] !='6'&& matrix [2][0] !='7' && matrix [2][1] !='8' && matrix [2][2] !='9') {
		printf("Draw! Restart the game!");
		break;
}
}
}
