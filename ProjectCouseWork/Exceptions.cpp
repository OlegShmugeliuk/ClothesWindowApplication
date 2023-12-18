#include <iostream>
using namespace std;

//================================================================================
// ����������, ��� ������, ���� ������� ����� ������ ���� � ���.
class NumberWasEntered : public exception {
public:
    const char* what() const noexcept override {
        return "This field must contain only letters";
    }
};

//================================================================================
// ����������, ��� ������, ���� ���� � ���� ���� �� ��������� ��� ������.
class TapeIsEmptyForFound : public exception {
public:
    const char* what() const noexcept override {
        return "At least one field must be filled";
    }
};

//================================================================================
// ����������, ��� ������, ���� ������� �� ���� � ��� �����.
class DoesNotExist : public exception {
public:
    const char* what() const noexcept override {
        return "This element does not exist";
    }
};
//================================================================================
// ����������, ��� ������, ���� �� ������ ������� �������.
class ChooseLeastOneGender : public exception {
public:
    const char* what() const noexcept override {
        return "Choose at least one gender";
    }
};
//================================================================================
// ����������, ��� ������, ���� � ��� ����� ���� ��������� �����.
class ManClothesInDataBase : public exception {
public:
    const char* what() const noexcept override {
        return "There is no Men's clothing in the base";
    }
};
//================================================================================
// ����������, ��� ������, ���� � ��� ����� ���� ������� �����.
class WomanClothesInDataBase : public exception {
public:
    const char* what() const noexcept override {
        return "There is no Woman's clothing in the base";
    }
};

//================================================================================
// ����������, ��� ������, ���� �� ������ ������� ����������.
class IsGrowthOrDecrease : public exception {
public:
    const char* what() const noexcept override {
        return "Choose any sort criteria";
    }
};
//================================================================================
// ����������, ��� ������, ���� ������� �������� �� � ������.
class IsNumeric : public exception {
public:
    const char* what() const noexcept override {
        return "ID must be a number";
    }
};
//================================================================================
// ����������, ��� ������, ���� ID �� ���� � ��� �����.
class HaveNotId : public exception {
public:
    const char* what() const noexcept override {
        return "This Id does not exist";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���� �� ���������.
class IsFieldFilled : public exception {
public:
    const char* what() const noexcept override {
        return "This field must be filled ";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���������� ��� ���������� ������� �� ��'�.
class NotFullUserName : public exception {
public:
    const char* what() const noexcept override {
        return "The field 'User name' must not contain numbers and symbols '*/+-..'";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���������� ��� ���������� ������� �� ��'�.
class NotGoodTypeOfTape : public exception {
public:
    const char* what() const noexcept override {
        return "The field 'User name' must contain the following format 'Name Surname'";
    }
};
//================================================================================
// ����������, ��� ������, ���� ����������� �� �������� � ������.
class UserNotExist : public exception {
public:
    const char* what() const noexcept override {
        return "No user found ";
    }
};
//================================================================================
// ����������, ��� ��������, �� ������� ������ ������ ������� �� 0-100.
class TypicalTapeWithoutDigits : public exception {
public:
    const char* what() const noexcept override {
        return "Must not contain numbers or illegal characters '*{?%^$'";
    }
};
//================================================================================
// ����������, ��� ��������, �� ����� � ������ ����� �����������.
class DataBaseNotFill : public exception {
public:
    const char* what() const noexcept override {
        return "Data base doesn't fill, click on the 'Read' button";
    }
};
//================================================================================
// ����������, ��� ��������, �� ���� �� � ������.
class FileIsEmpty : public exception {
public:
    const char* what() const noexcept override {
        return "This file is empty";
    }
};
// ����������, ��� ��������, �� ���� ��������.
class OpenNotFile : public exception {
public:
    const char* what() const noexcept override {
        return "This file doesn't open";
    }
};
//================================================================================
// ����������, ��� ��������, �� ������� ������ ������ �� ����� 100 �������.
class CharacterLimitExceeded : public exception {
public:
    const char* what() const noexcept override {
        return "The field must contain no more than 100 characters";
    }
};
//================================================================================
// ����������, ��� ��������, �� �������� ����� ����� ������� ����������� �������.
class �heckingValiditySizeClothes : public exception {
public:
    const char* what() const noexcept override {
        return "String must be entered via ','\n The clothing size should be listed with the following types\n 'S, M, L, XL, XXL, XXXL, XXXXL, XXXXXL'";
    }
};
//================================================================================
// ����������, ��� ������, ���� ID ��� ���� � ��� �����.
class IdExcist : public exception {
public:
    const char* what() const noexcept override {
        return "This ID already exists, enter another";
    }
};
//================================================================================
// ����������, ��� ��������, �� ID ����������� � ����������� �������.
class IdSize : public exception {
public:
    const char* what() const noexcept override {
        return "Size id should blow from 4 to 9 and more than 0";
    }
};
//================================================================================
// ����������, ��� ��������, �� ��� ������� ������� ���������.
class GenderType : public exception {
public:
    const char* what() const noexcept override {
        return "The gender field contains only such types 'Man, Woman or Unisex' ";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���� ������� �� ���������.
class CostIsEmpty : public exception {
public:
    const char* what() const noexcept override {
        return "Cost should be filled";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���� ������� ������ ������.
class ContainSpace : public exception {
public:
    const char* what() const noexcept override {
        return "Cost must not contain spaces";
    }
};
//================================================================================
// ����������, ��� ������, ���� ������� ������� � ��'������ ������.
class ContainISNegativeNumber : public exception {
public:
    const char* what() const noexcept override {
        return "Cost is a negative number";
    }
};
//================================================================================
// ����������, ��� ������, ���� ������� �� � ������.
class IsCostNumeric : public exception {
public:
    const char* what() const noexcept override {
        return "Cost must be a number";
    }
};
//================================================================================
// ����������, ��� ������, ���� ���� �� ����������� ����������.
class IncorrectFileExtension : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Unsupported file format. Only files with a .txt extension are allowed";
    }
};
