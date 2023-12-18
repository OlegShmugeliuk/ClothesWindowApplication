#include "WorkWhitTable.h"

// Функція для створення та завповнення таблички
DataTable^ DrucTable(Clothes* clothesList, int numClothes) {
	DataTable^ table = gcnew DataTable();
	table->Columns->Add("#");
	table->Columns->Add("ID");
	table->Columns->Add("Name");
	table->Columns->Add("Type");
	table->Columns->Add("Subtype");
	table->Columns->Add("Gender Type");
	table->Columns->Add("Size");
	table->Columns->Add("Color");
	table->Columns->Add("Season");
	table->Columns->Add("Producer");
	table->Columns->Add("Price");
	table->Columns->Add("User feedback");

	for (int i = 0; i < numClothes; i++) {

		DataRow^ row = table->NewRow();
		row["#"] = i + 1;
		row["ID"] = clothesList[i].GetId();
		row["Name"] = gcnew String(clothesList[i].GetNameClothes().c_str());
		row["Type"] = gcnew String(clothesList[i].GetType().c_str());
		row["Subtype"] = gcnew String(clothesList[i].GetSubType().c_str());
		row["Gender Type"] = gcnew String(clothesList[i].GetGender().c_str());
		row["Size"] = gcnew String(clothesList[i].GetSizeClothes().c_str());
		row["Color"] = gcnew String(clothesList[i].GetColorClothes().c_str());
		row["Season"] = gcnew String(clothesList[i].GetSeason().c_str());
		row["Producer"] = gcnew String(clothesList[i].GetProducer().c_str());
		row["Price"] = clothesList[i].GetCost();
		row["User feedback"] = gcnew String(clothesList[i].GetResponse().c_str());

		table->Rows->Add(row);
	}
	return table;
}

//Функція для ініціалізації таблички (створення заголовків)
DataTable^ CreateLable() {
		DataTable^ table = gcnew DataTable();
		table->Columns->Add("#");
		table->Columns->Add("Name");
		table->Columns->Add("ID");
		table->Columns->Add("Type");
		table->Columns->Add("Subtype");
		table->Columns->Add("Gender Type");
		table->Columns->Add("Size");
		table->Columns->Add("Color");
		table->Columns->Add("Season");
		table->Columns->Add("Producer");
		table->Columns->Add("Price");
		table->Columns->Add("User feedback");
		return table;
}

// Функція для створення таблички з для певних параметрів 
DataRow^ FillTable(Clothes* clothesList,DataTable^ table, int i, int j) {
	DataRow^ row = table->NewRow();
	row["#"] = j + 1;
	row["ID"] = clothesList[i].GetId();
	row["Name"] = gcnew String(clothesList[i].GetNameClothes().c_str());
	row["Type"] = gcnew String(clothesList[i].GetType().c_str());
	row["Subtype"] = gcnew String(clothesList[i].GetSubType().c_str());
	row["Gender Type"] = gcnew String(clothesList[i].GetGender().c_str());
	row["Size"] = gcnew String(clothesList[i].GetSizeClothes().c_str());
	row["Color"] = gcnew String(clothesList[i].GetColorClothes().c_str());
	row["Season"] = gcnew String(clothesList[i].GetSeason().c_str());
	row["Producer"] = gcnew String(clothesList[i].GetProducer().c_str());
	row["Price"] = clothesList[i].GetCost();
	row["User feedback"] = gcnew String(clothesList[i].GetResponse().c_str());
	return row;

}