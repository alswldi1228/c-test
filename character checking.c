#include <stdio.h>
#include <string.h>

int countChar(char *, char);


int main(){
	
	char buf[101], c;
	int num;
	
	printf("문자열: ");
	gets(buf);
	
	printf("검색할 문자: ");
	c = getchar();
	
	num = countChar(buf, c);
	
	printf("입력한 문자열(%s)에서 '%c'의 출현 횟수는 %d번입니다", buf, c, num);
	
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
