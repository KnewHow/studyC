#include<stdlib.h>
#include<stdio.h>
#include<Windows.h>
#include"self.h"

void open() {
	printf("open\n");
	// �򿪼��±�
	system("notepad");
	// �򿪼�����
	system("calc");
	// �г������б�
	system("tasklist");
}

void kill() {
	printf("kill \n");
	system("taskkill /f /im Code.exe");
}

void var() {
	int age = 10;
	printf("%p", &age);
}

void define() {
	printf("age is %d", AGE);
	system(���±�);
}

void bell() {
	int a = 0;
	while (a < 10) {
		printf("\a");
		a++;
	}
}

void jump() {
	int a = 0;
	while (1) {
		printf("\t");
		if (a % 10 == 0) {
			printf("\n");
		}
		a++;
		Sleep(2000);
	}
}

int main() {
	jump();
	// system("pause");
	return 0;
}

