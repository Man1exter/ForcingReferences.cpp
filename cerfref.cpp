#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <iomanip>   //setw..
#include <list>
#include <forward_list>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include <iterator>
#include <set>
#include <chrono>
#include <thread>
#include <future>
#include "numbers.h"

using namespace std;
using namespace chrono;

// ref() --> referencja
// cref() --> referencja stała(const) aby nie namnazac szablonow, mozna kopiowac T jakby byl T& poprzez wlasnie wtlaczanie

template <typename T>
void funkt(T x){ // dowolny typ, dzieki wtlaczaniu..
    cout << "Jaka wartosc liczby wtloczeniowej przez ref?" << endl;
    cin >> x;
    cout << x << endl;   // zadziala T oraz T&..

    cout << "petelka: " << endl;
    for(int x = 1; x < 10; x++){
        cout << x << endl;
    }
}

template<typename T>
void fufunkt(T x){
    cout << x++ << endl;
}


int main(){
    int x;

    funkt(x);
    cout << endl;
    fufunkt(ref(x));

    return 0;
}