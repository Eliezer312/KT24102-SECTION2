/*Eliezer binti Maingkin
BI19110061
Lab Assignment 4 - Part 1 Exercise 2 */

#include <iostream>

using namespace std;

class Queue{
	private:
		int queueArr[15];
		int queueFront, queueRear, n;
	
	public:

	Queue(){
		queueFront = -1;
		queueRear = -1;
		n = 15;
		for(int i=0; i<15; i++){
			queueArr[i] = 0;
		}
	}
	void Insert() {
   		int val;
   		if (queueRear == n - 1) {
   			cout<<"Queue is full"<< endl;
   		}
   		else {
      		if (queueFront == - 1)
      		queueFront = 0;
      		cout<< "Insert the element in queue : ";
     		cin >> val;
      		queueRear++;
     		queueArr[queueRear] = val;
		}
	}

	void Delete() {
   		if (queueFront == - 1 || queueFront > queueRear) {
      		cout<< "No element to be deleted";
      	return ;
   		}
    	else {
     	cout<< "Element deleted from queue is : "<< queueArr[queueFront] << endl;
      	queueFront++;;
   		}
	}

	void Display() {
   		if (queueFront == - 1) {
   			cout<<"Queue is empty"<< endl;
   		}
   		else {
      		cout<<"All elements in queue are : ";
      		for (int i = queueFront; i <= queueRear; i++)
      		cout<< queueArr[i]<<" ";
   		}
		cout<< endl;
	}
};

int main() {
	int choice;
	cout<< "(1) Insert element to queue"<< endl;
   	cout<< "(2) Delete element from queue"<< endl;
   	cout<< "(3) Display all the elements of queue"<< endl;
   	
	   Queue x;
	do {
   		cout<< "Enter your choice(-1 to exit): ";
		cin >> choice;
		switch (choice) {
    		case 1: x.Insert();
        	break;
        	case 2: x.Delete();
        	break;
        	case 3: x.Display();
        	break;
        	default: 
			cout<<"Invalid choice"<< endl;
		}
   } while(choice != -1);
   return 0;
}
