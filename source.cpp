#include <stdio.h>
#include <stdlib.h>


void hanoi(int n, int from, int tem, int to);
void hanoi2(int n, int from, int tem, int to);

void move(char from, char to)
{
	printf("%c->%c\n", from, to);
}


void main()
{
	int hlayer;
	printf("하노이탑 단을 입력하세요");
	scanf_s("%d", &hlayer);
	hanoi2(hlayer, 'A', 'B', 'C');
	getchar();

}

void hanoi(int n, int from, int tem, int to)
{
	if (n == 1)
	{
		printf("%d번  %c->%c\n", from, to);
		return;
	}
	if (n != 1)
	{
		int i;
		for (i = n - 1; i >= 2; i--)
		{
			hanoi(i, from, to, tem);
			printf("%d번  %c->%c\n", from, to);

	
		}
	}
}

void hanoi2(int n, int from, int tem, int to)
{

	for (int i = n; i >= 1; i--)
	{
		hanoi(i, from, tem, to);

	}
}


