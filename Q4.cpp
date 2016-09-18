/*
 * Q4.cpp
 *
 *  Created on: 2016年9月14日
 *      Author: Chong Wang/ Chu Qiao
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

bool perfectNum(int num);
int sumsofar(int a, int b, int c);

int main () {

	for(int i=1;i<30;i++){
		cout<<boolalpha;
	    cout<<i<<" Perfect?"<<perfectNum(i)<<endl;
	}

}

bool perfectNum(int number){

    int a1=number;

    int add = sumsofar(0,a1-1,a1);

    if(number==add){

      return true;

  }//if
     else{
        return false;
 }//else
}//perfect

int sumsofar(int a, int b, int n){
    int s;
    int an;
    if (b>0){
        if (n%b==0){
         s=b;
       sumsofar(a+s,b-1,n);
    }//if;
   else{
       sumsofar(a,b-1,n);
      }//else
    }//if
   else{
       an = a;
     return an;
   }//else
}//sum
