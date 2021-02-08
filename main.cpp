#include<iostream>
using namespace std;

#define NUM1 10
#define NUM2 34

int main(){
    //1.
    int a = 9, b = 11;
    if((a + b) >= 10 && (a + b) <= 20){
        cout << "true" << endl;
    } else{
        cout << "false" << endl;
    }

    //2.
    bool flag = true;
    int number = 24;
    for(int i = number - 1; i > 1; --i){
       if(number % i == 0){
            flag = false;
            break;
       } 
    }
    if(flag){
        cout << "Число " << number << " не является простым." << endl;
    } else{
        cout << "Число " << number << " является простым." << endl;
    }

    //3.
    if(NUM1 == 10 || NUM2 == 10 || NUM1 + NUM2 == 10){
        cout << true << endl;
    } else {
        cout << false << endl;
    }

    //4.
    int year = 1500;
    int isBigYear = false;
    if(year % 2 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                isBigYear = true;
            } else {
                isBigYear = false;
            }
        } else {
            isBigYear = true;
        }
    } else {
        isBigYear = false;
    }

    if(isBigYear){
        cout << "Год " << year << " - високосный" << endl;
    } else {
        cout << "Год " << year << " - не является високосным" << endl;
    }
    


    return 0;
}
