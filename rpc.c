#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int you;
int com;
int result;
int record[3] = {0,0,0};
char moves[5][50] = {"�ʶ� ����!!", "����", "����", "��","??!" };
char texts[5][50] = {"�����ϴ�!", "�÷��̾ �̰���ϴ�!","��ǻ�Ͱ� �̰���ϴ�!","�߸��� �Է��Դϴ�!","������ �����մϴ�."};

int main(){ 
	srand(time(NULL)); 

	while(1){
		printf("< ���������� ����! >\n");
		printf("���ڸ� �Է����ּ���. (1)����, (2)����, (3)��, (0)�׸��ϱ�  : ");			
		scanf("%d",&you);
		getchar();			
		if(you<0||you>3) you=4;
	

		com=rand()%3+1; 

		printf("You : %s! / Computer : %s!\n", moves[you], moves[com]);

	
		if(you==4) result=3; 
		else if(you==0) result=4; 
		else{
			result=(3+you-com)%3; 
			record[result]++; 
		}


		printf("< %s %d�� %d�� %d�� >\n\n", texts[result], record[1], record[0], record[2]); 
		if(you==0) exit(0);
	}
}
