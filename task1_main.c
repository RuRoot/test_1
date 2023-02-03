#include <iostream>
using namespace std;
#include "work.h"

int main()
{
    int ar[100]{};
    randomFilling(ar,100,100,150);
    bubbleSort(ar,100);
    showEl(ar,100);
    int bar[100];
    int counter=0;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if (ar[j]==ar[i]){
                counter+=1;
            }
        bar[i] = counter;


        }
        counter=0;
    }
    int index,index2;
    for (int i=0;i<100;i++){
        if (bar[i] == getMax(bar,100)){
            index=i;
        }
    }
    for (int j=0;j<100;j++){
        if (bar[j] == getMin(bar,100)){
            index2=j;
        }
    }
    cout<<ar[index]<<" "<<getMax(bar,100)<<" "<<ar[index2]<<" "<<getMin(ar,100);
    return 0;
}
