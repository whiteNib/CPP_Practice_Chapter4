// CPP_Practice_Chapter4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int nSum = 0;
	for (int nIndex = 0; nIndex <= 100; nIndex++)
	{
		nSum += nIndex;
		if (nSum >= 3000)
		{
			cout << "1부터 " << nIndex << "까지의 합: " << nSum <<endl;
			break;
		}
	}

	//피보나치 수열
	int n1 = 1;
	int n2 = 1;
	int n3 = 1;
	int nInput = 0;
	cout << "정수 하나를 입력하세요. :" ;
	cin >> nInput;

	for (int nIndex = 1; nIndex < nInput; nIndex ++)
	{
		if (nIndex < 3)
		{
			n3 = 1;
		}
		else
		{
			n3 = n1 + n2;
			n1= n2;
			n2 = n3;
		}

		cout << n3<< " ";
		if (n3 >= nInput)
		{
			break;
		}
	}
	cout << endl;

	// 속도 증속, 감속, 중지
	int nInput2 = 0;
	int nSpeed = 0;
	bool bFlag = true;
	while (bFlag)
	{
		cout << "---------------------------------------" << endl;
		cout << "1. 증속    |  2. 감속     | 3. 중지    " << endl;
		cout << "---------------------------------------" << endl;

		cout << "선택 : " ;
		cin >> nInput2;

		if (nInput2 == 1)
		{
			nSpeed += 1;
			cout << "현재 속도 : " << nSpeed << endl;

		}
		else if(nInput2 == 2)
		{
			nSpeed -= 1;
			if (nSpeed < 0)
			{
				cout << "속도는 음수가 될 수 없습니다." << endl;
				nSpeed = 0;
			}
			cout << "현재 속도 : " << nSpeed << endl;

		}
		else if(nInput2 == 3)
		{
			cout << "프로그램 종료" << endl;
			bFlag = false;
		}
		else
		{
			cout << "잘못된 입력값입니다." << endl;
		}
		
		
	}


	return 0;
}

