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

// ������� ���������� ������� �� ��������� �����������.
DataTable^ Sort(bool isGrowth, bool isDecrease, bool isWoman, bool isMan, vector<int> index, int numClothes, Clothes* clothesList, DataTable^ table);

// ������� ��������� �������� � ������ ����� �� ���������������� �������.
int RemoveElement(Clothes array[], String^ IdStr, int numClothes);

// ������� ���� ��������� �����: ������ �� �������.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string color, string size);

// ������� ���� ��������� �����: �������, ������ �� ���������.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string color, string season, string produce);

// ������� ��������� ������ � ��������� �������� �� ��'�� �����������.
void DeleteFeedBack(Clothes* clothesList, int numClothes, int id, string UserName);

// ������� ��������� ������ ������ �� ��������� ��������.
void AddNewFeedback(int id, int numClothes, Clothes* clothesList, string UserName, string FeedBack);

// ������� ������ ����� � ����.
void WriteData(Clothes* clothesList, int numClothes);
