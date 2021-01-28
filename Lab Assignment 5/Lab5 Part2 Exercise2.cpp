/*Eliezer binti Maingkin
BI19110061
Lab Assignment 5 - Part 2 Exercise 2 */

#include <iostream>
#include <algorithm>
using namespace std;

//function to print array before sorting 
void printArr(int array[], int i, int x) 
{ 
	for (int i = 0; i < x; i++) 
    	cout << array[i] << " "; 
}

//function to store input from user into array
void storeArr(int array[], int i, int x) {
	cout<< "Enter the integer one by one to store in array: ";
	for (i = 0; i < x; i++) {
		cin >> array[i];
    }
}

//function to sort array
void sortArr(int array[], int i, int x) {
	sort(array, array+x);
	for (int i=0; i < x; i++)
		cout << array[i] << " ";
}

int main(){
	int i;
	int size=0;
	
	cout<< "How many integer would you like to enter? : ";
	cin>> size;
	int array[size];
	int x = sizeof(array) / sizeof(int);
	storeArr(array, i, x);
		
	cout << "Array before sorting: [";
    printArr(array, i, x);
    cout << "]"<< endl;
    
	cout << "Array after sorting: [";
	sortArr(array, i, x);
	cout << "]"<< endl;
return 0;
}
