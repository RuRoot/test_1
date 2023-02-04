#include <iostream>
#include <ctime>
#include "work.h"
using namespace std;


int getMax(int* ar, int size){
    counter();
    static int ind=0;
    static int max=ar[ind];
    if (ind == size-1){
        return(max);
    }
    if (max <= ar[ind]){
        max = ar[ind];
    }
    ind=ind+1;
    return getMax(ar,size);
}

int getMin(int* ar, int size){
    counter();
    static int index=0;
    static int min=ar[index];
    if (index == size-1){
        return(min);
    }
    if (min >= ar[index]){
        min=ar[index];

    }
    index=index+1;
    return getMin(ar,size);
}

void randomFilling(int* ar,int size,int min,int max){
     srand(time(0));
     for(int p = 0;p < size; p++){
        int num = min + rand() % (max - min + 1);
        ar[p] = num;
}}

int showEl(int* ar, int size) {
    for (int j=0;j<10;j++){
        for(int i=0;i<10;i++){
            cout<<ar[j*10+i]<<" ";
        }
    cout<<endl;
    }
    return 0;
}

void bubbleSort(int* ar,int size){
    int num;
    for(int s=size;s>0;s--){
        for(int i=0;i<size-1;i++){
            if (ar[i]<ar[i+1]){
                num = ar[i];
                ar[i]=ar[i+1];
                ar[i+1]=num;
            }
        }
    }
}

int counter(){
    static int counter=0;
    counter=counter+1;
    return counter;
}
