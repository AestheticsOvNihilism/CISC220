/*
 * Q6.cpp

 *
 *  Created on: 2016年9月17日
 *      Author: Chong Wang/Chu Qiao
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

//q6

void fillArr(int a[], int ranNum);
void printArr(int a[], int ranNum);
void reverseArr(int a[], int ranNum);
void swap(int* a ,int* b);
void printReversed(int a[], int ranNum);
void findMin(int a[], int size );


int main(){
   srand(time(NULL));
   int ranNum=rand() % 30 + 20;
   int a[ranNum];
   fillArr(a, ranNum);
   cout<<"Original array is "<<endl;
   printArr(a, ranNum);
   cout<<"Reversed array is "<<endl;
   reverseArr(a, ranNum);
   printReversed(a, ranNum);
   cout<<"min value is "<<endl;
   findMin(a, ranNum);
}

void fillArr(int* a, int c){
    srand(time(NULL));
	   for (int i=0; i<c; i++){
		   a[i]= rand() % 100 + -50;
	   }
}

void printArr(int* a, int b){
	for(int i=0; i<b;i++){
		cout<< a[i]<<" ";
	}
	cout<<endl;

}

//q7

void reverseArr(int* a, int d){
	int* p1 =a;
	int* p2= a+d-1;
    while(p1<p2){
    	swap(p1,p2);
    	p1++;
    	p2--;
    }

}

void swap(int* a, int* e ){
	int t = *a;
	*a = *e;
	*e = t;
}

void printReversed(int* a,int ranNum){
	int* m = a + ranNum;
	for ( int *p= a; p< m;p++)
		cout<<*p<<" ";
	cout<<"\n";
}

// q8

void findMin(int* a, int ranNum){
	int min = a[0];
	for(int i = 1; i < ranNum; i++){
		if(a[i] < min){
			min = a[i];
		}
	}
	cout<<min<<endl;
}

// q9
// index is where we begin
/*
void sumArray(int*a, int index, int ranNum){
	int i, sum = 0;
	for(i=0,)
}
*/
