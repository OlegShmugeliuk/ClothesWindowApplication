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

//������� ��� ������� ��������� �������� 
DataTable^ DrucTable(Clothes* clothesList, int numClothes);

//������� ��� ����������� ��������  
DataTable^ CreateLable();

//������� ��� ���������� �������� � ������� �����������
DataRow^ FillTable(Clothes* clothesList, DataTable^ table, int i, int j);
