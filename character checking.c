#include <stdio.h>
#include <string.h>

int countChar(char *, char);


int main(){
	
	char buf[101], c;
	int num;
	
	printf("���ڿ�: ");
	gets(buf);
	
	printf("�˻��� ����: ");
	c = getchar();
	
	num = countChar(buf, c);
	
	printf("�Է��� ���ڿ�(%s)���� '%c'�� ���� Ƚ���� %d���Դϴ�", buf, c, num);
	
	return 0;
	
}


int countChar(char *str, char c){
	
	int size, cnt;
	int result = 0;
	
	size = strlen(str);
	
	for(cnt = 0; cnt < size; cnt++)
		if(str[cnt] == c) result++;
	
	return result;
	
	
}
