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
		std::cout << "Добро пожаловать в \"Соки Никиты\"\n";

		while (true)
		{
			std::cout << "Что вас интересует 1.Соки фруктовые, 2. Соки овощные, 3.Чаи: ";
			std::cin >> chapter;

			if (chapter == 1)
			{
				while (chapter != 0)
				{
					while (true)
					{
						std::cout << "У нас есть: \n";
						std::cout << "1. Яблочный сок. Цена: " << costApple << "\n2. Апельсиновый сок. Цена: " << costOrange << "\n3. Абрикосовый сок. Цена: " << costApricot << " \n4. Грушквый сок. Цена: " << costPear << "\nЧто вы хотите: ";
						std::cin >> drink;
						if (drink > 0 && drink <= countJuice)
						{
							break;
						}
					}
					while (true)
					{
						std::cout << "Введите кол-во: ";
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
						std::cout << "Вы получили " << count / 4 << " литр(а) сока бесплатно.\n";
					}

					allCost += costJucieFruit[drink - 1] * count;
					std::cout << "Итоговая цена: " << allCost << "\n";
					std::cout << "Если больше нечего не нужно в этом разделе введите 0: ";
					std::cin >> chapter;
				}

			}
			else if (chapter == 2)
			{
				while (true)
				{
					std::cout << "У нас есть: \n";
					std::cout << "1. Томатный сок. Цена: " << costTomato << "\n2. Луковый сок. Цена: " << costOnion << "\n3. Огуречный сок. Цена: " << costCucumber << "\nЧто вы хотите: ";
					std::cin >> drink;
					if (drink > 0 && drink <= countVegetables)
					{
						break;
					}
				}
				while (true)
				{
					std::cout << "Введите кол-во: ";
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
					std::cout << "Вы получили " << count / 4 << " литр(а) сока бесплатно.\n";
				}
				else
				{
					allCost += costJucieVegetable[drink - 1] * count;
				}
				std::cout << "Итоговая цена: " << allCost << "\n";
				std::cout << "Если больше нечего не нужно в этом разделе введите 0, иначе любое другое число: ";
				std::cin >> chapter;
			}
			else if (chapter == 3)
			{
				while (true)
				{
					std::cout << "У нас есть: \n";
					std::cout << "1. Чесночный чай. Цена: " << costTeaOnion << "\n2. Петрушевый чай. Цена: " << costTeaParsley << "3. Чёрный чай. Цена: " << costTeaBlack << "4. Зелёный чай. Цена: " << costTeaGrean << "\nЧто вы хотите: ";
					std::cin >> drink;
					if (drink > 0 && drink <= countTea)
					{
						break;
					}
				}
				while (true)
				{
					std::cout << "Введите кол-во: ";
					std::cin >> count;
					if (count > 0)
					{
						break;
					}
				}
				if (drink == 2 && count >= 3)
				{
					allCost += tea[drink - 1] * count * 0.95;
					std::cout << "Ваша скидка: " << tea[drink - 1] * count - tea[drink - 1] * count * 0.95;
					discount += tea[drink - 1] * count - tea[drink - 1] * count * 0.95;
				}
				else
				{
					allCost += tea[drink - 1] * count;
				}
				std::cout << "Итоговая цена: " << allCost << "\n";
				std::cout << "Если больше нечего не нужно в этом разделе введите 0, иначе любое другое число: ";
				std::cin >> chapter;
			}
			else
			{
				std::cout << "Такой категории нет\n";
			}

			std::cout << "Если вам больше ничего не надо введите 0, иначе любое другое число: ";
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
		std::cout << "Итоговая цена: " << allCost << " Скидка: " << discount << " Бесплатные литры: " << freeJuice;
	}



	return 0;


}