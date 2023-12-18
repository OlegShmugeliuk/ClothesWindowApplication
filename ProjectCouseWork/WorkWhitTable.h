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

//Функція для повного створення таблички 
DataTable^ DrucTable(Clothes* clothesList, int numClothes);

//Функція для ініціалізації таблички  
DataTable^ CreateLable();

//Функція для заповнення таблички з певними параметрами
DataRow^ FillTable(Clothes* clothesList, DataTable^ table, int i, int j);
