#include <iostream>
#include "binarySearchTree.h"
#include "stdafx.h"

using namespace std;

// Student name: Hanh Nguyen  CSC10612H1
// This program builds a binary Tree and list the data in the tree by traversing the binary Tree. 

int main()
{
//Create a bSearchTreeType object example: bSearchTreeType<int> treeRoot;
	bSearchTreeType<int> treeRoot;

//Create Variable to hold the users numbers
	int num;
//Prompt the user for numbers
	cout << "Enter integers ending with -999" << endl;
	cin >> num;
//Continue prompting until user enters "-999 example while(num != -999)
	while (num != -999) {
		// insert nodes into tree treeRoot.insert(num);
		treeRoot.insert(num);
		cin >> num;
	}

// Print Nodes in inorder sequence treeRoot.inorderTraversal();
	cout << endl << "Tree nodes in inorder: ";
	treeRoot.inorderTraversal();
;//Print Nodes in preorder sequence treeRoot.preorderTraversal();
	cout << endl << "Tree nodes in preorder: ";
	treeRoot.preorderTraversal();
// Print Nodes in postorder sequence treeRoot.postorderTraversal();
	cout << endl << "Tree nodes in postorder: ";
	treeRoot.postorderTraversal();
	cout << endl;
// Tree Height: treeRoot.treeHeight() 
	cout << "Tree Height: " << treeRoot.treeHeight() << endl;
// Number of nodes:  treeRoot.treeNodeCount() 
	cout << "Number of Nodes: " << treeRoot.treeNodeCount() << endl;
// Number of leaves: treeRoot.treeLeavesCount() 
	//cout << "Number of leaves: " << treeRoot.treeLeavesCount() << endl;
	char pause;
	cout << "Enter Q to Quit: ";
	cin >> pause;
	return 0;
}

