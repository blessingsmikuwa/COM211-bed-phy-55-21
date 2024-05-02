#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
   string line;

   ofstream myFile ("example.txt");
      if (myFile.is_open ()){
        while (getline (myFile,line)){
                 cout << line  <<'\n';
        }
        myFile.close();

      }
      else {
        cout << "un able to open file";
      }

      return 0;
      
}