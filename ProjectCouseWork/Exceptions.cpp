#include <iostream>
using namespace std;

//================================================================================
// Виключення, яке виникає, коли введене число замість літер у полі.
class NumberWasEntered : public exception {
public:
    const char* what() const noexcept override {
        return "This field must contain only letters";
    }
};

//================================================================================
// Виключення, яке виникає, коли хоча б одне поле не заповнене при пошуку.
class TapeIsEmptyForFound : public exception {
public:
    const char* what() const noexcept override {
        return "At least one field must be filled";
    }
};

//================================================================================
// Виключення, яке виникає, коли елемент не існує в базі даних.
class DoesNotExist : public exception {
public:
    const char* what() const noexcept override {
        return "This element does not exist";
    }
};
//================================================================================
// Виключення, яке виникає, якщо не обрано жодного гендера.
class ChooseLeastOneGender : public exception {
public:
    const char* what() const noexcept override {
        return "Choose at least one gender";
    }
};
//================================================================================
// Виключення, яке виникає, коли в базі даних немає чоловічого одягу.
class ManClothesInDataBase : public exception {
public:
    const char* what() const noexcept override {
        return "There is no Men's clothing in the base";
    }
};
//================================================================================
// Виключення, яке виникає, коли в базі даних немає жіночого одягу.
class WomanClothesInDataBase : public exception {
public:
    const char* what() const noexcept override {
        return "There is no Woman's clothing in the base";
    }
};

//================================================================================
// Виключення, яке виникає, якщо не обрано критерій сортування.
class IsGrowthOrDecrease : public exception {
public:
    const char* what() const noexcept override {
        return "Choose any sort criteria";
    }
};
//================================================================================
// Виключення, яке виникає, якщо введене значення не є числом.
class IsNumeric : public exception {
public:
    const char* what() const noexcept override {
        return "ID must be a number";
    }
};
//================================================================================
// Виключення, яке виникає, якщо ID не існує в базі даних.
class HaveNotId : public exception {
public:
    const char* what() const noexcept override {
        return "This Id does not exist";
    }
};
//================================================================================
// Виключення, яке виникає, якщо поле не заповнене.
class IsFieldFilled : public exception {
public:
    const char* what() const noexcept override {
        return "This field must be filled ";
    }
};
//================================================================================
// Виключення, яке виникає, якщо користувач ввів некоректне прізвище та ім'я.
class NotFullUserName : public exception {
public:
    const char* what() const noexcept override {
        return "The field 'User name' must not contain numbers and symbols '*/+-..'";
    }
};
//================================================================================
// Виключення, яке виникає, якщо користувач ввів некоректне прізвище та ім'я.
class NotGoodTypeOfTape : public exception {
public:
    const char* what() const noexcept override {
        return "The field 'User name' must contain the following format 'Name Surname'";
    }
};
//================================================================================
// Виключення, яке виникає, якщо користувача не знайдено в системі.
class UserNotExist : public exception {
public:
    const char* what() const noexcept override {
        return "No user found ";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи введена стрічка містить символи від 0-100.
class TypicalTapeWithoutDigits : public exception {
public:
    const char* what() const noexcept override {
        return "Must not contain numbers or illegal characters '*{?%^$'";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи змінна з вмістом файлу заповнилась.
class DataBaseNotFill : public exception {
public:
    const char* what() const noexcept override {
        return "Data base doesn't fill, click on the 'Read' button";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи файл не є пустим.
class FileIsEmpty : public exception {
public:
    const char* what() const noexcept override {
        return "This file is empty";
    }
};
// Виключення, яке перевіряє, чи файл відкрився.
class OpenNotFile : public exception {
public:
    const char* what() const noexcept override {
        return "This file doesn't open";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи введена стрічка містить не більше 100 символів.
class CharacterLimitExceeded : public exception {
public:
    const char* what() const noexcept override {
        return "The field must contain no more than 100 characters";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи введений розмір одягу відповідає правильному формату.
class СheckingValiditySizeClothes : public exception {
public:
    const char* what() const noexcept override {
        return "String must be entered via ','\n The clothing size should be listed with the following types\n 'S, M, L, XL, XXL, XXXL, XXXXL, XXXXXL'";
    }
};
//================================================================================
// Виключення, яке виникає, якщо ID вже існує в базі даних.
class IdExcist : public exception {
public:
    const char* what() const noexcept override {
        return "This ID already exists, enter another";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи ID знаходиться в правильному діапазоні.
class IdSize : public exception {
public:
    const char* what() const noexcept override {
        return "Size id should blow from 4 to 9 and more than 0";
    }
};
//================================================================================
// Виключення, яке перевіряє, чи тип гендеру введено правильно.
class GenderType : public exception {
public:
    const char* what() const noexcept override {
        return "The gender field contains only such types 'Man, Woman or Unisex' ";
    }
};
//================================================================================
// Виключення, яке виникає, коли поле вартості не заповнене.
class CostIsEmpty : public exception {
public:
    const char* what() const noexcept override {
        return "Cost should be filled";
    }
};
//================================================================================
// Виключення, яке виникає, якщо поле вартості містить пробіли.
class ContainSpace : public exception {
public:
    const char* what() const noexcept override {
        return "Cost must not contain spaces";
    }
};
//================================================================================
// Виключення, яке виникає, якщо вартість введена у від'ємному форматі.
class ContainISNegativeNumber : public exception {
public:
    const char* what() const noexcept override {
        return "Cost is a negative number";
    }
};
//================================================================================
// Виключення, яке виникає, якщо вартість не є числом.
class IsCostNumeric : public exception {
public:
    const char* what() const noexcept override {
        return "Cost must be a number";
    }
};
//================================================================================
// Виключення, яке виникає, якщо файл має неправильне розширення.
class IncorrectFileExtension : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Unsupported file format. Only files with a .txt extension are allowed";
    }
};
