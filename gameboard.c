#include <stdio.h>
#include <stdlib.h>
#define N 6
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char gameboard[N][N];

int main(void){
  // �ʿ��� ������ ���� 
  int i, j;
  char b, w;
  b = '@'; // ������ ��
  w = 'O'; // �Ͼ�� �� 
  
  for(i=0; i<N; i++)
     for(j=0; j<N; j++) {
     	gameboard[i][j] = b;    	
	 }


   

// for���� Ȱ��- N���� �������� ����ϴ� �Լ�   

printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", gameboard[i][j]);
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }

	return 0;
}
