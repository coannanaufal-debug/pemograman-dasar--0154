//library
#include <iostream>
using namespace std; 

//deklarasi variabel global
float phi = 3.14159;
int r;

//impelementasi fungsi dan prosedur
void input(){ 
    cout << "masukan jari jari :";
    cin >> r;

}
float hitungluas(int r){
    return phi * r * r;
}

void output(){
    cout << "hasilnya : " << hitungluas(r) << endl;
}
int main(){ 
    input();
    output();
}