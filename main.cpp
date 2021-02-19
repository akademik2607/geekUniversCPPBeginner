#include<iostream>
using namespace std;

//1.
#define IS_RANGE(a, b) (((a) >= 0) && ((a) < (b))) 

//2.
#define ARR_ITEM(arr, row, col) *(*(arr + (row)) + (col))

//3.
#define ARR_LENGTH(arr, type) (sizeof(arr) / sizeof(type))

void fillArr(int *arr[], int lenRow, int lenCol){
    int number = 1;
    for(int i = 0; i < lenRow; ++i){
        for(int j = 0; j < lenCol; ++j, ++number){
            arr[i][j] = number;
        }
    }
    cout << endl;
}

int main(){
    //1.
    cout << IS_RANGE(4, 10) << endl;
    cout << IS_RANGE(4 + 3, 10) << endl;
    cout << IS_RANGE(6, 4) << endl;

    //2.
    int** arr = new int*[10];
    for(int i = 0; i < 10; ++i){
        arr[i] = new int[5];
    }
    fillArr(arr, 10, 5);
    cout << ARR_ITEM(arr, 3, 4) << endl;
    for(int i = 0; i < 10; ++i){
        delete [] arr[i];
    }
    delete [] arr;

    //3.
    int arr3[67];
    cout << ARR_LENGTH(arr3, int) << endl;


    return 0;
}
