#include <iostream>
using namespace std;

class Apples {
  public:
    int apple;
    int apples () {

      std::cin >> apple;
      std::cout << "Number of Apples :" << apple << std::endl;
      
      return apple;
    }
};

class Mangos {
  public:
    int mango;
    int mangos () {

      std::cin >> mango;
      std::cout << "Number of Mangos :" << mango << std::endl;
      
      return mango;
    }
}; 

class Fruits : public Apples,public Mangos{
  public:
   void cal (int a,int b) {
     std::cout << "Total Number of Fruits :" << a+b << std::endl;
   }
};

int main() 
{
    Fruits obj;
    obj.apples();
    obj.mangos();
    int a = obj.apple;
    int b = obj.mango;
    obj.cal(a,b);
    return 0;
}






