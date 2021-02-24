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
    cout << x << endl;   // zadziala T oraz T&..
    ++x;
}

template<typename T>
void fufunkt(T x){
    cout << x++ << endl;
}

template<typename T>
void fofokt(T x){
    cout << x << endl;
}

void funkter(){
    int x = 100;
vector<reference_wrapper<int>>temp;
temp.push_back(ref(++x));  // 103
temp.push_back(ref(++x));  // 103
temp.push_back(ref(++x));  // 103

for(auto ele: temp) cout << ele << endl;

cout << typeid(ref(x)).name() << endl; // reference_wrapper
}


int main(){
    int x;

    cout << "Jaka wartosc liczby wtloczeniowej przez ref?" << endl;
    cin >> x;

    funkt(x);
    cout << endl;
    fufunkt(ref(x));
    cout << endl;
    fofokt(cref(x)); // tutaj juz dodane +1 bo jest jako stala..
    cout << endl;

    cout << "po 3 cref/ref~~ach = = = = = = = >" << endl;
    
    funkter();

    return 0;
}