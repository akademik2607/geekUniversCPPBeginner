#include<iostream>

//1.
typedef struct test_struct{
    int number;
    char symbol;
} Struct;

typedef union test_union{
    int inum;
    double dnum;
} Union;

int main(){
    int inum = 1;
    float fnum = 9.45;
    char cnum = 'G';

    Struct test_s;
    test_s.number = 34;
    test_s.symbol = 'H';

    Union test_u;
    test_u.inum = 56;

    Struct arr[] = {test_s, Struct{456, 'T'}};
    std::cout << arr[1].number << " " << arr[1].symbol << std::endl;
    return 0;
}
