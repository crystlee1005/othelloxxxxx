#include <stdio.h>
#include <stdlib.h>
#define N 6


char print_othello[N][N];

int main(void){
  // �ʿ��� ������ ���� 
  int i, j;
  char b, w;
  b = '@'; // ������ ��
  w = 'O'; // �Ͼ�� �� 
  
  for(i=0; i<N; i++)
     for(j=0; j<N; j++) {
     	print_othello[i][j] = b;    	
	 }


   

// for���� Ȱ��- N���� �������� ����ϴ� �Լ�   

printf("-------------------------\n");
	for(i=0; i<N; i++)
	{
	 for(j=0; j<N; j++)
	 
    	printf("| %c ", print_othello[i][j]);
    	
	 	
	printf("|\n");	
	printf("-------------------------\n");
    
    }

	return 0;
}
