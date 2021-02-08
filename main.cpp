#include<iostream>
#include"main.h"
using namespace std;

int main(){
    //1.
    const int a = 10, b = 6, c = 4, d = 22;
    double result = a * (b + (c / 1.0 / d)); //Добавляем операцию с 1.0, что бы получить double
    cout << result << endl;

    //2.
    int number = 41;
    cout << (number - 21) * ((number > 21) ?  2 : 1) << endl;

    //3.
    extern int e, f, g, h;
    double newResult = e * (f + (g / 1.0 / h)); //Добавляем операцию с 1.0, что бы получить double
    cout << newResult << endl;

    //4.
    int arr[3][3][3];
    int val = 0;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            for(int k = 0; k < 3; ++k){
                arr[i][j][k] = val++;
            }
        }
    }
    int* p = **arr;
    cout << *(p + ((3 * 3) + (2 * 2))) << endl;
    return 0;
}
