#include"functions.h"

int main(){
    //1.
    int arr1[] = {0, 1, 1, 0, 1};
    func::first = func::printArr;
    func::first(arr1, 5);

    func::first = func::changeArr;
    func::first(arr1, 5);

    func::first = func::printArr;
    func::first(arr1, 5);

    //2.
    int arr2[8];
    func::second = func::fillArr;
    func::second(arr2, 8);

    func::second = func::printArr;
    func::second(arr2, 8);

    //3.
    //[1, 1, 1, 2, 1]
    //2, 1, 1, 2, 1
    //[10, 1, 2, 3, 4]
    int arr3[] = {1, 1, 1, 2, 1};
    int arr4[] = {2, 1, 1, 2, 1};
    int arr5[] = {10, 1, 2, 3, 4};
    func::therd = func::checkBalance;

    cout << "arr3 - " << func::therd(arr3, 5);
    cout << "arr4 - " << func::therd(arr4, 5);
    cout << "arr5 - " << func::therd(arr5, 5);

    //4.
    cout << endl;
    func::forth = func::shiftArr;
    func::printArr(arr5, 5);
    func::forth(arr5, 5, 31);
    func::printArr(arr5, 5);
    func::forth(arr5, 5, -2);
    func::printArr(arr5, 5);

    //5.
    func::fyfth = func::changeVarArgs;
    func::fyfth(5, 0, 1, 1, 0, 1);
    
    return 0;
}
