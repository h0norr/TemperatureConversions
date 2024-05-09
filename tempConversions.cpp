#include <iostream>

int main()
{
    int unit;
    double temp;

    std::cout << "____________ TEMPERATURE CONVERSIONS ____________\n";

    std::cout << "Choose one \n1. F to C \n2. F to K \n3. C to F \n4. C to K \n5. K to F \n6. K to C \n7. Exit\n";
    std::cin >> unit;
     
    switch (unit) {
    case 1:
        std::cout << "Enter the temperatur in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) * 1.8;

        std::cout << "Tempuerature is: " << temp << "°C\n";
        break;

    case 2:
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp + 459.67) * 0.55555555555;

        std::cout << "Temperature is: " << temp << "K\n";
        break;

    case 3:
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = (temp * 1.8) + 32;
        
        std::cout << "Temperature is: " << temp << "°F\n";
        break;

    case 4:
        std::cout << "Enter the temperature in Celcius: ";
        std::cin >> temp;

        temp = temp + 273;
            
        std::cout << "Temperature is: " << temp << "K\n";
        break;

    case 5:
        std::cout << "Enter the temperature in Kelvin: ";
        std::cin >> temp;

        temp = (temp * 1.8) - 459.67;

        std::cout << "Temperature is: " << temp << "°F\n";
        break;

    case 6:
        std::cout << "Enter the temperature in Kelvin: ";
        std::cin >> temp;

        temp = temp - 273;

        std::cout << "Temperature is: " << temp << "°C\n";
        break;


    default:
        std::cout << "That wasn't a valid number.";
        break;
    }

    std::cout << "_________________________________________________\n";

	return 0;
}
