#include <iostream>
using namespace std;
#include "work.h"
int main()
{
    int ar[1000]{};
    
    randomFilling(ar,1000,0,200);
    for (int i=0;i<1000;i++){
        cout<<i<<"\t"<<ar[i]<<"\n";
    }

    return 0;
}
