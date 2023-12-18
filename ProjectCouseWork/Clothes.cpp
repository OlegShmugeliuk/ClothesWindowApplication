#include "Clothes.h"

//Сеттери
int Clothes::GetId() {
    return ID;
}
string Clothes::GetNameClothes() const {
    return NameClothes;
}
string Clothes::GetType() const {
    return Type;
}
string Clothes::GetSubType() const {
    return SubType;
}
string Clothes::GetGender() const {
    return Gender;
}
string Clothes::GetSizeClothes() {
    return SizeClothes;
}
string Clothes::GetColorClothes() const {
    return ColorClothes;
}
string Clothes::GetSeason() const {
    return Season;
}
string Clothes::GetProducer() const {
    return Producer;
}
double Clothes::GetCost() const {
    return Cost;
}
string Clothes::GetResponse() const {
    return Response;
}

//Геттери
void Clothes::SetId(int id) {
    ID = id;
}
void Clothes::SetNameClothes(string name) {
    NameClothes = name;
}
void Clothes::SetType(const string& type) {
    Type = type;
}
void Clothes::SetSubType(const string& subType) {
    SubType = subType;
}
void Clothes::SetGender(const string& gender) {
    Gender = gender;
}
void Clothes::SetSizeClothes(string size) {
    SizeClothes = size;
}
void Clothes::SetColorClothes(const string& color) {
    ColorClothes = color;
}
void Clothes::SetSeason(const string& season) {
    Season = season;
}
void Clothes::SetProducer(const string& producer) {
    Producer = producer;
}
void Clothes::SetCost(double cost) {
    Cost = cost;
}
void Clothes::SetResponse(const string& response) {
    Response = response;
}

//Конструктор за замовчуванням
Clothes::Clothes() {
    ID = 0;
    NameClothes = "-";
    Type = "-";
    SubType = "-";
    SizeClothes = "-";
    ColorClothes = "-";
    Season = "-";
    Producer = "-";
    Cost = 0.0;
    Response = "-";
}

//Конструктор
Clothes::Clothes(int id, string name, string type, string subType, string g, string size, string color, string season, string producer, double cost, string response) {
    ID = id;
    NameClothes = name;
    Type = type;
    SubType = subType;
    Gender = g;
    SizeClothes = size;
    ColorClothes = color;
    Season = season;
    Producer = producer;
    Cost = cost;
    Response = response;
}

//Перевентажений вводу для зчитування з файлу
std::istream& operator>>(std::istream& in, std::vector<Clothes>& listClothes) {
    std::string line;
    Clothes clothes;
    while (std::getline(in, line)) {
        if (line.find("ID: ") == 0) {            
            clothes.ID = stoi(line.substr(4)); 
        }
        if (line.find("Name: ") == 0) {
            clothes.NameClothes = line.substr(6); 
        }
        else if (line.find("Type: ") == 0) {
            clothes.Type = line.substr(6); 
        }
        else if (line.find("SubType: ") == 0) {
            clothes.SubType = line.substr(9);
        }
        else if (line.find("Gender: ") == 0) {
            clothes.Gender = line.substr(8);
        }
        else if (line.find("Size: ") == 0) {           
            clothes.SizeClothes = line.substr(6);
        }
        else if (line.find("Color: ") == 0) {
            clothes.ColorClothes = line.substr(7);
        }
        else if (line.find("Season: ") == 0) {
            clothes.Season = line.substr(8);
        }        
        else if (line.find("Producer: ") == 0) {
            clothes.Producer = line.substr(10); 
        }
        else if (line.find("Cost: ") == 0) {
            clothes.Cost = stod(line.substr(6)); 
        }
        else if (line.find("Response:") == 0) {
            String^ reviews = "";
            
            while (std::getline(in, line)) {
                if (line.empty()) {
                    break; 
                }
                reviews += gcnew String(line.c_str()) + Environment::NewLine;

                clothes.Response = msclr::interop::marshal_as<std::string>(reviews);
            }
            listClothes.push_back(Clothes(clothes));
            clothes.Response = "";
        }
    }

    return in;
}

//Метод для додавання відгуку
void Clothes::AddNewResponce(string str) {
    Response += str + "\n";
}
//Перевентажений виводу для запису у файл
ostream& operator<<(ostream& out, vector<Clothes>& clothes) {
    for (int i = 0; i < clothes.size(); i++) {
        out << "ID: " << clothes[i].GetId() << "\n";
        out << "Name: " << clothes[i].GetNameClothes() << "\n";
        out << "Type: " << clothes[i].GetType() << "\n";
        out << "SubType: " << clothes[i].GetSubType() << "\n";
        out << "Gender: " << clothes[i].GetGender() << "\n";
        out << "Size: " << clothes[i].GetSizeClothes() << "\n";
        out << "Color: " << clothes[i].GetColorClothes() << "\n";
        out << "Season: " << clothes[i].GetSeason() << "\n";
        out << "Producer: " << clothes[i].GetProducer() << "\n";
        out << "Cost: " << clothes[i].GetCost() << "\n";        
        out << "Response:\n" << clothes[i].GetResponse()<<"\n";
    }
    return out;
}
// Конструктор копіювання
Clothes::Clothes(const Clothes& other) {
    this->ID = other.ID;
    this->NameClothes = other.NameClothes;
    this->Type = other.Type;
    this->SubType = other.SubType;
    this->Gender = other.Gender;
    this->SizeClothes = other.SizeClothes;
    this->ColorClothes = other.ColorClothes;
    this->Season = other.Season;
    this->Producer = other.Producer;
    this->Cost = other.Cost;
    this->Response = other.Response;
}
//Метод для очищення таблички
DataTable^ Clothes::ClearTable(DataTable^ table) {
    table->Clear();
    return table;
}