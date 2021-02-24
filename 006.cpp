#include <iostream>
#include <array>
#include <vector>
#include <tuple>
#include <map>
#include <ctime>
#include <typeinfo>
#include <type_traits>
#include "numbers.h"
#include "006.h"

using namespace std;

void _006(){
    cout << global_object.txt << endl; //dostarczana jest przez biblioteke..
    Temp t;
    cout << t.txt << endl;
}