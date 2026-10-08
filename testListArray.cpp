1   #include <iostream>
  1 #include "ListArray.h"
  2 
  3 int main(){
  4     std::cout << std::boolalpha; // configuramos cout para mostrar true/false en lugar de 0/1.
  5 
  6     ListArray<int> list;
  7 
  8     std::cout << list << std::endl;
  9     std::cout << "size(): " << list.size() << std::endl;
 10     std::cout << "empty(): " << list.empty() << std::endl;
 11     std::cout << std::endl;
 12 
 13     list.insert(0, 0);
 14     list.insert(1, 10);
 15     list.insert(0, -5);
 16     list.insert(2, 5);
 17     std::cout << list << std::endl;
 18     std::cout << "size(): " << list.size() << std::endl;
 19     std::cout << "empty(): " << list.empty() << std::endl;
 20     std::cout << std::endl;
 21 
 22     std::cout << "l.get(0) => " << list.get(0) << "; l[0] => " << list[0] << std::endl;
 23     std::cout << "l.get(3) => " << list.get(3) << "; l[3] => " << list[3] << std::endl;
 24     std::cout << std::endl;
 25 
 26     int r;
 27     r = list.remove(3);
 28     std::cout << "l.remove(3) => " << r << ": " << std::endl;
 29     r = list.remove(1);
 30     std::cout << "l.remove(1) => " << r << ": " << std::endl;
 31     r = list.remove(0);
 32     std::cout << "l.remove(0) => " << r << ": " << std::endl;
 33     std::cout << std::endl;
 34 
 35     std::cout << list << std::endl;
 36     std::cout << "size(): " << list.size() << std::endl;
 37     std::cout << "empty(): " << list.empty() << std::endl;
 38     std::cout << std::endl;
 39 
 40     list.append(14);
 41     list.prepend(33);
 42     std::cout << list << std::endl;
 43     std::cout << "size(): " << list.size() << std::endl;
 44     std::cout << "empty(): " << list.empty() << std::endl;
 45     std::cout << std::endl;
 46 
 47     std::cout << "l.search(14) => " << list.search(14) << std::endl;
 48     std::cout << "l.search(55) => " << list.search(55) << std::endl;
 49 
 50     try{
 51         list.insert(-1, -99);
 52     } catch (std::out_of_range &e){
 53         std::cout << "l.insert(-1, 99) => std::out_of_range: " << e.what() << std::endl;
                                                                                                1,1      Comienzo

