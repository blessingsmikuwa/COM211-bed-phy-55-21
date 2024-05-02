#include <iostream>
using namespace std;
int main (){
    int a=21;
    int c;
    c=a;
    cout <<"line 1 - = operator ,the value of c is" << c<< endl;

    c+=a;
    cout <<"line 2 - += operator ,the value of c is" << c<< endl;

    c-=a;
    cout <<"line 3 - = operator ,the value of c is" << c<< endl;

    c*=a;
    cout <<"line 4 - = operator ,the value of c is" << c<< endl;
    return 0;

}