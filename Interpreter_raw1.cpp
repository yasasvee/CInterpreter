#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	char *data;
	node* left;
	node* right;
}Node;

//Build Symbol Table

//Build OP code Table

char* readFile(char* filePath) {

}

Node* buildSyntaxTree() {

}

void interpretSyntaxTree(Node* head) {

}

Node* parseFile(char* sourceCode) {
	for (/*Every Line*/;;) {
		Node* head = buildSyntaxTree();
		interpretSyntaxTree(head);
	}
}

int main(int argc, char* argv) {
	char* sourceCode;
	sourceCode = readFile(&argv[1]);
	parseFile(sourceCode);
	return 0;
}