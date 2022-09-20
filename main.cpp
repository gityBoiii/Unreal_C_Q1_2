#include <iostream>
using namespace std;


int main()
{

	// 문제. 1-10까지 넣었다가, 11-20까지 넣을 수 있게 배열 만들기
		/* 첫트 */
	//int temp[10] = { 0, }; // DynamicArray가 아님
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	temp + 1 = i; // 주소값 변경 안됨
	//	cout << "temp[" << i << "]는 : " << temp[i] << endl;
	//}

		/* 2트 */
	//int* temp = new int[10]; //DynamicArray. 주소값으로 배열 선언
	//for (int i = 0; i < 10; i++)
	//{
	//	*(temp + i)  = i; //주소값 변경하고, 값을 지정
	//	cout << "temp[" << i << "]는 : " << temp[i] << endl;
	//}

	//for (int i = 10; i < 20; i++)
	//{
	//	*(temp + i) = i; //주소값 변경하고, 값을 지정
	//	cout << "temp[" << i << "]는 : " << temp[i] << endl;
	//}

	//출력 이후 메모리 침범으로 중단점 발생

		/* 삼트 */
	int* Array = new int[10]; //DynamicArray. 주소값으로 배열 선언

	for (int i = 0; i < 10; i++)
	{
		*(Array + i)  = i; //주소값 변경하고, 값을 지정
		cout << "Array[" << i << "]는 : " << Array[i] << endl;
	}

			// 큰 배열로 스왑하기
	int* temp = new int[20];
	
	for (int i = 0; i < 10; i++)
	{
		temp[i] = Array[i];
	}

			// Array 값을 옮김 temp = Array시, 참조. 삭제시 값 날라감
	for (int i = 0; i < 20; i++)
	{
		cout << "temp[" << i << "]는 : " << temp[i] << endl;
	}
	
			//크게 다시 만들고, 이전값 넣기
	int* Array2 = new int[20]; 
	Array2 = temp;

	for (int i = 10; i < 20; i++)
	{
		*(Array2 + i) = i; //주소값 변경하고, 값을 지정
	}

	delete Array;
	//delete temp // Dangling Point.
	Array = Array2; //삭제후, 더 큰 배열 복사


	for (int i = 0; i < 20; i++)
	{
		cout << "Array2[" << i << "]는 : " << Array2[i] << endl; 
	}

	for (int i = 0; i < 20; i++)
	{
		cout << "Array[" << i << "]는 : " << Array[i] << endl;
	}


		/* 포인터 테스트 */
	int temp1 = 10; int* pt1 = &temp1;
	cout << "pt1 출력 : " << pt1 << endl;
	cout << "*pt1 이 가르키는 값 : " << *pt1 << endl;
	cout << "&pt1 출력 : " << &pt1 << endl;
	cout << "&*pt1 출력 : " << &*pt1 << endl;
	cout << "temp1의 주소 : " << &temp1 << endl;

	return 0;
}