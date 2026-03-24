#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

#define CHIP8_MEMORY_SIZE	4096
#define CHIP8_DISPLAY_WIDTH	64
#define CHIP8_DISPLAY_HEIGHT	32
#define V_REGISTER_COUNT	16
#define STACK_DEPTH		16
#define CHIP8_KEY_COUNT		16



	void lab_7_task_4() {

		int A[4];

		printf("4 элементов массива:\n");
		for (int i = 0; i < 4; i++) {
			scanf("%d", &A[i]);
		}

		int min = A[0], max = A[0];
		int min_i = 0, max_i = 0;

		for (int i = 1; i < 4; i++) {
			if (A[i] < min) {
				min = A[i];
				min_i = i;
			}
			if (A[i] > max) {
				max = A[i];
				max_i = i;
			}
		}

		int temp = A[min_i];
		A[min_i] = A[max_i];
		A[max_i] = temp;

		printf("Измененный массив:\n");
		for (int i = 0; i < 4; i++) {
			printf("%d ", A[i]);
		}

	}
	void lab_7_task_5() {
		int A[4];
		int pol = 0, otr = 0, nul = 0;

		printf("4 элемента массива:\n");
		for (int i = 0; i < 4; i++) {
			scanf("%d", &A[i]);

			if (A[i] > 0)
				pol++;
			else if (A[i] < 0)
				otr++;
			else
				nul++;
		}

		printf("полож: %d\n", pol);
		printf("отриц: %d\n", otr);
		printf("Нулевых: %d\n", nul);

	}
	void lab_7_task_6() {
		int A[4][4];
		int count = 0;

		printf("элементs матрицы:\n");

		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				scanf("%d", &A[i][j]);
				if (A[i][j] > 0)
					count++;
			}
		}

		printf("элементs больше нуля: %d\n", count);

	}
	void lab_9_task_3() {
		char text[1000];

		printf("Введите текст: ");
		fgets(text, sizeof(text), stdin);

		for (int i = 0; text[i] != '\0'; i++) {
			if (isalpha(text[i])) {
				char lower = tolower(text[i]);
				int pos = lower - 'a' + 1; // 
				printf("%d", pos);
			}
			else {
				printf("%c", text[i]); // 
			}
		}

	}
	void lab_9_task_10() {
		char text[1000], symbol;
		int k;

		printf("строка: ");
		fgets(text, sizeof(text), stdin);

		printf("символ: ");
		scanf(" %c", &symbol);

		printf("число k: ");
		scanf("%d", &k);

		int countWords = 0;
		char *word = strtok(text, " \n\t");

		while (word != NULL) {
			int countSymbol = 0;

			for (int i = 0; word[i] != '\0'; i++) {
				if (word[i] == symbol) {
					countSymbol++;
				}
			}

			if (countSymbol == k) {
				countWords++;
			}

			word = strtok(NULL, " \n\t");
		}

		printf("Кол-во слов: %d\n", countWords);

	}
}
int main() {
	lab_7_task_4();
	lab_7_task_5();
	lab_7_task_6();
	lab_9_task_3();
	lab_9_task_10();
	typedef struct Chip8State{
		int a;
		int b;
	};
	printf("Hello, World!");
	return 0;
