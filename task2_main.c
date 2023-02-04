#include <iostream>
using namespace std;
#include "work.h"


int main()
{
    int ar[]={1,2,4,5,6,4,5,1,7,0,1,5,7,9,1,7};
    getMin(ar,16);
    int a=counter();
    cout<<a<<endl;
    return 0;
}
