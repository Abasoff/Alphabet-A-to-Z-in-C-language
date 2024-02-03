#include <stdio.h>
#include <stdlib.h>
int h;
void letterA() {
    int h, i, j;

    printf("Enter the height:");
    scanf_s("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h ; j++) {
            if (i == 1 || j == h || i == h/2+1 || j==1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

}
    
void letterB() {
    int h;

    printf("Height: ");
    scanf_s("%d", &h);


    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h; j++) {
            if ((i == 0 || i == h - 1 || i == h / 2) && j < (h - 2))
                printf("*");
            else if (j == (h - 2) && !(i == 0 || i == h - 1 || i == h / 2))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void letterC() {
    int h;

    printf("Height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h - 1; j++) {
            if (i == 0 || i == h - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterD() {
    int h;

    printf("Height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h; j++) {
            if ((i == 0 || i == h - 1) && (j < h - 2)) {
                printf("*");
            }
            else if ((j == h - 2) && !(i == 0 || i == h - 1)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterE() {
    int h;

    printf("Height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h - 1; j++) {
            if (i == 0 || i == h - 1 || i == h / 2) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterF() {
    int h;

    printf("Height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h; j++) {
            if (i == 0 || i == (h / 2) && (j < h - 3)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterG() {
    int i, j;
    int h;
    printf("Enterde height: ");
    scanf_s("%d", &h);

    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if ((i == 0 || i == h - 1) && (j == 0 || j == h - 1))
                printf(" ");
            else if (j == 0)
                printf("*");
            else if (i == 0 && j <= h)
                printf("*");
            else if (i == h / 2 && j > h / 2)
                printf("*");
            else if (i > h / 2 && j == h - 1)
                printf("*");
            else if (i == h - 1 && j < h)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void letterH() {
    int h;
    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        printf("*");
        for (int j = 0; j < h; j++) {
            if (i == h / 2 || j == h - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterI() {
    int h;
    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (i == 0 || i == h - 1) {
                printf("*");
            }
            else if (j == h / 2) {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}

void letterJ() {
    int h;
    int i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if (i == h - 1 && (j > 0 && j < h - 1))
                printf("*");

            else if ((j == h - 1 && i != h - 1) || (i > (h / 2) - 1 && j == 0 && i != h - 1)) {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterK() {
    int h;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (int i = 0; i <= h; i++) {
        printf("*");
        for (int j = 0; j <= h; j++) {
            if (i == (h / 2) + j) {
                printf("*");
            }
            else if (j == (h / 2) - i) {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}

void letterL() {
    int h;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (int i = 0; i <= h; i++) {
        printf("*");
        for (int j = 0; j <= h - 1; j++) {
            if (i == h) {
                printf("*");
            }
        }
        printf("\n");
    }
}
void letterM() {
    int h;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h; j++) {
            if (j == 0 || j == h - 1) {
                printf("*");
            }
            else if (i <= h / 2 && (j == i || j == h - i - 1)) {
                printf("*");
            }
            else if (i > h / 2 && j == h / 2 && i==h/2) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterN() {

    int h;

    printf("Enter the height: ");
    scanf_s("%d", &h);
    int i, j;
    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h; j++) {
            if (j ==1 || j == h || j == i) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void letterO() {
    int i,j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h; j++) {
            if (i == 1 || i == h || j == 1 || j == h) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    } 
}   

void letterP() {
    int h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (i = 0; i <= h; i++) {
        for (j = 0; j <= h; j++) {
            if (i == 0 || j == 0) {
                printf("*");
            }
            else if (i == h / 2 || (j == h && i <= h / 2)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterQ() {

    letterO();

    int i, j;
    for (i = 0; i < h / 2; i++) {
        for (j = 0; j <= h; j++) {
            if (i == j-h+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
void letterR() {
    int h, w, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    printf("Enter the width: ");
    scanf_s("%d", &w);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w; j++) {
            if (i == 1 || i == h || j == 1 || j == w) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i < w; i++) {
        for (j = 0; j < h; j++) {
            if (j == 0 || j == i) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterS() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);


    for (i = 0; i < h; i++) {
        for (j = 0; j < h; j++) {
            if (i == 0 || i == h / 2 || i == h - 1) {
                printf("*");
            }
            else if (i < h / 2 && j == 0) {
                printf("*");
            }
            else if (i > h / 2 && j == h - 1) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterT() {
    int  h,w, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    printf("Enter the width: ");
    scanf_s("%d", &w);

    for (i = 0; i < w; i++){
        for (j = 0; j < h; j++)
        {
            if (i == 0) {
                printf("*");
            }
            else if (j == h / 2 || j == h) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterU() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for ( i = 1; i <= h; i++) {
        for (j = 1; j <= h ; j++) {
            if (j == 1 && i<=h-1 || j == h && i<=h-1){
                printf("*");
            }
            else if (i == h && j > 1 && j <= h - 1) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}
void letterV() {
    int  w,h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);
    printf("Enter the width: ");
    scanf_s("%d", &w);


    for (i = 1; i <= h; i++) {
        for (j = 1; j <= w+1; j++) {
            if (h > w) {
                return ;
            }
            if (j == i || j+i == w) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void letterW() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for ( i = 1; i <=h; i++){
        for (j = 1; j <= h; j++) {
            if (j == 1 || j == h ) {
                printf("*");
            }
            else if ((i > h / 2 && (j == i || j == h - i + 1))) {
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}

void letterX() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (i = 1; i < h; i++) {
        for (j = 0; j < h; j++) {
            if ( j == i || i+j==h) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void letterY() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);

    for (i = 1; i <= h; i++) {
        for (j = 1; j <= h; j++) {
            if ((j == i || j == h - i + 1) && i < h / 2 + 1) {
                printf("*");
            }
            else if (j == (h / 2) + 1 && i > h / 2) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void letterZ() {
    int  h, i, j;

    printf("Enter the height: ");
    scanf_s("%d", &h);


    for ( i = 0; i <= h; i++){
        for ( j= 0; j <= h; j++){
            if (i == 0 || i==h) {
                printf("*");
            }
            else if (i+j == h) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    char letter;
    int exit = 0;

    do {
        printf("Select a letter between A-Z or press 'esc' to exit: ");
        letter = getchar();

        switch (letter) {
        case 'A':
        case 'a':
            letterA();
            break;

        case 'B':
        case 'b':
            letterB();
            break;

        case 'C':
        case 'c':
            letterC();
            break;

        case 'D':
        case 'd':
            letterD();
            break;

        case 'E':
        case 'e':
            letterE();
            break;

        case 'F':
        case 'f':
            letterF();
            break;

        case 'G':
        case 'g':
            letterG();
            break;

        case 'H':
        case 'h':
            letterH();
            break;

        case 'I':
        case 'i':
            letterI();
            break;

        case 'J':
        case 'j':
            letterJ();
            break;

        case 'K':
        case 'k':
            letterK();
            break;

        case 'L':
        case 'l':
            letterL();
            break;

        case 'M':
        case 'm':
            letterM();
            break;

        case 'N':
        case 'n':
            letterN();
            break;

        case 'O':
        case 'o':
            letterO();
            break;

        case 'P':
        case 'p':
            letterP();
            break;

        case 'Q':
        case 'q':
            letterQ();
            break;

        case 'R':
        case 'r':
            letterR();
            break;

        case 'S':
        case 's':
            letterS();
            break;

        case 'T':
        case 't':
            letterT();
            break;

        case 'U':
        case 'u':
            letterU();
            break;

        case 'V':
        case 'v':
            letterV();
            break;

        case 'W':
        case 'w':
            letterW();
            break;

        case 'X':
        case 'x':
            letterX();
            break;

        case 'Y':
        case 'y':
            letterY();
            break;

        case 'Z':
        case 'z':
            letterZ();
            break;

        case 27: // ASCII value for 'esc' key
            exit = 1;
            break;
        default:
            printf("Invalid input. Please try again.\n");
        }

        while (getchar() != '\n')
            continue;

    } while (!exit);

    return 0;
}