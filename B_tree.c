#include<stdio.h>
#include<stdlib.h>

// Define a structure for AVL tree nodes
struct Node {
    int key;
    struct Node *left, *right;
    int height;
};
int balance;
// Utility function to get the height of the tree
int height(struct Node *N) {
    if (N == NULL) return 0;
    return N->height;
}

// Utility function to get the maximum of two integers
int maxa(int a, int b) {
    return (a > b) ? a : b;
}

// Function to create a new node
struct Node* newNode(int key) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // New node is initially at height 1

    return node;
}

// Right rotate utility
struct Node* rightRotate(struct Node *y) {
    struct Node *x = y->left;
    struct Node *T2 = x->right;
     printf("right rotate");
     getch();
    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = maxa(height(y->left), height(y->right)) + 1;
    x->height = maxa(height(x->left), height(x->right)) + 1;

    // Return new root
    return x;
}

// Left rotate utility
struct Node* leftRotate(struct Node *x) {
    struct Node *y = x->right;
    struct Node *T2 = y->left;

     printf("left rotate");
     getch();
    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = maxa(height(x->left), height(x->right)) + 1;
    y->height = maxa(height(y->left), height(y->right)) + 1;

    // Return new root
    return y;
}

// Get balance factor of node N
int getBalance(struct Node *N) {
    if (N == NULL) return 0;
    return height(N->left) - height(N->right);
}

// Insert a key into the AVL tree
struct Node* insert(struct Node* node, int key) {
    // 1. Perform the normal BST insert

    if (node == NULL) {
    return newNode(key);
    }
      if (key < node->key)
	node->left = insert(node->left, key);
    else if (key > node->key)
	node->right = insert(node->right, key);
    else // Duplicate keys are not allowed
	return node;

    // 2. Update the height of this ancestor node
    node->height = maxa(height(node->left), height(node->right)) + 1;




    // 3. Get the balance factor of this ancestor node to check whether
    // this node became unbalanced
     balance = getBalance(node);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && key < node->left->key)
	return rightRotate(node);

    // Right Right Case
    if (balance < -1 && key > node->right->key)
	return leftRotate(node);

    // Left Right Case
    if (balance > 1 && key > node->left->key) {
	node->left = leftRotate(node->left);
	return rightRotate(node);
    }

    // Right Left Case
    if (balance < -1 && key < node->right->key) {
	node->right = rightRotate(node->right);
	return leftRotate(node);
    }

    // Return the (unchanged) node pointer
    return node;
}

// Utility function to find the node with the minimum key value
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current->left != NULL)
	current = current->left;
    return current;
}

// Delete a key from the AVL tree


struct Node* deleteNode(struct Node* root, int key) {
    // STEP 1: PERFORM STANDARD BST DELETE
    if (root == NULL) return root;

    // If the key to be deleted is smaller than the root's key, then it lies in left subtree
    if (key < root->key)
	root->left = deleteNode(root->left, key);

    // If the key to be deleted is greater than the root's key, then it lies in right subtree
    else if (key > root->key)
	root->right = deleteNode(root->right, key);

    // If key is same as root's key, then this is the node to be deleted
    else {
	// Node with only one child or no child
	if ((root->left == NULL) || (root->right == NULL)) {
	    struct Node *temp = root->left ? root->left : root->right;

	    // No child case
	    if (temp == NULL) {
		temp = root;
		root = NULL;
	    } else // One child case
		*root = *temp; // Copy the contents of the non-empty child
	    free(temp);
	} else {
	    // Node with two children: Get the inorder successor (smallest in the right subtree)
	    struct Node* temp = minValueNode(root->right);

	    // Copy the inorder successor's data to this node
	    root->key = temp->key;

	    // Delete the inorder successor
	    root->right = deleteNode(root->right, temp->key);
	}
    }

    // If the tree had only one node then return
    if (root == NULL)
	return root;

    // STEP 2: UPDATE HEIGHT OF THE CURRENT NODE
    root->height = max(height(root->left), height(root->right)) + 1;

    // STEP 3: GET THE BALANCE FACTOR OF THIS NODE (to check whether this node became unbalanced)
     balance = getBalance(root);

    // If this node becomes unbalanced, then there are 4 cases

    // Left Left Case
    if (balance > 1 && getBalance(root->left) >= 0)
	return rightRotate(root);

    // Left Right Case
    if (balance > 1 && getBalance(root->left) < 0) {
	root->left = leftRotate(root->left);
	return rightRotate(root);
    }

    // Right Right Case
    if (balance < -1 && getBalance(root->right) <= 0)
	return leftRotate(root);

    // Right Left Case
    if (balance < -1 && getBalance(root->right) > 0) {
	root->right = rightRotate(root->right);
	return leftRotate(root);
    }

    return root;
}

// In-order traversal of the AVL tree
void inOrder(struct Node *root) {
    if (root != NULL) {
	inOrder(root->left);
	printf("%d ", root->key);
	inOrder(root->right);
    }
}

// Main function
int main() {
    struct Node *root = NULL;
    int data,i,count;
    clrscr();
    // Insert elements
    printf("enter the number of nodes\n");
    scanf("%d",&count);
     for(i=0;i<count;i++)
     {
    printf("\nenter data");
    scanf("%d",&data);
    root = insert(root, data);
   printf("In-order traversal of the AVL tree:\n");
    inOrder(root);
     }
    printf("\nenter the node to be deleted\n");
    scanf("%d",&data);
    root = deleteNode(root, data);
    inOrder(root);

    printf("\n");
     getch();
    return 0;
}
