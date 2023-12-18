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

// Функція виведення повідомлення про помилку у вікні MessageBox для обробки виключення типу std::exception.
void ShowErrorMessageBox(const std::exception& e);

// Функція перевірки чи стрічка містить заборонені символи.
bool prohibitedSimbols(string str);

// Функція перевірки чи стрічка містить цифри.
bool containsDigits(const std::string& str);

// Функція перевірки унікальності ідентифікаційного номера при додаванні нового одягу.
bool checkForAddingNewId(string id, int numClothes, Clothes* clothesList);

// Функція перевірки правильності вказаної статі.
bool checkGender(string genderStr);

// Функція перевірки коректності вказаної вартості одягу.
bool checkCostField(const std::string& cost);

// Функція перевірки заповнення обов'язкових полів та коректності введених даних для нового одягу.
bool checkField(int id, const std::string& name, const std::string& type,
    const std::string& subtype, const std::string& gender,
    const std::string& size, const std::string& color,
    const std::string& season, const std::string& producer,
    double cost, const std::string& UserName,
    const std::string& FeedBack);

// Функція перевірки чи база даних одягу заповнена.
bool DataBaseFill(Clothes* clothesList, int numClothes);

// Функція перевірки перевищення ліміту символів у стрічці.
bool ExceedingLimitSymbols(string str);

// Функція перевірки коректності вказаного розміру одягу.
bool checkingCorrectnessSpecifiedSizeClothes(string SizeClothes);

// Функція перевірки ідентифікаційного номера з виведенням повідомлення про помилку.
int IdVerification(String^ text, Clothes* clothesList, int numClothes);

// Функція перевірки коректності імені користувача.
bool IdUserName(string userName);
