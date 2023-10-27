
// create a program that calculates the monthly of the user based on the user Enter hoursPerWeek, hourlyWage, and weeksPerYear.
// create a necessary variables.

#include <iostream>
#include <iomanip>

void myCalculation() {
    double hoursPerWeek {0};
    double hourlyWage {0};
    double workWeeksPerYears {0};
    double annualSalary {0};
    double monthlySalary {0};
    const double TAXRATE = 0.05; // 5.0% tax rate;


    std::cout << "Enter the number of work hours per week: ";
    std::cin >> hoursPerWeek;
    std::cout << "Enter the number of work weeks per year: ";
    std::cin >> workWeeksPerYears;
    std::cout << "Enter the hourly Wage: ";
    std::cin >> hourlyWage;

    double annualBeforeTaxRate = (hourlyWage * hoursPerWeek * workWeeksPerYears);
    double annualAfterTaxRate = annualBeforeTaxRate * TAXRATE; // 5.0 tax rate
    annualSalary = annualBeforeTaxRate - annualAfterTaxRate;
    std::cout << "Your annual salary is: " << std::fixed  << annualSalary << std::setprecision(2) << std::endl;

    double monthlyBeforeTaxRate = annualBeforeTaxRate / 12;
    double monthlyAfterTaxRate = monthlyBeforeTaxRate * TAXRATE; // 5.0 tax rate
    monthlySalary = monthlyBeforeTaxRate - monthlyAfterTaxRate;
    std::cout << "Your monthly salary is: " << std::fixed <<  monthlySalary << std::setprecision(2) << std::endl;


}

int main() {

    char exitOut;
    std::cout << "Press q to exit or press any other key to continue: ";
    std::cin >> exitOut;

    while(exitOut != 'q') {
        myCalculation();
        std::cout << "Press q to exit or press any other key to continue: ";
        std::cin >> exitOut;
    }

    std::cout << "Program ended." << std::endl;

    return 0;
}