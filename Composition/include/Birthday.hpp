#pragma once

class Birthday
{

public:
    Birthday(int d, int m, int y);
    void PrintDate();
    ~Birthday();

private:
    int day;
    int month;
    int year;
};