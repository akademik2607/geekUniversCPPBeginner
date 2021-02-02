#include<iostream>
using namespace std;

//5.
typedef struct union_s{
    union Test{
        int one;
        char two;
        double three; 
    }test;
    int isInt : 1;
    int isChar : 1;
    int isDouble : 1;
} Union;

void printUnionVal(Union val){
    if(val.isInt){
        cout << val.test.one << endl;
    }
    else if(val.isChar){
        cout << val.test.two << endl;
    }
    else if(val.isDouble){
        cout << val.test.three << endl;
    }

}

int main(){
    Union example;
    example.test.one = 789;
    example.isInt = 1;
    example.isChar = 0;
    example.isDouble = 0;

    printUnionVal(example);

    example.test.two = 'A';
    example.isInt = 0;
    example.isChar = 1;
    example.isDouble = 0;

    printUnionVal(example);
    
    example.test.three = 0.345;
    example.isInt = 0;
    example.isChar = 0;
    example.isDouble = 1;

    printUnionVal(example);

    return 0;
}
