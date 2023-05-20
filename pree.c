#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
  int data;
  struct node* left;
  struct node* right;
};
struct ikili_agac {
    struct node*root;
};
void agac_olustur(struct ikili_agac**agac) {

    *agac = (struct ikili_agac*) malloc(sizeof (struct ikili_agac));

    if (*agac == NULL) {
        printf("Heapte gerekli yer ayrilamadi... exit ...\n");
        exit(1);
    }
    (*agac)->root = NULL;
}
struct node*dugum_olustur(int icerik) {
    struct node*yeni_dugum = (struct node*) malloc(sizeof (struct node));

    if (yeni_dugum == NULL) {
        printf("Heapden yer ayrılamadı");
        exit(1);
    }
    yeni_dugum->data = icerik;
    yeni_dugum->left = NULL;
    yeni_dugum->right = NULL;

    return yeni_dugum;
}
void ekle(struct ikili_agac*agac, int icerik) {
    struct node*yeni_dugum = dugum_olustur(icerik);
    struct node*root;
    struct node*onceki;

    root = agac->root;
    while (root != NULL) {
        onceki = root;
        if (icerik < root->data){
		root = root->left;
		}
        else if (icerik > root->data) {
        root = root->right;
		}
        else return;
    }
    
    if (agac->root == NULL) {
        agac->root = yeni_dugum;
        return;
    }
    if (icerik < onceki->data) {
    	onceki->left = yeni_dugum;
	}
    else {
    	onceki->right = yeni_dugum;
	}
}
struct stack {
  struct node* data;
  struct stack* next;
};

void push(struct stack** top, struct node* data) {
  struct stack* new_node = malloc(sizeof(struct stack));
  new_node->data = data;
  new_node->next = *top;
  *top = new_node;
}

struct node* pop(struct stack** top) {
  if (*top == NULL) {
    return NULL;
  }
  struct node* data = (*top)->data;
  struct stack* temp = *top;
  *top = (*top)->next;
  free(temp);
  return data;
}

bool is_empty(struct stack* top) {
  return top == NULL;
}

void preorder_without_recursion(struct node* root) {
  struct stack* s = NULL;
  push(&s, root);
  while (!is_empty(s)) {
    struct node* current = pop(&s);
    printf("%d ", current->data);
    if (current->right != NULL) {
      push(&s, current->right);
    }
    if (current->left != NULL) {
      push(&s, current->left);
    }
  }
}

  int main(int argc, char *argv[]) {
	struct ikili_agac*agac = NULL;
	agac_olustur(&agac);
	ekle(agac, 60);
	ekle(agac, 55);
	ekle(agac, 140);
	ekle(agac, 40);
	ekle(agac, 135);
	ekle(agac, 180);
	ekle(agac, 120);
	
	preorder_without_recursion(agac->root);
	
	return 0;
}

