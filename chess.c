//Copyright 2022 Z. Caleb Hernandez
#include <stdio.h>
int main(){
    int letterToNumber(char x);
    int logicalNumberConverter(int num);
    int row =8;
    int col=8;
    int i,j;
    char bruh=' ';
    char board[8][8];
    printf("Welcome to Chess!\n");
    printf("Notation Rules\nTo move, write the original position, then intended position\nEX: e 4 e 5 moves a piece from e4 to e5\n");
    printf("White pieces are lowercase, black pieces are uppercase\n");
    printf("To stop the game(due to checkmate, stalemate, or otherwise), type z -1 z -1\n");

    char whitePawn = 'p';
    char whiteRook = 'r';
    char whiteKnight = 'n';
    char whiteBishop = 'b';
    char whiteQueen = 'q';
    char whiteKing = 'k';
    char empty='-';
    char blackPawn = 'P';
    char blackRook = 'R';
    char blackKnight = 'N';
    char blackBishop = 'B';
    char blackQueen = 'Q';
    char blackKing = 'K';

    int posXInitial;
    char posXInitialChar;
    int posYInitialLogical;
    int posYInitial;
    int posXFinal;
    char posXFinalChar;
    int posYFinalLogical;
    int posYFinal;

    for ( i = 0; i< 8; i++){
        for ( j = 0; j<8; j++){
            board[i][j]=empty;
        }
    }

    board[0][0]= blackRook;
    board[0][1]=blackKnight;
    board[0][2]=blackBishop;
    board[0][3]=blackQueen;
    board[0][4]=blackKing;
    board[0][5]=blackBishop;
    board[0][6]=blackKnight;
    board[0][7] = blackRook;

    board[1][0]=blackPawn;
    board[1][1]=blackPawn;
    board[1][2]=blackPawn;
    board[1][3]=blackPawn;
    board[1][4]=blackPawn;
    board[1][5]=blackPawn;
    board[1][6]=blackPawn;
    board[1][7]=blackPawn;


    board[7][0]= whiteRook;
    board[7][1]=whiteKnight;
    board[7][2]=whiteBishop;
    board[7][3]=whiteQueen;
    board[7][4]=whiteKing;
    board[7][5]=whiteBishop;
    board[7][6]=whiteKnight;
    board[7][7]=whiteRook;

    board[6][0]=whitePawn;
    board[6][1]=whitePawn;
    board[6][2]=whitePawn;
    board[6][3]=whitePawn;
    board[6][4]=whitePawn;
    board[6][5]=whitePawn;
    board[6][6]=whitePawn;
    board[6][7]=whitePawn;
    for ( i = 0; i< 8; i++){
        for ( j = 0; j<8; j++){

            printf("[%c]",board[i][j]);
        }
        printf("\n");
    }

    int gameOver =0;
    while(gameOver==0){
        printf("White to move\n");
        scanf("%c %i %c %i",&posXInitialChar, &posYInitialLogical, &posXFinalChar, &posYFinalLogical);
        scanf("%c",&bruh);
        if(posXInitialChar=='z'){

            printf("Game Over!");
            break;
        }
        posXInitial=letterToNumber(posXInitialChar);
        posXFinal=letterToNumber(posXFinalChar);
        posYInitial=logicalNumberConverter(posYInitialLogical);
        posYFinal=logicalNumberConverter(posYFinalLogical);
        board[posYFinal][posXFinal]=board[posYInitial][posXInitial];
        board[posYInitial][posXInitial]=empty;
        for ( i = 0; i< 8; i++){
            for ( j = 0; j<8; j++){
                printf("[%c]",board[i][j]);
            }
            printf("\n");
        }


        printf("Black to move\n");
        scanf("%c %i %c %i",&posXInitialChar, &posYInitialLogical, &posXFinalChar, &posYFinalLogical);
        scanf("%c",&bruh);
        if(posXInitialChar=='z'){

            printf("Game Over!");
            break;
        }
        posXInitial=letterToNumber(posXInitialChar);
        posXFinal=letterToNumber(posXFinalChar);
        posYInitial=logicalNumberConverter(posYInitialLogical);
        posYFinal=logicalNumberConverter(posYFinalLogical);
        board[posYFinal][posXFinal]=board[posYInitial][posXInitial];
        board[posYInitial][posXInitial]=empty;
        for ( i = 0; i< 8; i++){
            for ( j = 0; j<8; j++){
                printf("[%c]",board[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

int letterToNumber(char x){
    if(x=='a'){
        return 0;
    }
    if(x=='b'){
        return 1;
    }
    if(x=='c'){
        return 2;
    }
    if(x=='d'){
        return 3;
    }
    if(x=='e'){
        return 4;
    }
    if(x=='f'){
        return 5;
    }
    if(x=='g'){
        return 6;
    }
    return 7;

}
int logicalNumberConverter(int num){
    if(num==1){
        return 7;
    }
    if (num==2){
        return 6;
    }
    if(num==3){
        return 5;
    }
    if(num==4)
    {
        return 4;
    }
    if(num==5){
        return 3;
    }
    if(num==6){
        return 2;
    }
    if(num==7){
        return 1;
    }
    return 0;

}
