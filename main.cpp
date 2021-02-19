#include<iostream>
#include<fstream>
using namespace std;

//1.
bool createFile(const char* fileName, const char* text){
    ofstream file;
    file.open(fileName, ios::out);
    if(!file.is_open()) return false;
    file << text;
    file.close();
    return true;
}

//2.

long getBuferSize(const char* fileName1, const char* fileName2){
    ifstream file1, file2;
    file1.open(fileName1, ios::in);
    if(!file1.is_open()) {
        return 0;
    }

    file2.open(fileName2);
    if(!file2.is_open()) {
        file1.close();
        return 0;
    }

    long bufSize = 0;
    char temp;
    while(!file1.eof()){
       file1.get(temp);
       bufSize++;
       cout << temp << endl;
       cout << bufSize << endl;
    }
    while(!file2.eof()){
       file2.get(temp);
       bufSize++;
    }
    file1.close();
    file2.close();
    return bufSize;
}

bool fileConcat(const char* fileName1, const char* fileName2, char buffer[]){
    ifstream file1, file2;
    file1.open(fileName1);
    if(!file1.is_open()) {
        return false;
    }

    file2.open(fileName2);
    if(!file2.is_open()) {
        file1.close();
        return false;
    }
    int i;
    char temp[2];
    for(i = 0;!file1.eof(); ++i){
        cout << i << endl;
       file1.get(temp, 1);
       cout << temp;
       buffer[i] = temp[0];
    }

    cout << i << endl;
    for(;!file2.eof(); ++i){
       file2.get(temp, 1);
       buffer[i] = temp[0];
    }
    cout << i << endl;
    
    file1.close();
    file2.close();
    return true;
}


int main(){
    //1.
    if(!createFile("file1.txt", "sdfasdfaskfj;ajfkja askdfj hello sdjfa")){
        return 1;    
    }
    if(!createFile("file2.txt", "a;sdjfjaskdfjasjdfj world asjdfjlajs;lkjf)")){
            return 1;
    }

    
    //2.
    long bufSize = getBuferSize("file1.txt", "file2.txt");
    cout << bufSize << endl;
    char *buffer = new char[bufSize + 1];
    fileConcat("file1.txt", "file2.txt", buffer);
    cout << buffer << endl;
    delete [] buffer;


    return 0;
}
