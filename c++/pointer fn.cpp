#include <iostream>

using namespace std;


void pointer(int a, int b){
    int*ptra = &a;
    int*ptrb = &b;

    cout<< "your value of a is " << *ptra << " and its address is " << ptra <<endl;
    cout<< "your value of b is " << *ptrb << " and its address is " << ptrb <<endl;

}


int main()
{
    pointer(7,8);

    return 0;
}