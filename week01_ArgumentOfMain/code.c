/*
 * code.c
 *
 *  Created on: 2017年6月6日
 *      Author: ygh
 *  Demo the arguments of main
 */
#include <stdio.h>

/**
 * Under the eclipse terminal:
 * 	0:/home/ygh/workspace/CDevelop/workspace/week01_ArgumentOfMain/Debug/week01_ArgumentOfMain
 *
 * 	ygh@ygh-ubuntu:~/workspace/CDevelop/workspace/week01_ArgumentOfMain$ gcc code.c ygh@ygh-ubuntu:~/workspace/CDevelop/workspace/week01_ArgumentOfMain$ ./a.out
	ygh@ygh-ubuntu:~/workspace/CDevelop/workspace/week01_ArgumentOfMain$ ./a.out 123 456 789 dsdsdsd
	0:./a.out
	1:123
	2:456
	3:789
	4:dsdsdsd

ygh@ygh-ubuntu:~/workspace/CDevelop/workspace/week01_ArgumentOfMain$ ln -s a.out my
ygh@ygh-ubuntu:~/workspace/CDevelop/workspace/week01_ArgumentOfMain$ ./my
0:./my

 *
 */
int main(int argc, char *argv[]) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%d:%s\n", i,argv[i]);
	}
}

