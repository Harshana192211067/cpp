#include <iostream>

// Base class A
class A {
public:
    int func(int value) {
        return value * 2;
    }
};

// Base class B
class B {
public:
    int func(int value) {
        return value * 3;
    }
};

// Base class C
class C {
public:
    int func(int value) {
        return value * 5;
    }
};

// Derived class D
class D : public A, public B, public C {
public:
    int func(int value) {
        // Call the func method of class A
        int result = A::func(value);
        // Call the func method of class B
        result = B::func(result);
        // Call the func method of class C
        result = C::func(result);
        return result;
    }
};

int main() {
    D d;
    int value = 2;
    int result = d.func(value);
    std::cout << "Result: " << result << std::endl; // Output should be 2 * 2 * 3 * 5 = 60
    return 0;
}

