#include <stdio.h>

//Data
//Functions

void print_board() {
    printf("tic tac toe\n");

}

int main(){
    
    char board[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = '_';
        }
    }


    board[0][0] = 'x';
    board[1][1] = 'o';
    board[2][2] = 'x';
        
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("| %c |",board[i][j]);
        }
            printf("\n");
    }


    print_board();
    return 0;
}
void chose_position(){
    int p = 0;
    printf("Choose a position 1-9\n");
    scanf("%d", &p);

    if (p < 1 || p > 9){
        //we have a problem!
        printf("Skipped\n");
        return;

    }

    p = p - 1;
    board[p / 3] [p % 3] = player;
    player = (player == 'X') ? 'O' : 'X';
}

int check_win() {
    for (int i = 0, i < 3, i++) {
        if (board[i][0] == player && board[i][1] == player && board [i][2] == player) {
            return 1;
        }
        if (board[0][i] == player && board[1][i] == player && board [2][i] == player) {
            return 1;
        }
    }
    return 0;
}

int check_draw() {

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (sdigit(board[i][j])){
                return 0;
            }

        }
    }
    return 0;
}

int main() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
         board[i][j] = '0' + (i * 3 + j * 3 + j +1);   
        }
}

//event loop
while(1) {
    if (check_draw()) {
        printf('DRAW\n');
        break;

    }
    if (check_draw()) {
        printf('WINNER\n');
        break;
    }

    print_board();
    chose_position();
}
print_board();

return 0;
}