#include "Header.h"
#include "Class1.h"


//setdate����
void Date::AddDay(int inc) {
    while (true) {
        // ���� ���� �� �� ��
        int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

        // ���� �� �ȿ� ���´ٸ�;
        if (day_ + inc <= current_month_total_days) {
            day_ += inc;
            return;
        }
        else {
            // �����޷� �Ѿ�� �Ѵ�.
            inc -= (current_month_total_days - day_ + 1);
            day_ = 1;
            AddMonth(1);
        }
    }
}
void Date::AddMonth(int inc) {
    AddYear((inc + month_ - 1) / 12);
    month_ = month_ + inc % 12;
    month_ = (month_ == 12 ? 12 : month_ % 12);
}
void Date::AddYear(int inc) {
    year_ += inc;
}

int Date::GetCurrentMonthTotalDays(int year, int month) {
    static int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month != 2) {
        return month_day[month - 1];
    }
    else if (year % 4 == 0 && year % 100 != 0) {
        return 29;  // ����
    }
    else {
        return 28;
    }
}
void Date::ShowDate() {
    std::cout << "������ " << year_ << " �� " << month_ << " �� " << day_
        << " �� �Դϴ� " << std::endl;
}