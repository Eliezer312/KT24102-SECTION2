/*Eliezer binti Maingkin
BI19110061
Lab Assignment 1 - Exercise 3 */

#include <iostream>
using namespace std;

	double getAverage(int *array, int SIZE) {
		int i, sum =0;
		double average;
		for (int i=0; i<SIZE; i++) {
			sum = sum + *(array+i);
		}
		average = double(sum)/SIZE;
		return average;
	}
	
	void swap (int *n, int *m) {
		int temp;
		temp = *n;
		*n = *m;
		*m = temp;
	}

	void ChangeIt_1(int n) {
		n = 5;
	}
	
	void ChangeIt_2(int *n) {
		*n = 6;
	} 
	
	void ChangeIt_3(int &n) {
		n = 7;
	}
	
	int ChangeIt_4(int n) {
		n = 8;
	 
	return n;
	}
		
int main(){	
	
	int *p;
	int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
	p=&x;
	
	ChangeIt_1(x);
	cout<< "ChangeIt_1 : " << *p << endl;

	ChangeIt_2(&x); 
	cout<< "ChangeIt_2 : " << *p << endl;

	ChangeIt_3(x); 
	cout<< "ChangeIt_3 : " << *p << endl;	

	x = ChangeIt_4(x); 
	cout<< "ChangeIt_4 : " << *p << endl;
	
	cout<< endl;
	cout<< "x before swap: " << x << endl;
	cout<< "y before swap: " << y << endl;

	swap(&x,&y);
	cout<< "x after swap: " << x << endl;
	cout<< "y after swap: " << y << endl;
	
	double average;
	average = getAverage(data,5);
	cout<< endl;
	cout<< "Average value: " << average << endl;

}

