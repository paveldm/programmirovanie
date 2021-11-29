#include <iostream>
using namespace std;

int* nomer1_2(float** c, int x) {
	float max = 0, min = 10000;
	float sum = 0;
	int* nums = new int[2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			sum += c[j][i] * c[j][x];
		}
		if (sum > max) {
			max = sum;
			nums[0] = i + 1;
		}
		else if (sum < min) {
			min = sum;
			nums[1] = i + 1;
		}
		sum = 0;
	}
	return nums;
}

float nomer3_4(float** c, int x) {
	float sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			sum += c[j][i] * c[j][x];
		}
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "ru");
	int i = 0, j = 0;

	/*	Для вопросов	*/
	int* nums = new int[2];
	float sum;

	/*	МАТРИЦА А	*/
	float** a = new float* [4];
	for (i = 0; i < 4; i++) {
		a[i] = new float[3];
	}
	a[0][0] = 5;
	a[0][1] = 3;
	a[0][2] = 20;
	a[1][0] = 2;
	a[1][1] = 5;
	a[1][2] = 0;
	a[2][0] = 0;
	a[2][1] = 2;
	a[2][2] = 0;
	a[3][0] = 10;
	a[3][1] = 5;
	a[3][2] = 0;

	/*	МАТРИЦА B	*/

	float** b = new float* [4];
	for (i = 0; i < 4; i++) {
		b[i] = new float[2];
	}
	b[0][0] = 1.2;
	b[0][1] = 0.5;
	b[1][0] = 2.8;
	b[1][1] = 0.4;
	b[2][0] = 5;
	b[2][1] = 1;
	b[3][0] = 2;
	b[3][1] = 1.5;

	/*	МАТРИЦА C	*/

	float** c = new float* [4];
	for (i = 0; i < 4; i++) {
		c[i] = new float[6];
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			c[i][j] = a[i][j];
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			c[i][j + 3] = b[i][j];
		}
	}

	nums = nomer1_2(c, 3);
	cout << "1)Наибольшая выручка у " << nums[0] << " продавца, наименьшая у " << nums[1] << " продавца;" << "\n";
	
	nums = nomer1_2(c, 4);
	cout << "2)Наибольшие коммисионные у " << nums[0] << " продавца, наименьшие у " << nums[1] << " продавца;" << "\n";

	sum = nomer3_4(c, 3);
	cout << "3)Общая сумма денег, вырученных за проданные товары: " << sum << ";" << "\n";
	float oborot = sum;
	sum = nomer3_4(c, 4);
	cout << "4)Общая сумма комиссионных, полученных продавцами: " << sum << ";" << "\n";

	cout << "5)Общая сумма денег, прошедших через руки продавцов: " << oborot + sum;
}