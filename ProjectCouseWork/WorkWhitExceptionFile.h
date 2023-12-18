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

// ������� ��������� ����������� ��� ������� � ��� MessageBox ��� ������� ���������� ���� std::exception.
void ShowErrorMessageBox(const std::exception& e);

// ������� �������� �� ������ ������ ��������� �������.
bool prohibitedSimbols(string str);

// ������� �������� �� ������ ������ �����.
bool containsDigits(const std::string& str);

// ������� �������� ���������� ����������������� ������ ��� �������� ������ �����.
bool checkForAddingNewId(string id, int numClothes, Clothes* clothesList);

// ������� �������� ����������� ������� ����.
bool checkGender(string genderStr);

// ������� �������� ���������� ������� ������� �����.
bool checkCostField(const std::string& cost);

// ������� �������� ���������� ����'������� ���� �� ���������� �������� ����� ��� ������ �����.
bool checkField(int id, const std::string& name, const std::string& type,
    const std::string& subtype, const std::string& gender,
    const std::string& size, const std::string& color,
    const std::string& season, const std::string& producer,
    double cost, const std::string& UserName,
    const std::string& FeedBack);

// ������� �������� �� ���� ����� ����� ���������.
bool DataBaseFill(Clothes* clothesList, int numClothes);

// ������� �������� ����������� ���� ������� � ������.
bool ExceedingLimitSymbols(string str);

// ������� �������� ���������� ��������� ������ �����.
bool checkingCorrectnessSpecifiedSizeClothes(string SizeClothes);

// ������� �������� ����������������� ������ � ���������� ����������� ��� �������.
int IdVerification(String^ text, Clothes* clothesList, int numClothes);

// ������� �������� ���������� ���� �����������.
bool IdUserName(string userName);
