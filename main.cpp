#include <iostream>
using namespace std;

class Lamp{
private:
    string type;
    string producerName;
    int power;
    int numberOfDiodeLamps;

protected:
    string material;
    double priceInDollars;
public:
    string colour;
    double heightInFoots;

string GetType(){return type;}
string GetProducerName(){return producerName;}
int GetPower(){return power;}
int GetNumberOfDiodeLamps(){return numberOfDiodeLamps;}
string GetColour(){return colour;}
double GetHeightInFoots(){return heightInFoots;}
string GetMaterial(){return material;}
double GetPriceInDollars(){return priceInDollars;}

    Lamp(string type, string producerName, int power, int numberOfDiodeLamps, string colour, double  heightInFoots, string material, double priceInDollars) {
        this->type = type;
        this->producerName = producerName;
        this->power = power;
        this->numberOfDiodeLamps = numberOfDiodeLamps;
        this->colour = colour;
        this->heightInFoots = heightInFoots;
        this->material = material;
        this->priceInDollars = priceInDollars;
    };
    ~Lamp (){
    };
    void Print(){
        cout<<"this type is :"<<type<<endl;
        cout<<"this producerName is :"<<producerName<<endl;
        cout<<"this power is :"<<power<<endl;
        cout<<"this numberOfDiodeLamps is :"<<numberOfDiodeLamps<<endl;
        cout<<"this colour is :"<<colour<<endl;
        cout<<"this heightInFoots is :"<<heightInFoots<<endl;
        cout<<"this material is :"<<material<<endl;
        cout<<"this priceInDollars is :"<<priceInDollars<<endl;
    }


};
int main(){
    Lamp Anton("floor lamp","ARSTID", 100, 1, "white", 5.2, "metal", 45);
    Anton.Print();
    return 0;
}
