#include<stdio.h>
#include<string.h>
int main(){
	char str[500];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Chuoi dao nguoc la: ");
	for(int i = strlen(str) - 1; i >= 0; i--){
		printf("%c", str[i]);
	}
	return 0;
}
