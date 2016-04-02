/*
 * main.cpp
 *
 *  Created on: Apr 1, 2016
 *      Author: osvaldo
 */
#include "RedBlackTree.h"


int main(){



	RBtree myTree;

	int dataAr[6] = {33,22,50,44,55,60};

	for(int index = 0; index <6; index++){

		cout << "Inserting.... " << dataAr[index] << endl;

		myTree.insert(dataAr[index]);
	}

	//myTree.disp();

	myTree.printTree();

	myTree.del();


	myTree.printTree();

	myTree.del();


	myTree.printTree();

	return 0;
}
