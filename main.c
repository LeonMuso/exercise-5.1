#include <stdio.h>

int main(void) {
    int posizione;
    char giocatori [] = {'C','E','B','D','E'};
    do {
        scanf("%d",&posizione);
        printf("il giocatore %c e' arrivato %d posizione\n",giocatori[posizione-1], posizione);
    }while(posizione >= 1 && posizione<= 5);
}
