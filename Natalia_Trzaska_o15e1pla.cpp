#include <iostream>
#include <vector>
using namespace std;

int suma(int *wys, int ilosc) {
    vector<int> x;
    int suma= 0; 
    for(int i = 0; i < ilosc; i++) {     
        while(x.size() > 0 && x.back() > wys[i]) {
            x.pop_back();
        }
        if(x.size() == 0 || x.back() < wys[i]) {
            x.push_back(wys[i]);
            suma++;
            }
    }
    return suma;
}

int main(int argc, char *argv[]) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ilosc = 0;
    cin >> ilosc;
    
    if(ilosc != 0) {
        int *wysokosc = new int[ilosc];
        for(int i = 0; i < ilosc; ++i) {
            int szerokosc = 0;
            cin >> szerokosc;
            cin >> wysokosc[i];
        }
        cout << suma(wysokosc, ilosc) << endl;
    }
    return 0;
}