#include "WorkWhitData.h"

// Функція видалення елемента з масиву одягу за ідентифікаційним номером.
int RemoveElement(Clothes array[], String^ IdStr, int numClothes) {	
	int id = System::Convert::ToInt32(IdVerification(IdStr, array, numClothes)), indexToRemove;
	for (int i = 0; i < numClothes; i++) {
		if (id == array[i].GetId()) {
			indexToRemove = i;
		}
	}
	if (id != 0) {
		for (int i = indexToRemove; i < numClothes - 1; i++) {
			array[i] = array[i + 1];
		}
		numClothes--;
		MessageBox::Show("Clothes with Id "+id+" have been successfully deleted", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	
	return numClothes;
}

// Функція сортування таблиці за вказаними параметрами.
DataTable^ Sort(bool isGrowth, bool isDecrease, bool isWoman, bool isMan, vector<int> index, const int numClothes, Clothes* clothesList, DataTable^ tableOld) {
    DataTable^ table = CreateLable();
    int k = 0;

    try {
        if (!isGrowth && !isDecrease) {
            throw IsGrowthOrDecrease();
        }
    }
    catch (const  IsGrowthOrDecrease& e) {
        String^ errorMessage = gcnew String(e.what());
        MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return tableOld;
    }

    for (int i = 1; i < index.size(); i++) {
        Clothes key = clothesList[index[i]];
        int j = index[i] - 1;
        while ((j >= 0) && ((isGrowth && (clothesList[j].GetCost() > key.GetCost())) || (isDecrease && (clothesList[j].GetCost() < key.GetCost())))) {
            clothesList[j + 1] = clothesList[j];
            j = j - 1;
        }
        clothesList[j + 1] = key;
    }
    for (int i = 0; i < numClothes; i++) {
        if ((!isWoman && !isMan) || (isWoman && gcnew String(clothesList[i].GetGender().c_str()) == "Woman") || (isMan && gcnew String(clothesList[i].GetGender().c_str()) == "Man")) {
            DataRow^ row = FillTable(clothesList, table, i, k);
            table->Rows->Add(row);
            k++;
        }
    }

    return table;
}

// Функція зміни параметрів одягу: розміру та кольору.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string changeColor, string changeSize) {
	Clothes* newList = clothesList;

	for (int i = 0; i < numClothes; i++) {
		if (ID == newList[i].GetId()) {
			if (changeSize != "") {
				if (ExceedingLimitSymbols(changeSize) && !containsDigits(changeSize) && checkingCorrectnessSpecifiedSizeClothes(changeSize)) {
					newList[i].SetSizeClothes(changeSize);
				}
			}
			if ((changeColor != "")) {
				if (ExceedingLimitSymbols(changeColor) && !containsDigits(changeColor)) {
					newList[i].SetColorClothes(changeColor);
				}
			}
		}
	}

	return newList;
}

// Функція зміни параметрів одягу: сезону, кольору та виробника.
Clothes* ChangeParams(Clothes* clothesList, int numClothes, int ID, string changeColor, string changeSeason, string changeProducer) {
	Clothes* newList = clothesList;

	for (int i = 0; i < numClothes; i++) {
		if (ID == newList[i].GetId()) {
			if (changeSeason != "") {
				if (ExceedingLimitSymbols(changeSeason) && !containsDigits(changeSeason)) {
					newList[i].SetSeason(changeSeason);
				}
			}
			if ((changeColor != "")) {
				if (ExceedingLimitSymbols(changeColor) && !containsDigits(changeColor)) {
					newList[i].SetColorClothes(changeColor);
				}
			}
			if ((changeProducer != "")) {
				if (ExceedingLimitSymbols(changeProducer) && !containsDigits(changeProducer)) {
					newList[i].SetProducer(changeProducer);
				}
			}
		}
	}

	return newList;
}

// Функція видалення відгуку з вказаного продукту за ім'ям користувача.
void DeleteFeedBack(Clothes* clothesList, int numClothes, int id, string UserName) {
	for (int i = 0; i < numClothes; i++)
	{
		String^ UserNameFroMassege = gcnew String(UserName.c_str());
		if (id == clothesList[i].GetId()) {
			string response = clothesList[i].GetResponse();
			size_t userNameIndex = response.find(UserName);
			if (userNameIndex != string::npos)
			{
				size_t newlineIndex = response.find('\n', userNameIndex);

				if (newlineIndex != string::npos)
				{
					response.erase(userNameIndex, newlineIndex - userNameIndex + 1);
					MessageBox::Show("The user feedback '" + UserNameFroMassege + "' has been successfully removed from the product with Id "+id+"\nClick the Update button to see the result", "", MessageBoxButtons::OK, MessageBoxIcon::Information);


				}
			}
			clothesList[i].SetResponse(response);
		}
	}
}

// Функція додавання нового відгуку до вказаного продукту.
void AddNewFeedback(int id, int numClothes, Clothes* clothesList, string UserName, string FeedBack) {
	for (int i = 0; i < numClothes; i++) {
		if (id == clothesList[i].GetId()) {
			clothesList[i].AddNewResponce(UserName + "-" + FeedBack);
		}
	}
}

// Функція запису даних у файл.
void WriteData(Clothes* clothesList, int numClothes) {
	    if (DataBaseFill(clothesList, numClothes)) {
	        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	        openFileDialog->RestoreDirectory = true;
	        openFileDialog->RestoreDirectory = true;
	
	        if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	        {
	            String^ fileName = openFileDialog->FileName;
	            string file = msclr::interop::marshal_as<std::string>(fileName);
	
	            fstream out(file);
	            std::string extension = file.substr(file.find_last_of(".") + 1);
	            try {
	                if (extension != "txt") {
						throw IncorrectFileExtension();
	                }
	            }
	            catch (const IncorrectFileExtension& e) {
	                ShowErrorMessageBox(e);
	                return;
	            }	
	           if (out.is_open()) {	                
				   std::vector<Clothes> vectorClothes(clothesList, clothesList + numClothes);				   
				   out << vectorClothes;

	                MessageBox::Show("Data was successfully written to the file", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
	            }
	            else {
	                try {
	                    throw OpenNotFile();
	                }
	                catch (const OpenNotFile& e) {
	                    String^ errorMessage = gcnew String(e.what());
	                    MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	                    return;
	                }
	            }
	        }
	    }
	}