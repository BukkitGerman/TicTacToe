//
// Created by tanks on 16.05.2019.
//


#include <iostream>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

int checkwin();
void board();

int main(){

    std::cout << "*******************************************************************\n\tTIC TAC TOE\n********************************************************************\n\n";

    int player = 1,i,choice;

    char mark;

    do{
        board();
        player=(player%2)?1:2;

        std::cout << "Player " << player << ", enter a Fieldnumber: ";
        std::cin >> choice;

        mark=(player == 1) ? 'X' : 'O';


                if(choice >= 1 && choice<=9){
                    square[choice] = mark;
                }else{
                    std::cout << "Invalid Number.";
                    player--;
                    std::cin.ignore();
                    std::cin.get();
                }
                i=checkwin();

                player++;

    }while(i==-1);
    board();
    if(i==1) {
        std::cout << "==>\aPlayer " << --player << " win\n";
        system("pause");
    }else {
        std::cout << "==>\aGame draw\n";
    }
}

int checkwin(){
        if (square[1] == square[2] && square[2] == square[3])

            return 1;
        else if (square[4] == square[5] && square[5] == square[6])

            return 1;
        else if (square[7] == square[8] && square[8] == square[9])

            return 1;
        else if (square[1] == square[4] && square[4] == square[7])

            return 1;
        else if (square[2] == square[5] && square[5] == square[8])

            return 1;
        else if (square[3] == square[6] && square[6] == square[9])

            return 1;
        else if (square[1] == square[5] && square[5] == square[9])

            return 1;
        else if (square[3] == square[5] && square[5] == square[7])

            return 1;
        else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                 && square[4] != '4' && square[5] != '5' && square[6] != '6'
                 && square[7] != '7' && square[8] != '8' && square[9] != '9')

            return 0;
        else
            return -1;
}

/*******************************************************************
     This Function will draw the Board of 'TIC TAC TOE'
********************************************************************/

void board(){
    system("cls");

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
