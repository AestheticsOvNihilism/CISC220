/*
 * Q6.cpp

 *
 *  Created on: 2016年9月17日
 *      Author: CW
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArr(int a[], int ranNum);
void printArr(int a[], int ranNum);

int main(){
   int ranNum=rand() % 30 + 20;
   int a[ranNum];
   fillArr(a, ranNum);
   printArr(a, ranNum);
}

void fillArr(int* a, int c){
    srand(time(NULL));
	   for (int i=0; i<c; i++){
		   a[i]= rand() % 100 + -50;
	   }
}

void printArr(int* a, int b){
	cout<<" Array: "<< endl;
	for(int i=0; i<b;i++){
		cout<< a[i]<<" "<<endl;
	}
}





