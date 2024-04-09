#include <iostream>

class DivisibleByNine {
public:
    int count;
    int sum;

    // Constructor
    DivisibleByNine()  {
    	int count=0,sum=0;
        std::cout << "Numbers between 100 and 200, divisible by 9: " << std::endl;
        for (int i = 100; i <= 250; ++i) {
            if (i % 9 == 0)
			{
                std::cout << i << " ";
                count++;
                sum += i;
            }
        }
        std::cout << std::endl;
    }

    // Destructor
    ~DivisibleByNine() 
	{
        std::cout << "The sum: " << sum << std::endl;
    }
};

int main() {
    DivisibleByNine obj;
    return 0;
}

