#include "MyForm.h"
#include "WorkWhitExceptionFile.h"
#include <string>
#include <regex>
#include <iostream>

// Функція виведення повідомлення про помилку у вікні MessageBox для обробки виключення типу std::exception.
void ShowErrorMessageBox(const std::exception& e) {
    String^ errorMessage = gcnew String(e.what());
    MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

//для перевірки чи стрічка мість цифру
bool prohibitedSimbols(string str) {
	string simbols = "*=)(*&^%$#@!~?|'<>}{ ";
	for (int i = 0; i < str.size(); i++) {
		for (int j = 0; j < simbols.size(); j++) {
			if (str[i] == simbols[j]) {
				return true;
			}
		}
	}
	return false;
}




// Функція перевірки чи стрічка містить цифри.
bool containsDigits(const std::string& str) {
	
	System::String^ Str = msclr::interop::marshal_as<System::String^>(str);
	
	bool checkingContainsNumber = false;	
	for (char c : str) {
		if (std::isdigit(c)) {
			checkingContainsNumber = true;
		}
	}
	bool Simbols = prohibitedSimbols(str);
	try {
		if (checkingContainsNumber || Simbols)
			throw TypicalTapeWithoutDigits();
	}
	catch (const TypicalTapeWithoutDigits& e) {
		ShowErrorMessageBox(e);
		return true;
	}
	return false;
	
}

// Функція перевірки чи база даних одягу заповнена.
bool DataBaseFill(Clothes* clothesList, int numClothes) {
	try {
		if (clothesList == nullptr || numClothes==0) {
			throw DataBaseNotFill(); 
		}

	}
	catch (const DataBaseNotFill& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
	return true;
}

// Функція перевірки перевищення ліміту символів у стрічці.
bool ExceedingLimitSymbols(string str) {
	try {
		if (str.length() > 100) {
			throw CharacterLimitExceeded();
		}
	}
	catch (const CharacterLimitExceeded& e) {
		ShowErrorMessageBox(e);
		return false;
	}
	return true;
}

// Функція перевірки коректності вказаного розміру одягу.
bool checkingCorrectnessSpecifiedSizeClothes(string SizeClothes) {
	bool checkingCorrectnessSpecifiedSizeClothes = false;
	string token;
	std::stringstream ss(SizeClothes);
	vector<string> arraySize;
	while (getline(ss, token, ',')) {
		arraySize.push_back(token);
	}

	vector<string> TypeSizeClothes = { "S", "M", "L", "XL", "XXL", "XXXL", "XXXXL", "XXXXXL" };
	for (int i = 0; i < arraySize.size(); i++) {

		for (int j = 0; j < TypeSizeClothes.size(); j++) {
			if (arraySize[i] != TypeSizeClothes[j]) {
				checkingCorrectnessSpecifiedSizeClothes = true;
			}
			else {
				checkingCorrectnessSpecifiedSizeClothes = false;
				break;
			}
		}
	}

	try {
		if (checkingCorrectnessSpecifiedSizeClothes) {
			throw СheckingValiditySizeClothes();
		}
	}
	catch (const СheckingValiditySizeClothes& e) {
		ShowErrorMessageBox(e);
		return false;
	}
	return true;
}


// Функція перевірки ідентифікаційного номера з виведенням повідомлення про помилку.
int IdVerification(String^ text, Clothes* clothesList, int numClothes) {
	int id;
	bool IsNotNumericValue;
	try {
		if (String::IsNullOrEmpty(text))
			throw IsFieldFilled();
	}
	catch (const IsFieldFilled& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage + " 'Id clothes'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return 0;

	}

	if (Int32::TryParse(text, id))
		IsNotNumericValue = false;

	else
		IsNotNumericValue = true;
	try {
		if (IsNotNumericValue) {
			throw IsNumeric();
		}
	}
	catch (const IsNumeric& e) {
		ShowErrorMessageBox(e);
		return 0;

	}
	bool isProductWithId = true;
	for (int i = 0; i < numClothes; i++) {
		if (clothesList[i].GetId() == id) {
			isProductWithId = false;
		}
	}
	try {
		if (isProductWithId)
			throw HaveNotId();
	}
	catch (const HaveNotId& e) {
		ShowErrorMessageBox(e);
		return 0;

	}
	return id;
}

// Функція перевірки коректності імені користувача для додавання нового одягу.
bool IdUserNameForAddNewClothes(string userName) {
	if (!userName.empty()) {
		for (char ch : userName) {
			if (!isalpha(ch) && ch != ' ') {
				try {
					throw NotFullUserName();

				}
				catch (const NotFullUserName& e) {
					ShowErrorMessageBox(e);
					return false;
				}
			}
		}
		size_t spaceCount = std::count(userName.begin(), userName.end(), ' ');
		if (spaceCount != 1) {
			try {
				throw NotGoodTypeOfTape();

			}
			catch (const NotGoodTypeOfTape& e) {
				ShowErrorMessageBox(e);
				return false;
			}
		}
	}
	return true;


}

// Функція перевірки коректності імені користувача.
bool IdUserName(string userName) {

	try {
		if (userName.empty()) {
			IsFieldFilled();

		}
	}
	catch (const IsFieldFilled& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage + " 'User name'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	for (char ch : userName) {
		if (!isalpha(ch) && ch != ' ') {
			try {
				throw NotFullUserName();

			}
			catch (const NotFullUserName& e) {
				ShowErrorMessageBox(e);
				return false;
			}
		}
	}

	size_t spaceCount = std::count(userName.begin(), userName.end(), ' ');
	if (spaceCount != 1) {
		try {
			throw NotGoodTypeOfTape();

		}
		catch (const NotGoodTypeOfTape& e) {
			ShowErrorMessageBox(e);
			return false;
		}
	}
	return true;


}

// Функція перевірки унікальності ідентифікаційного номера при додаванні нового одягу.
bool checkForAddingNewId(string id, int numClothes, Clothes* clothesList) {
	String^ text = gcnew String(id.c_str());
	int Id;
	bool IsNotNumericValue;
	try {
		if (String::IsNullOrEmpty(text))
			throw IsFieldFilled();
	}
	catch (const IsFieldFilled& e) {
		String^ errorMessage = gcnew String(e.what());
		MessageBox::Show(errorMessage + " 'Id clothes'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

	if (Int32::TryParse(text, Id))
		IsNotNumericValue = false;
	else
		IsNotNumericValue = true;
	try {
		if (IsNotNumericValue) {
			throw IsNumeric();
		}
	}
	catch (const IsNumeric& e) {
		ShowErrorMessageBox(e);
		return  false;
	}
	for (int i = 0; i < numClothes; i++) {
		try {
			if (clothesList[i].GetId() == Id) {
				throw IdExcist();
			}
		}
		catch (const IdExcist& e) {
			ShowErrorMessageBox(e);
			return false;
		}
	}
	try {
		if (Id < 0 || id.size() > 9 || id.size() < 4) {
			throw IdSize();
		}
	}
	catch (const IdSize& e) {
		ShowErrorMessageBox(e);
		return false;
	}
	return true;
}


// Функція перевірки правильності вказаної статі.
bool checkGender(string genderStr) {
	vector<string> strAllGender = { "Man", "Woman", "Unisex" };

	transform(genderStr.begin(), genderStr.end(), genderStr.begin(), ::tolower);

	for (int i = 0; i < strAllGender.size(); i++) {
		string lowerCaseGender = strAllGender[i];
		transform(lowerCaseGender.begin(), lowerCaseGender.end(), lowerCaseGender.begin(), ::tolower);

		if (lowerCaseGender == genderStr) {
			return true;
		}
	}
	try {
		throw GenderType();
	}
	catch (const GenderType& e) {
		ShowErrorMessageBox(e);
		return false;
	}

	return true;
}

// Функція перевірки коректності вказаної вартості одягу.
bool checkCostField(const std::string& cost) {
	bool containsLetter = false;
	try {
		if (cost.empty()) {
			throw CostIsEmpty();
		}
	}
	catch (const CostIsEmpty& e) {
		ShowErrorMessageBox(e);
		return false;
	}

	try {
		if (prohibitedSimbols(cost))
			TypicalTapeWithoutDigits();
	}
	catch (const IsCostNumeric& e) {
		ShowErrorMessageBox(e);
		return false;
	}
	for (char c : cost) {
		try {
			if (isalpha(c)) {
				throw IsCostNumeric();
			}
		}
		catch (const IsCostNumeric& e) {
			ShowErrorMessageBox(e);
			return false;
		}
	}

	for (char c : cost) {
		try {
			if (std::isspace(static_cast<unsigned char>(c))) {
				// Знайдено не пробіл, стрічка не складається лише з пробілів
				throw ContainSpace();
			}
		}
		catch (const ContainSpace& e) {
			ShowErrorMessageBox(e);
			return false;
		}
	}

	int num = stoi(cost); // Спробуємо конвертувати рядок у число
	try {
		if (num < 0) {
			throw ContainISNegativeNumber();
		}
	}
	catch (const ContainISNegativeNumber& e) {
		ShowErrorMessageBox(e);
		return false;
	}
	return true;
}


// Функція перевірки заповнення обов'язкових полів та коректності введених даних для нового одягу.
bool checkField(int id, const std::string& name, const std::string& type,
	const std::string& subtype, const std::string& gender,
	const std::string& size, const std::string& color,
	const std::string& season, const std::string& producer,
	double cost, const std::string& UserName,
	const std::string& FeedBack) {

	std::map<std::string, std::string> fieldValues;
	fieldValues["ID"] = std::to_string(id);
	fieldValues["Name"] = name;
	fieldValues["Type"] = type;
	fieldValues["Subtype"] = subtype;
	fieldValues["Gender"] = gender;
	fieldValues["Size"] = size;
	fieldValues["Color"] = color;
	fieldValues["Season"] = season;
	fieldValues["Producer"] = producer;
	fieldValues["Cost"] = std::to_string(cost);
	fieldValues["UserName"] = UserName;
	fieldValues["Feedback"] = FeedBack;

	bool auditFillFiealds = false;
	bool userNameAndFeedback = false;
	bool checkCost = false;
	bool checkSize = false;
	bool chackGender = false;


	for (const auto& pair : fieldValues) {
		try {
			if (pair.first != "UserName" && pair.first != "Feedback") {
				if (pair.second.empty()) {
					throw("Field " + pair.first + " is empty.");
				}
			}
		}
		catch (const string& e) {
			String^ errorMessage = gcnew String(e.c_str());
			MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return false;
		}
	}

	for (const auto& pair : fieldValues) {
		if (pair.first == "UserName") {
			if (IdUserNameForAddNewClothes(pair.second))
				userNameAndFeedback = true;
		}
		if (userNameAndFeedback && pair.first == "Feedback") {
			if (pair.second=="") {
				try {
					throw IsFieldFilled();
				}
				catch (const IsFieldFilled& e) {
					String^ errorMessage = gcnew String(e.what());
					MessageBox::Show(errorMessage + " 'Feedback'", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					userNameAndFeedback = false;
				}
				userNameAndFeedback = true;
			}
		}
		if (pair.first != "ID" && pair.first != "Cost" && pair.first != "UserName" && pair.first != "Feedback") {
			if (pair.first == "Size") {
				if (ExceedingLimitSymbols(pair.second) && (!containsDigits(pair.second)) && checkingCorrectnessSpecifiedSizeClothes(pair.second)) {
					checkSize = true;
				}
			}
			else if (pair.first != "Gender") {
				if (ExceedingLimitSymbols(pair.second) && (!containsDigits(pair.second))) {					
					auditFillFiealds = true;
				}
				else {
					auditFillFiealds = false;
					break;
				}
			}

			else {
				if (ExceedingLimitSymbols(pair.second) && (!containsDigits(pair.second)) && checkGender(pair.second)) {
					chackGender = true;
				}
				
			}

		}
	}

	return auditFillFiealds && chackGender && checkSize && userNameAndFeedback;
}