//
// Created by tanks on 16.05.2019.
//

#include <iostream>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main(){

    int player = 1,i,choice;

    char mark;

    do{
        board();
        player=(player%2)?1:2;


    }while(i==-1);

}

/*******************************************************************
     This Function will draw the Board of 'TIC TAC TOE'
********************************************************************/

void board(){
    system("cls");
    std::cout << "*******************************************************************\n\tThis Function will draw the Board of 'TIC TAC TOE'\n********************************************************************\n\n";

    std::cout << "Player 1 (X) - Player 2 (0)" << std::endl << std::endl;
    std::cout << std::endl;

    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << std::endl;

    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;

    std::cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << std::endl;

    std::cout << "     |     |     " << std::endl << std::endl;
}
