#include <iostream>
using namespace std;


int main()
{

	// ����. 1-10���� �־��ٰ�, 11-20���� ���� �� �ְ� �迭 �����
		/* ùƮ */
	//int temp[10] = { 0, }; // DynamicArray�� �ƴ�
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	temp + 1 = i; // �ּҰ� ���� �ȵ�
	//	cout << "temp[" << i << "]�� : " << temp[i] << endl;
	//}

		/* 2Ʈ */
	//int* temp = new int[10]; //DynamicArray. �ּҰ����� �迭 ����
	//for (int i = 0; i < 10; i++)
	//{
	//	*(temp + i)  = i; //�ּҰ� �����ϰ�, ���� ����
	//	cout << "temp[" << i << "]�� : " << temp[i] << endl;
	//}

	//for (int i = 10; i < 20; i++)
	//{
	//	*(temp + i) = i; //�ּҰ� �����ϰ�, ���� ����
	//	cout << "temp[" << i << "]�� : " << temp[i] << endl;
	//}

	//��� ���� �޸� ħ������ �ߴ��� �߻�

		/* ��Ʈ */
	int* Array = new int[10]; //DynamicArray. �ּҰ����� �迭 ����

	for (int i = 0; i < 10; i++)
	{
		*(Array + i)  = i; //�ּҰ� �����ϰ�, ���� ����
		cout << "Array[" << i << "]�� : " << Array[i] << endl;
	}

			// ū �迭�� �����ϱ�
	int* temp = new int[20];
	
	for (int i = 0; i < 10; i++)
	{
		temp[i] = Array[i];
	}

			// Array ���� �ű� temp = Array��, ����. ������ �� ����
	for (int i = 0; i < 20; i++)
	{
		cout << "temp[" << i << "]�� : " << temp[i] << endl;
	}
	
			//ũ�� �ٽ� �����, ������ �ֱ�
	int* Array2 = new int[20]; 
	Array2 = temp;

	for (int i = 10; i < 20; i++)
	{
		*(Array2 + i) = i; //�ּҰ� �����ϰ�, ���� ����
	}

	delete Array;
	//delete temp // Dangling Point.
	Array = Array2; //������, �� ū �迭 ����


	for (int i = 0; i < 20; i++)
	{
		cout << "Array2[" << i << "]�� : " << Array2[i] << endl; 
	}

	for (int i = 0; i < 20; i++)
	{
		cout << "Array[" << i << "]�� : " << Array[i] << endl;
	}


		/* ������ �׽�Ʈ */
	int temp1 = 10; int* pt1 = &temp1;
	cout << "pt1 ��� : " << pt1 << endl;
	cout << "*pt1 �� ����Ű�� �� : " << *pt1 << endl;
	cout << "&pt1 ��� : " << &pt1 << endl;
	cout << "&*pt1 ��� : " << &*pt1 << endl;
	cout << "temp1�� �ּ� : " << &temp1 << endl;

	return 0;
}