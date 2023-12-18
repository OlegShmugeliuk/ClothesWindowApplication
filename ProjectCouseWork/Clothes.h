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

// Клас який описує одяг. Має приватні поля назва, тип, підтип, гендер, розмір, колір, сезон, виробник, ціна, відгуки, ідентифікаційний номер
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
    // Геттери
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

    // Сеттери
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
    //Конструктор за замовченню
    Clothes();
    
    //КОнструктор
    Clothes(int id, string name, string type, string subType, string g, string size, string color, string season, string producer, double cost, string response);
    
    // Дружні функції
    friend ostream& operator<<(ostream& out, vector<Clothes>& clothes);
    friend std::istream& operator>>(std::istream& in, std::vector<Clothes>& listClothes);
    
    //Конструктор копіювання
    Clothes(const Clothes& other);
    
    //Дадавання нового відгуку
    void AddNewResponce(string str);    

    //Очищення таблички
    DataTable^ ClearTable(DataTable^ table);
    
};

#endif // CLOTHES_H
