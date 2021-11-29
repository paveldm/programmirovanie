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

	/*	��� ��������	*/
	int* nums = new int[2];
	float sum;

	/*	������� �	*/
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

	/*	������� B	*/

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

	/*	������� C	*/

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
	cout << "1)���������� ������� � " << nums[0] << " ��������, ���������� � " << nums[1] << " ��������;" << "\n";
	
	nums = nomer1_2(c, 4);
	cout << "2)���������� ������������ � " << nums[0] << " ��������, ���������� � " << nums[1] << " ��������;" << "\n";

	sum = nomer3_4(c, 3);
	cout << "3)����� ����� �����, ���������� �� ��������� ������: " << sum << ";" << "\n";
	float oborot = sum;
	sum = nomer3_4(c, 4);
	cout << "4)����� ����� ������������, ���������� ����������: " << sum << ";" << "\n";

	cout << "5)����� ����� �����, ��������� ����� ���� ���������: " << oborot + sum;
}