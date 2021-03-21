typedef struct tree Tree;

Tree * newTreeVazio();
Tree * newTree(char aux, Tree* left, Tree* right);

int vazio (Tree* t);
void show (Tree* t);
int countleaf(Tree* t);
Tree *copia(Tree *a);
int alturatree(Tree* t);
void preOrdem_AVL(Tree* t);
void emOrdem_AVL(Tree* t);
void posOrdem_AVL(Tree* t);


