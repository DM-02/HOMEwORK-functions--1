//
//  main.cpp
//  HOMEwORK functions -1
//
//  Created by Дмитрий Сергеевич on 08.09.2023.
//
#include <iostream>
 //task1
int sum(int num1, int num2, int num3, int num4, int num5){
    return num1 + num2 +num3 + num4 + num5;
}

//task2
inline double avg(double num1, double num2, double num3){
    return (num1 + num2 +num3) / 3;
}

//task3
template <typename T>
T findMax(T a, T b, T c){
    T maxVal = a;
    if (b > maxVal){
        maxVal = b;
    }
    if (c > maxVal){
        maxVal = c;
    }
    return maxVal;
}
template <typename T>
void printType(){
    std::cout << "Type: Unknown" << std::endl;
}
template<>
void printType<int>(){
    std::cout << "Type: int" << std::endl;
}
template<>
void printType <double> (){
    std::cout << "Type: double" << std::endl;
}
template<>
void printType <short> () {
std::cout << "Type: short" << std::endl;
}
//task4
template <typename T>
bool is_prime( T num){
    if (num < 2) {
        return false;
    }
    for ( T i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
template<typename T>
T findFirstPrime(T arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (isPrime(arr[i])) {
            return arr[i];
        }
    }

    return 0;
}

int main() {
    //task1
    int a, b, c, d, e;
    std::cout << "Введите первое число ->";
    std::cin >> a;
    
    std::cout << "Введите второе число ->";
    std::cin >> b;
    
    std::cout << "Введите третье число ->";
    std::cin >> c;
    
    std::cout << "Введеите четвертое число ->";
    std::cin >> d;
    
    std::cout << "Введите пятое число ->";
    std::cin >> e;
    
    int result = sum(a, b, c, d, e);
    std::cout << "Сумма всех чисел = " << result << std::endl;
    
    //task2
    int i, o, s;
    std::cout << "Введите 3 числа -> ";
    std::cin >> i >> o >> s;
    
    double res = avg(i, o, s);
    std::cout << "Cреднее арифметическое 3-х чисел = " << res << std::endl;
    
    //task 3
    int z = 10, x = 23, v = 123;
    std::cout << "Max Value: " << findMax(a, b, c) << std::endl;
    printType<int>();
    
    double g = 11.4, h = 3.44, j = 56.44;
    std::cout << "Max value: " << findMax(g, h, j) << std::endl;
    printType<double>();
    
    short r = 123, t = 32, p = 432;
    std::cout << "Max Value: " << findMax(r, t, p) << std::endl;
    
    //task4
    int arr[] = {4, 6, 8, 9, 10, 11, 12};

        int firstPrime = findFirstPrime(arr, sizeof(arr) / sizeof(arr[0]));

        if (firstPrime != 0) {
            std::cout << "Первое простое число: " << firstPrime << std::endl;
        } else {
            std::cout << "Простых чисел в массиве нет" << std::endl;
        }

    
    
    return 0;
}
