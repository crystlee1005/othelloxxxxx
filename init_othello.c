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
     	gameboard[i][j];     	
	 }

    // ���� �ʱ�ȭ_ ���߾� 4ĭ�� ��� ������ ���� 2���� �밢�� ������� ��ġ
void init_othello(char gameboard[][N])
{

   gameboard[N/2][N/2] = b;
   gameboard[N/2][N/2 + 1] = w;
   gameboard[N/2 + 1][N/2] = w;
   gameboard[N/2 + 1][N/2 + 1] = b;

   // �ʱⰪ�� �μ�  
    
     for(i=0; i<N; i++)
     {
	   for(j=0; j<N; j++)
	    {
     	printf("%c", gameboard[i][j]);
     	printf("\n");
        }

	 }
} 
}

