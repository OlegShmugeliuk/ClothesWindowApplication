#ifndef CLOTHES_H
#define CLOTHES_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <String>
#include <cctype>
#include <msclr/marshal_cppstd.h>  
#include <msclr/marshal.h>  
#include <vector>
#include <algorithm>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace std;

// ���� ���� ����� ����. �� ������� ���� �����, ���, �����, ������, �����, ����, �����, ��������, ����, ������, ���������������� �����
class Clothes {
private:
    string NameClothes;
    string Type;
    string SubType;
    string Gender;
    string SizeClothes;
    string ColorClothes;
    string Season;
    string Producer;
    double Cost;
    string Response;
    int ID;
    

public:
    // �������
    int GetId();
    string GetNameClothes() const;
    string GetType() const;
    string GetSubType() const;
    string GetGender() const;
    string GetSizeClothes();
    string GetColorClothes() const;
    string GetSeason() const;
    string GetProducer() const;
    double GetCost() const;
    string GetResponse() const;

    // �������
    void SetId(int id);    
    void SetNameClothes(string name);
    void SetType(const string& type);  
    void SetSubType(const string& subType);    
    void SetGender(const string& gender);    
    void SetSizeClothes(string size);    
    void SetColorClothes(const string& color);    
    void SetSeason(const string& season);    
    void SetProducer(const string& producer);    
    void SetCost(double cost);    
    void SetResponse(const string& response);

public:
    //����������� �� ����������
    Clothes();
    
    //�����������
    Clothes(int id, string name, string type, string subType, string g, string size, string color, string season, string producer, double cost, string response);
    
    // ����� �������
    friend ostream& operator<<(ostream& out, vector<Clothes>& clothes);
    friend std::istream& operator>>(std::istream& in, std::vector<Clothes>& listClothes);
    
    //����������� ���������
    Clothes(const Clothes& other);
    
    //��������� ������ ������
    void AddNewResponce(string str);    

    //�������� ��������
    DataTable^ ClearTable(DataTable^ table);
    
};

#endif // CLOTHES_H
