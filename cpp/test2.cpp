#include <iostream>
#include <string>

using namespace std;

class cat_data{
public:
    int id;
    string name;
    double weight;
};

cat_data input(){
    cat_data data;
    cin >> data.id >> data.name >> data.weight;
    return data;
}

int main(){
    cat_data data[3];
    for (int i = 0; i < 3; i++)
        data[i] = input();
    for (int j = 0; j < 3; j++)
    {
        if (data[j].weight > 6.0)
            cout << data[j].id << ' ' << data[j].name << ' ' << data[j].weight << ' ' << endl;
    }
    return 0;
}