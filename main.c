#include <stdio.h>
#include <stdlib.h>
#include "Arvore.c"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y;

/* CREATE BINARYTREE
================================================================================*/	
	Tree* t1;Tree* t2;Tree* t3;Tree* t4;Tree* t5;Tree* t6;Tree* t;   //| 
			                                                                   //|
	t1 = newTree ('G',NULL,NULL);                                              //|    
	t2 = newTree ('D',NULL,t1);                                                 //|
	t3 = newTree ('E',NULL,NULL);                                              //|
	t4 = newTree ('B',t2,t3);                                                  //|
	t5 = newTree ('F',NULL,NULL);                                              //|
	t6 = newTree ('C',NULL,t5);                                                //|
                                                                               //| 	
	t = newTree ('A',t4,t6) ;                                                //|
                                                                               //|	
	Tree* b1;Tree* b2;Tree* b3;Tree* b4;Tree* b5;Tree* b6;Tree* aux2;   //|
                                                                               //|	
	b1 = newTree ('g',NULL,NULL);                                              //|
	b2 = newTree ('d',NULL,b1);                                                 //|
	b3 = newTree ('e',NULL,NULL);                                              //|
	b4 = newTree ('b',b2,b3);                                                  //|
	b5 = newTree ('f',NULL,NULL);                                              //|
	b6 = newTree ('c',NULL,b5);                                                //|
                                                                               //|	
	aux2 = newTree ('a',t4,t6)      ;                                           //|
/*================================================================================*/


	//call function countleaf
	
	int auxLeaf = countleaf(t);
	printf ("numero de folhas:  %d",auxLeaf);
	 show (t);

/*
=============================================================
*/
	//call function compara_tree
	int result = compara_tree(t,aux2);
	
	if (result == 0){
		printf ("\n BinaryTree diferentes");
	}
	else if (result == 1)
	{
		printf ("\n BinaryTree iguais");
	}
	
/*
=============================================================
*/
	
	//call funciton alturatree
    int result1 = alturatree(t);
    
	if (result1 == -1){
		printf ("\n BinaryTree vazia");
	}
	else 
	{
		printf ("\n",result);
	}
	
/*
=============================================================
*/

printf("Digite 1 para apresentar a arvore em Em Ordem\nDigite 2 para apresentar a arvore em Pre Ordem \nDigite 3 para apresentar a arvore em Pos Ordem\n");
	scanf("\n%d",&y);
	if(y == 1){
		emOrdem_AVL(t);
		printf("\n");
	}
	if(y == 2){
		preOrdem_AVL(t);
		printf("\n");
	}
	if(y == 3){
		posOrdem_AVL(t);
		printf("\n");
	}
	
	aux2 = copia(&t);
