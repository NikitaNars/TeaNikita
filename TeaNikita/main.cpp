#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	int chapter, drink, count, a, allCost = 0, freeJuice = 0, priceDiscount = 200;
	float discount = 0;

	const int countJuice = 4, countVegetables = 3, countTea = 4;


	int costApple = 10, costOrange = 8, costApricot = 15, costPear = 12, costTomato = 8, costOnion = 7, costCucumber = 14, costTeaOnion = 9, costTeaParsley = 14, costTeaBlack = 5, costTeaGrean = 5;
	int costJucieFruit[countJuice]{ costApple, costOrange, costApricot, costPear };
	int costJucieVegetable[countVegetables]{ costTomato, costOnion, costCucumber };
	int tea[countTea]{ costTeaOnion, costTeaParsley };
	while (true)
	{
		std::cout << "����� ���������� � \"���� ������\"\n";

		while (true)
		{
			std::cout << "��� ��� ���������� 1.���� ���������, 2. ���� �������, 3.���: ";
			std::cin >> chapter;

			if (chapter == 1)
			{
				while (chapter != 0)
				{
					while (true)
					{
						std::cout << "� ��� ����: \n";
						std::cout << "1. �������� ���. ����: " << costApple << "\n2. ������������ ���. ����: " << costOrange << "\n3. ����������� ���. ����: " << costApricot << " \n4. �������� ���. ����: " << costPear << "\n��� �� ������: ";
						std::cin >> drink;
						if (drink > 0 && drink <= countJuice)
						{
							break;
						}
					}
					while (true)
					{
						std::cout << "������� ���-��: ";
						std::cin >> count;
						if (count > 0)
						{
							break;
						}
					}
					if (drink == 2 && count >= 4)
					{
						allCost += costJucieFruit[drink - 1] * count - count / 4;
						freeJuice += count / 4;
						std::cout << "�� �������� " << count / 4 << " ����(�) ���� ���������.\n";
					}

					allCost += costJucieFruit[drink - 1] * count;
					std::cout << "�������� ����: " << allCost << "\n";
					std::cout << "���� ������ ������ �� ����� � ���� ������� ������� 0: ";
					std::cin >> chapter;
				}

			}
			else if (chapter == 2)
			{
				while (true)
				{
					std::cout << "� ��� ����: \n";
					std::cout << "1. �������� ���. ����: " << costTomato << "\n2. ������� ���. ����: " << costOnion << "\n3. ��������� ���. ����: " << costCucumber << "\n��� �� ������: ";
					std::cin >> drink;
					if (drink > 0 && drink <= countVegetables)
					{
						break;
					}
				}
				while (true)
				{
					std::cout << "������� ���-��: ";
					std::cin >> count;
					if (count > 0)
					{
						break;
					}
				}
				if (drink == 2 && count >= 4)
				{
					allCost += costJucieVegetable[drink - 1] * count - count / 4;
					freeJuice += count / 4;
					std::cout << "�� �������� " << count / 4 << " ����(�) ���� ���������.\n";
				}
				else
				{
					allCost += costJucieVegetable[drink - 1] * count;
				}
				std::cout << "�������� ����: " << allCost << "\n";
				std::cout << "���� ������ ������ �� ����� � ���� ������� ������� 0, ����� ����� ������ �����: ";
				std::cin >> chapter;
			}
			else if (chapter == 3)
			{
				while (true)
				{
					std::cout << "� ��� ����: \n";
					std::cout << "1. ��������� ���. ����: " << costTeaOnion << "\n2. ���������� ���. ����: " << costTeaParsley << "3. ׸���� ���. ����: " << costTeaBlack << "4. ������ ���. ����: " << costTeaGrean << "\n��� �� ������: ";
					std::cin >> drink;
					if (drink > 0 && drink <= countTea)
					{
						break;
					}
				}
				while (true)
				{
					std::cout << "������� ���-��: ";
					std::cin >> count;
					if (count > 0)
					{
						break;
					}
				}
				if (drink == 2 && count >= 3)
				{
					allCost += tea[drink - 1] * count * 0.95;
					std::cout << "���� ������: " << tea[drink - 1] * count - tea[drink - 1] * count * 0.95;
					discount += tea[drink - 1] * count - tea[drink - 1] * count * 0.95;
				}
				else
				{
					allCost += tea[drink - 1] * count;
				}
				std::cout << "�������� ����: " << allCost << "\n";
				std::cout << "���� ������ ������ �� ����� � ���� ������� ������� 0, ����� ����� ������ �����: ";
				std::cin >> chapter;
			}
			else
			{
				std::cout << "����� ��������� ���\n";
			}

			std::cout << "���� ��� ������ ������ �� ���� ������� 0, ����� ����� ������ �����: ";
			std::cin >> a;
			if (a == 0)
			{
				break;
			}
		}
		if (allCost >= priceDiscount)
		{
			discount = allCost - allCost * 0.87;
			allCost = allCost * 0.87;
		}
		std::cout << "�������� ����: " << allCost << " ������: " << discount << " ���������� �����: " << freeJuice;
	}



	return 0;


}