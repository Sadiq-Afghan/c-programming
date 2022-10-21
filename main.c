#include<stdio.h>
/*
         |     |
      1  |  2  |  3
      ___|_____|____
         |     |
      4  |  5  |  6
      ___|_____|____
         |     |
      7  |  8  |  9







 */
char box[10] = {'0','1','2','3','4','5','6','7','8','9'};
int choice;
int player;
int check_for_win();
void score_board();
void mark_board(char mark);
int main(){
    int game;
    char mark;
    player = 1;
    do {
        clrscr();
        score_board();
        player = (player % 2) ? 1:2;
        printf("please enter the room which you want player %d\n", player);
        scanf_s("%int", &choice);
        mark = (player == 1)?'X':'O';
        mark_board(mark);
        game = check_for_win();
        player++;

    }while(game == -1);
    if (check_for_win() == 1){
        printf("Player %d won the game", --player);
    }
    else
    {
        printf("you draw");
    }
}
int check_for_win(){
    int res;
    if(box[1] == box[2] && box[2] == box[3]){
        res = 1;
    }
    else if(box[4] == box[5] && box[5] == box[6]){
        res = 1;
    }
    else if(box[7] == box[8] && box[8] == box[9]){
        res = 1;
    }
    else if(box[1] == box[4] && box[4] == box[7]){
        res = 1;
    }
    else if(box[2] == box[5] && box[5] == box[8]){
        res = 1;
    }
    else if(box[3] == box[6] && box[6] == box[9]){
        res = 1;
    }
    else if(box[3] == box[5] && box[5] == box[7]){
        res = 1;
    }
    else if(box[1] == box[5] && box[5] == box[9]){
        res = 1;
    }
    else if(box[1] != '1'&& box[2] != '2'&&box[3] != '3'&&box[4] != '4'&& box[5] != '5'&&box[6] != '6'&& box[7] != '7'&&box[8] != '8'&& box[9] != '9'){
        res = 0;
    }
    else
        res = -1;
    return res;
}


void score_board(){
    printf("   |     |    \n");
    printf("%c  |  %c  |  %c \n", box[1], box[2], box[3]);
    printf("___|_____|____\n");
    printf("   |     |    \n");
    printf("%c  |  %c  |  %c\n", box[4], box[5], box[6]);
    printf("___|_____|____\n");
    printf("   |     |\n");
    printf("%c  |  %c  |  %c\n", box[7], box[8], box[9]);

}
void mark_board(char mark){
    if (choice == 1 && box[1] == '1'){
        box[1] = mark;
    }
    else if (choice == 2 && box[2] == '2'){
        box[2] = mark;
    }
    else if (choice == 3 && box[3] == '3'){
        box[3] = mark;
    }
    else if (choice == 4 && box[4] == '4'){
        box[4] = mark;
    }
    else if (choice == 5 && box[5] == '5'){
        box[5] = mark;
    }
    else if (choice == 6 && box[6] == '6'){
        box[6] = mark;
    }
    else if (choice == 7 && box[7] == '7'){
        box[7] = mark;
    }
    else if (choice == 8 && box[8] == '8'){
        box[8] = mark;
    }
    else if (choice == 9 && box[9] == '9'){
        box[9] = mark;
    }
    else{
        printf("invalid number");
        player --;
        getchar();
    }

}