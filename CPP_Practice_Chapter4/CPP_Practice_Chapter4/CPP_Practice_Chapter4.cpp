// CPP_Practice_Chapter4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
			cout << "1���� " << nIndex << "������ ��: " << nSum <<endl;
			break;
		}
	}

	//�Ǻ���ġ ����
	int n1 = 1;
	int n2 = 1;
	int n3 = 1;
	int nInput = 0;
	cout << "���� �ϳ��� �Է��ϼ���. :" ;
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

	// �ӵ� ����, ����, ����
	int nInput2 = 0;
	int nSpeed = 0;
	bool bFlag = true;
	while (bFlag)
	{
		cout << "---------------------------------------" << endl;
		cout << "1. ����    |  2. ����     | 3. ����    " << endl;
		cout << "---------------------------------------" << endl;

		cout << "���� : " ;
		cin >> nInput2;

		if (nInput2 == 1)
		{
			nSpeed += 1;
			cout << "���� �ӵ� : " << nSpeed << endl;

		}
		else if(nInput2 == 2)
		{
			nSpeed -= 1;
			if (nSpeed < 0)
			{
				cout << "�ӵ��� ������ �� �� �����ϴ�." << endl;
				nSpeed = 0;
			}
			cout << "���� �ӵ� : " << nSpeed << endl;

		}
		else if(nInput2 == 3)
		{
			cout << "���α׷� ����" << endl;
			bFlag = false;
		}
		else
		{
			cout << "�߸��� �Է°��Դϴ�." << endl;
		}
		
		
	}


	return 0;
}

