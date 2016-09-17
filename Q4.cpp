/*
 * Q4.cpp
 *
 *  Created on: 2016年9月14日
 *      Author: CW
 */
#include <iostream>
#include <stdio.h>
using namespace std;

int main () {
	int num;
	cout<<"enter number(an integer from 3 to 29) here:"<<endl;
	cin>>num;
/* i ->num
 *
 */
	int sum=0;
    for(int i=1; i<30; )
    {
    	while (i < num) {
    			if(num % i == 0){
    				sum = sum +i;
    			}
    			i++;
    		}

    		if (sum == num){
    			cout<<num<<" is a perfect number"<<endl;
    		}
    		else {
    			cout<<num<<" is not a perfect number"<<endl;
    		}
    		return 0;

    	}
    }


	/*while (i < num) {
		if(num % i) == 0 {
			sum = sum +i;
		}
		i++;
	}

	if (sum == num){
		cout<<num<<"is a perfect number"<<endl;
	}
	else {
		cout<<num<<"is not a perfect number"<<endl;
	}
	return 0;

}
*/
