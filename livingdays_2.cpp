#include <iostream>
#include <chrono>
#include <ctime>

std::tm make_tm(int year, int month, int day)
{
    std::tm tm = {0};
    tm.tm_year = year - 1900; // years count from 1900
    tm.tm_mon = month - 1;    // months count from January=0
    tm.tm_mday = day;         // days count from 1
    return tm;
}

int main()
{
    // 输入两个日期
    std::tm start = {}, end = {};
    start = make_tm(2024, 3, 12);
    end = make_tm(2012, 5, 20);

    // Arithmetic time values.
    // On a posix system, these are seconds since 1970-01-01 00:00:00 UTC
    std::time_t time1 = std::mktime(&start);
    std::time_t time2 = std::mktime(&end);

    // Divide by the number of seconds in a day
    const int seconds_per_day = 60 * 60 * 24;
    std::time_t difference = (time1 - time2) / seconds_per_day;

    // To be fully portable, we shouldn't assume that these are Unix time;
    // instead, we should use "difftime" to give the difference in seconds:
    double portable_difference = std::difftime(time1, time2) / seconds_per_day;

    // 输出结果
    std::cout << "日期间的天数差为: " << portable_difference << " 天\n";

    return 0;
}