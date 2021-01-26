/*Eliezer binti Maingkin
BI19110061
Lab Assignment 2 - Exercise 3 */

#include <iostream>

using namespace std;

//linked list class which store items in transaction
class POSNode{
	string item;
	float price;
	POSNode *next;

	public:
	POSNode(){};

//add items 
void addItem (string newItem){
	item = newItem;
};

//add price of items
void itemPrice (float newPrice){
	price = newPrice;
};

void setNext (POSNode *addNext){ 
	next = addNext; 
};

string getItem (){
	return item; 
};

float getPrice (){ 
	return price; 
};

POSNode *Next (){ 
	return next; 
};
};

//linked list class for list which store items 
class POSList{
	POSNode *head;

	public:
	POSList (){ 
		head = NULL; 
	};

void addNode(string item, float price);
void print();
};

void POSList::addNode(string item, float price){
	POSNode *newNode = new POSNode();
	newNode->addItem(item);
	newNode->itemPrice(price);
	newNode->setNext(NULL);
	POSNode *tmp = head;
	
	if (tmp != NULL) {
		while (tmp->Next() != NULL) {
		tmp = tmp->Next();
		}
	tmp->setNext(newNode);
	}
	
	else {
	head = newNode;
	}
}

void POSList::print(){
	POSNode *p = head;
	int i = 10;
	float sum = 0.0;
	cout << "==============================================" << endl;
	cout << "BC	ITEMS				PRICE" << endl;
	cout << "==============================================" << endl;
	
	while (p->Next() != NULL) {
	cout << i << "	" << p->getItem() << " " << p->getPrice() << endl;
	i++;
	sum = sum + p->getPrice();
	p = p->Next();
	}
	
	sum = sum + p->getPrice();
	cout << i << "	" << p->getItem() << "" << p->getPrice() << endl;
	cout << "==============================================="<< endl;
	cout << "Total (GST Incl.)		       "<< sum<< endl;
	cout << "==============================================="<< endl;
}

int main(){
	POSList list;
	list.addNode("Pagoda Gnut 110g               ", 3.49);
	list.addNode("Hup Seng Cream Cracker         ", 4.19);
	list.addNode("Yit Poh 2n1 Kopi-o             ", 7.28);
	list.addNode("Zoelife SN & Seed              ", 5.24);
	list.addNode("Gatsby S/FO Wet&Hard	      ", 16.99);
	list.addNode("GB W/G U/Hold 150g              ", 6.49);
	list.print();
}
