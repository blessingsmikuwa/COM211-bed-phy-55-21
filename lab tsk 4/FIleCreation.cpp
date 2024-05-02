#include <iostream>
#include <fstream>
using namespace std;
int main (){
    //creating and opening a file
    ofstream MyFile("exampleFile.txt");

    //closing the file
    MyFile.close();
    return 0;
}