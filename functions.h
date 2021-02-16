#include<iostream>
#include<cmath>
#include<stdarg.h>
using namespace std;
namespace func{
    void printArr(int arr[], int length){
        for(int i = 0; i < length; ++i){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }
    //1.
     void changeArr(int arr[], int length){
        for(int i = 0; i < length; ++i){
            arr[i] ^= 1;
        }
     }
     void(*first)(int[], int);

    //2.
    void fillArr(int arr[], int length){
        for(int i = 0, j = 1; i < length; ++i, j += 3){
            arr[i] = j;
        }
     }
    void(*second)(int[], int);

    //3.
    bool checkBalance(int arr[], int length){
        int sumBegin = 0, sumEnd = 0;
        for(int s = 1; s < length; ++s){
            for(int i = 0; i < s; ++i){
                sumBegin += arr[i];
            }
            for(int j = s; j < length; ++j){
                sumEnd += arr[j];
            }
            if(sumBegin == sumEnd){
                return true;
            }else{
                sumBegin = 0;
                sumEnd = 0;   
            }     
        }
        return false;
        
    }
    bool(*therd)(int*, int);

    //4.

    void shiftArr(int arr[], int length, int shift){
        int newShift = shift;
        if(abs(shift) > length - 1){
            newShift = shift % length;
        }
        if(shift < 0){
            newShift = length - abs(newShift);    
        }
        
        int temp;
        for(int j = 0; j < newShift; ++j){
            temp = arr[length - 1];
            for(int i = length - 1; i > 0; --i){
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
        }
    }
    void(*forth)(int*, int, int);

    //5.
    void changeVarArgs(int count, ...){
        va_list list;
        int num;
        va_start(list, count);
        for(int i = 0; i < count; ++i){
            num = va_arg(list, int);
            cout << (num ^ 1);
        }
        cout << endl;
        va_end(list);
    }
    void(*fyfth)(int, ...);
}
