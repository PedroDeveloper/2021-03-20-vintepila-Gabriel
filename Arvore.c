#include <stdio.h>
#include <stdlib.h>
#include "Arvore.h"

struct tree
{
	char info;
	Tree *left;
	Tree *right;
};

Tree * newTreeVazio ()
{
	return NULL;
}

Tree * newTree(char aux, Tree* left,Tree* right)
{
	Tree* t = (Tree*)malloc(sizeof(Tree));
	t -> info = aux;
	t ->left = left;
	t ->right = right;
}

int vazio (Tree* t)
{
	return t==NULL;
}

void show (Tree* t )
{	//caso arvore vazia
	if (vazio(t)==0)
	{
		printf("\n %c",t->info);
		show(t->left);	
		show(t->right);
	}
 } 
 
  
 /*--------------------------------------------------------------------
	1.	Retornar a quantidade de folhas de uma arvore binária de busca.
 ----------------------------------------------------------------------*/
 
  int countleaf(Tree* t)
  {
  
 	if (!vazio(t))
	{	
	   // verficando se left e right apontam para nulos
		if (t->left == NULL && t ->right == NULL)
		{
			return 1+countleaf(t->left)+countleaf(t->right);
		}
		else  
		{
			return countleaf(t->left)+countleaf(t->right);
		}
    }
	else
		{
			return 0;
		}
	
	
 }

 
 
 /*----------------------------------------------
  4.	Verificar se duas árvores são iguais.//
 ----------------------------------------------*/
 
 int compara_tree (Tree* t1, Tree* t2 )
 {
	int tree1 = vazio(t1);
	int tree2 = vazio(t2);
			
			if (tree1==0 && tree2 == 0)
			{	
				//iguais
				return 1*compara_tree(t1->left,t2->left)*compara_tree(t1->right,t2->right);
			}
			else if (tree1!= tree2)
			{
				//diferente
				return 0;
			}	
 }
 
   /*----------------------------------------------
5.	Copiar uma arvore binária.
 ----------------------------------------------*/
 
 Tree *copia(Tree *t)
{
	if(t == NULL)
	{
		return -1;		
	}
	else
	{
		Tree *aux2;
		aux2=(Tree *)malloc(sizeof(Tree));
		aux2->info=t->info;

		aux2->left=copia(t->left);
		aux2->right=copia(t->right);	
	}

	return &aux2;
}
  
  /*----------------------------------------------
7.	Retornar a altura da árvore (usar função não recursiva).
 ----------------------------------------------*/
 
 int alturatree(Tree* t){
 	int result;
	if(t == NULL)
	{
		return -1;		
	}
		
	else{
		
		int left = alturatree(t->left);
		int right = alturatree(t->right);
		
		if(right > left)
		{
			
	        result = right + 1;
			return result;
		}	
		
		else
		{
			result = left + 1;
			return result;
		}
	
        }
}
 
/*----------------------------------------------
8.	Percorrer InOrder (não recursiva).
 ----------------------------------------------*/
 
 void preOrdem_AVL(Tree* t) {
	if(t != NULL) {
		printf("\n %d", t->info);
		preOrdem_AVL(t->left);
		preOrdem_AVL(t->right);
	}
}

  /*----------------------------------------------
9.	Percorrer PreOrder (não recursiva).
 ----------------------------------------------*/
void emOrdem_AVL(Tree* t) {
	if(t != NULL) {
		emOrdem_AVL(t->left);
		printf("\n %d", t->info);
		emOrdem_AVL(t->right);
	}
}


  /*----------------------------------------------
10.	Percorrer PostOrder (não recursiva).
 ----------------------------------------------*/
 
void posOrdem_AVL(Tree* t) {
	if(t != NULL) {
		posOrdem_AVL(t->left);
		posOrdem_AVL(t->right);
		printf("\n %d", t->info);
	}

}

