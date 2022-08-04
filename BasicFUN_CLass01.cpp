#include<iostream>
using namespace std;

class smallobj{

private:
    int someData;
public:
    //This Function Sets The Data//
    void setData(int d){
        someData = d;
    }
    //This Function Shows Data When It Gets Called//
    void showData(){

        cout<< "\n Data is : "<< someData;
    }

};

int main(){
    smallobj s1,s2;
    s1.setData(10);
    s2.setData(20);
    s1.showData();
    s2.showData();
}
