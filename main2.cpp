
enum crossOrToe{
    CROSS,
    TOE
}CrossOrToe;

typedef struct playField{
    enum crossOrToe field[3][3];
} PlayField;

int main(){
    enum crossOrToe testCross = CROSS;
    enum crossOrToe testToe = TOE;
    enum crossOrToe arr[] = {testCross, testToe};

    return 0;
}
