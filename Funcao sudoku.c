#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<windows.h>

int main (){  
    
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    register int i,j,k;


    int valores_base[9][9]={1,0,8,0,5,0,0,0,3,
                            0,0,0,9,0,3,1,0,0,
                            7,3,6,2,1,0,8,5,9,
                            9,0,0,8,0,2,0,6,1,
                            3,0,0,1,0,0,0,8,5,
                            8,6,1,0,7,5,0,4,0,
                            6,0,0,5,0,8,2,0,4,
                            5,0,2,0,0,1,6,0,0,
                            4,0,3,7,2,0,5,0,8};


    int jogo[9][9]={1,0,8,0,5,0,0,0,3,
                    0,0,0,9,0,3,1,0,0,
                    7,3,6,2,1,0,8,5,9,
                    9,0,0,8,0,2,0,6,1,
                    3,0,0,1,0,0,0,8,5,
                    8,6,1,0,7,5,0,4,0,
                    6,0,0,5,0,8,2,0,4,
                    5,0,2,0,0,1,6,0,0,
                    4,0,3,7,2,0,5,0,8};

    for(i=0;i<9;i++){
        if(i==0||i==3||i==6)
            printf("\n.................................\n.");
        else
        printf("\n.");

        for(j=0;j<9;j++)
            if(jogo[i][j]==valores_base[i][j]&&valores_base[i][j]!=0){
                SetConsoleTextAttribute(hConsole, 14);

                printf(" %i ", jogo[i][j]);

                SetConsoleTextAttribute(hConsole, 15);
                if(j==2||j==5||j==8)
                    printf(". ");
            }

            else{
                if(j==2||j==5||j==8)
                    printf(" %i . ", jogo[i][j]);
                        else
                            printf(" %i ", jogo[i][j]);
            }

    
    }
    printf("\n.................................\n.");
    
}