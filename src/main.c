/* Nome: Joao Pregnolato
 * RA: 175901
 * Curso: Engenharia Eletrica (EA879)
 * Programa: 3
 */



#include <stdio.h>

int pode_ser(int i, int *a, int j){
  int ret;
  if(i%a[j]==0){
    ret=1;
  }else{
    ret=0;
  }
  return ret;
}

int main() {
  int a[5],aux[5], quantas=0;
  int n;
  int j;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);
  
  

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    int j=0;
    quantas =0;
    j=0;
    while(j<=4){ /*descobrindo quais tarefas vao ser realizadas*/
        if(pode_ser(i,a,j)==1){ /*funcao que retorna se a tarefa pode ser ou nao executada dessa vez*/
         aux[quantas] = j;
	 quantas ++;
        }
        j++;
    }
    
    if(quantas!=0){ /*mostrando quais tarefas foram realizadas*/
	  j=0;
	  while(j<quantas){
	    printf("%d",aux[j]);
	    j++;
	  }
    }else{ /*caso nenhuma tarefa foi realizada*/
	  printf("-");
    }
    printf("\n");
  }

  return ;
}