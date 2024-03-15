#include <iostream>
#include <ctime>
#include <cmath>

class MoonPhaseCalculator {
public:
    double calculateMoonPhase() {
        std::time_t t = std::time(0);
        std::tm* now = std::localtime(&t);
        double age = calculateMoonAge(now->tm_year + 1900, now->tm_mon + 1, now->tm_mday);
        double x = 29.53 / 2 - age;
        double y = round(x);
        std::cout << y << std::endl;
        return y;
     
    }

private:
    double calculateMoonAge(int year, int month, int day) {
        // 这是一个简化的计算方法，实际应用中可能需要更复杂的算法
        double lp = 2551443;
        double newMoon = toJulian(year, month, day);

        return fmod((newMoon - 2451550.1) / lp, 1.0) * 29.53;
    }

    double toJulian(int year, int month, int day) {
        if (month <= 2) {
            year -= 1;
            month += 12;
        }
        int A = floor(year / 100);
        int B = 2 - A + floor(A / 4);

        return floor(365.25 * (year + 4716)) + floor(30.6001 * (month + 1)) + day + B - 1524.5;
    }
};

int main() {
    MoonPhaseCalculator calculator;
    double currentMoonPhase = calculator.calculateMoonPhase();

    std::cout << "离满月还有" << currentMoonPhase << "天" << std::endl;
    return 0;
}