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
//Q7

void reverseArr(int a[], int ranNum);
void swap(int* a ,int* b);
void printReversed(int a[], int ranNum);
//Q8

void findMin(int a[], int size );

//Q10
void bubblesort(int a[], int ranNum);

//Q11


int main(){
	//Q6
   srand(time(NULL));
   int ranNum=rand() % 30 + 20;
   int a[ranNum];
   fillArr(a, ranNum);
   cout<<"Original array is "<<endl;
   printArr(a, ranNum);
   //Q7
   cout<<"Reversed array is "<<endl;
   reverseArr(a, ranNum);
   printReversed(a, ranNum);
   //Q8
   cout<<"min value is "<<endl;
   findMin(a, ranNum);

   //Q11
   int filter=rand() % 5 + 3;
   windowsize(filter);

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

/* q10
void bubblesort(int* a, int b){
	int counter, avg = 0;

}
*/

// Q11
int windowsize(int filter){
       int filter_size= *filter%2;
       int windowsize;
       if (filter_size==0){
    	   windowsize=*filter + 1;
       }
       else {
    	   windowsize= *filter;
       }
       return windowsize;
}

int startLoc(int filter){
	int start_index = filter%2 - 1;
	return start_index;
}



/*
int endLoc(int filter, int ranNum2){
	int end_index = ranNum2 - 1- filter%2 ;
	return end_index;
}
*/

//Q12


