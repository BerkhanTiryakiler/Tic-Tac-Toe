#include<stdio.h>
#include<stdlib.h>
  
int tictactoe (int playerx, int playery, char matrix[10],int i, int result);
int main() {
	char playerchoice;
	char player1;
	char player2;
	int i;
	int j;
	char tablearray[10]={'o','1','2','3','4','5','6','7','8','9'};
	int result;
	printf(" Welcome to tic tac toe game! \n First pick your side (x or o with lower case) then enter the number you want to replace it.\n Have enjoy!!!\n\n\n");
	printf("x or o? (for player 1) : ");
	scanf("%c", &playerchoice);
	printf("%c | %c | %c\n", tablearray[1],tablearray[2], tablearray[3]);
	printf("%c | %c | %c\n", tablearray[4],tablearray[5], tablearray[6]);
	printf("%c | %c | %c\n", tablearray[7],tablearray[8], tablearray[9]);
	if(playerchoice == 'x'){
		player1 = playerchoice;
		player2 = 'o';
	tictactoe(player1,player2,tablearray,i,result);
	}
	else if(playerchoice == 'o'){
		player1 = playerchoice;
		player2 = 'x';
		tictactoe(player1,player2,tablearray,i,result); 
		
	}
	else{
		printf("invalid choice");
	}
	
return 0;	
}

int tictactoe (int playerx, int playery, char matrix[10],int i, int result){
	result =0;
	while(result != 1){
	printf("player 1 turn:\n");
	printf("enter number:");
	scanf("%d", &i);
	if(matrix[i] != 'x' && matrix[i] != 'o' && (i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9)) {
	
	
			matrix[i] = playerx;
	
}
	else{
		printf("invalid choice.\n");
	}


	printf("%c | %c | %c\n", matrix[1],matrix[2], matrix[3]);
	printf("%c | %c | %c\n", matrix[4],matrix[5], matrix[6]);
	printf("%c | %c | %c\n", matrix[7],matrix[8], matrix[9]);
		if((matrix [1] == matrix [2]) && (matrix [2] == matrix [3]) && ((matrix [1] == playerx) && (matrix [2] == playerx) && (matrix [3] == playerx)) ||//1.st row
	    (matrix[4] == matrix [5]) && (matrix [5] == matrix [6]) && ((matrix[4] == playerx) && (matrix [5] == playerx) && (matrix [6] == playerx)) ||
	    (matrix [7] == matrix [8]) && (matrix [8] == matrix [9]) && ((matrix [7] == playerx) && (matrix [8] == playerx) && (matrix [9] == playerx)) ||
	    
	    (matrix [1] == matrix [4]) && (matrix [4] == matrix [7]) && ((matrix [1] == playerx) && (matrix [4] == playerx) && (matrix [7] == playerx)) ||//1.st column
	    (matrix [2] == matrix [5]) && (matrix [5] == matrix [8]) && ((matrix [2] == playerx) && (matrix [5] == playerx) && (matrix [8] == playerx)) ||
	    (matrix [3] == matrix [6]) && (matrix [6] == matrix [9]) && ((matrix [3] == playerx) && (matrix [6] == playerx) && (matrix [9] == playerx)) ||
	    
	   ( matrix [1] == matrix [5]) && (matrix [5] == matrix [9]) && ((matrix [1] == playerx) && (matrix [5] == playerx) && (matrix [9] == playerx)) ||
	   ( matrix [3] == matrix [5]) && (matrix [5] == matrix [7]) && ((matrix [7]  == playerx) && (matrix [5] == playerx) && (matrix [3] == playerx)) 
		){
    	printf("player 1 wins!");
    	break;
	}
	if( matrix [1] != '1' && matrix [2] !='2' && matrix [3] !='3' && matrix [4] !='4' && matrix [5] !='5' && matrix [6] !='6'&& matrix [7] !='7' && matrix [8] !='8' && matrix [9] !='9') {
		printf("Draw! Restart the game!");
		break;
}
				
	printf("player 2 turn:\n");
	printf("enter number:");
	scanf("%d", &i);
	
	
	if(matrix[i] != 'x' && matrix[i] != 'o' && (i==1 || i==2 || i==3 || i==4 || i==5 || i==6 || i==7 || i==8 || i==9)) {
	
	
			matrix[i] = playery;
	
}
	else{
		printf("invalid choice.\n");
	}
	printf("%c | %c | %c\n", matrix[1],matrix[2], matrix[3]);
	printf("%c | %c | %c\n", matrix[4],matrix[5], matrix[6]);
	printf("%c | %c | %c\n", matrix[7],matrix[8], matrix[9]);
	
	if((matrix [1] == matrix [2]) && (matrix [2] == matrix [3]) && ((matrix [1] == playery) && (matrix [2] == playery) && (matrix [3] == playery)) ||//1.st row
	    (matrix[4] == matrix [5]) && (matrix [5] == matrix [6]) && ((matrix[4] == playery) && (matrix [5] == playery) && (matrix [6] == playery)) ||
	    (matrix [7] == matrix [8]) && (matrix [8] == matrix [9]) && ((matrix [7] == playery) && (matrix [8] == playery) && (matrix [9] == playery)) ||
	    
	    (matrix [1] == matrix [4]) && (matrix [4] == matrix [7]) && ((matrix [1] == playery) && (matrix [4] == playery) && (matrix [7] == playery)) ||//1.st column
	    (matrix [2] == matrix [5]) && (matrix [5] == matrix [8]) && ((matrix [2] == playery) && (matrix [5] == playery) && (matrix [8] == playery)) ||
	    (matrix [3] == matrix [6]) && (matrix [6] == matrix [9]) && ((matrix [3] == playery) && (matrix [6] == playery) && (matrix [9] == playery)) ||
	    
	   ( matrix [1] == matrix [5]) && (matrix [5] == matrix [9]) && ((matrix [1] == playery) && (matrix [5] == playery) && (matrix [9] == playery)) ||
	   ( matrix [3] == matrix [5]) && (matrix [5] == matrix [7]) && ((matrix [3] == playery) && (matrix [5] == playery) && (matrix [7] == playery)) 
		){
    	printf("player 2 wins!");
    	break;
	}
	if( matrix [1] != '1' && matrix [2] !='2' && matrix [3] !='3' && matrix [4] !='4' && matrix [5] !='5' && matrix [6] !='6'&& matrix [7] !='7' && matrix [8] !='8' && matrix [9] !='9') {
		printf("Draw! Restart the game!");
		break;
}
}
}
