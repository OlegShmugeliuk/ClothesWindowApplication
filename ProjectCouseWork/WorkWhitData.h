#include <stdexcept>
#include "MyForm.h"
#include <string>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::Windows::Forms;

// Функція сортування таблиці за вказаними параметрами.
DataTable^ Sort(bool isGrowth, bool isDecrease, bool isWoman, bool isMan, vector<int> index, int numClothes, Clothes* clothesList, DataTable^ table);

// Функція видалення елемента з масиву одягу за ідентифікаційним номером.
int RemoveElement(Clothes array[], String^ IdStr, int numClothes);

// Функція зміни параметрів одягу: розміру та кольору.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string color, string size);

// Функція зміни параметрів одягу: кольору, сезону та виробника.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string color, string season, string produce);

// Функція видалення відгуку з вказаного продукту за ім'ям користувача.
void DeleteFeedBack(Clothes* clothesList, int numClothes, int id, string UserName);

// Функція додавання нового відгуку до вказаного продукту.
void AddNewFeedback(int id, int numClothes, Clothes* clothesList, string UserName, string FeedBack);

// Функція запису даних у файл.
void WriteData(Clothes* clothesList, int numClothes);
