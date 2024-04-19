#ifndef __ANONYMOUSSTRUCT__H__
#define __ANONYMOUSSTRUCT__H__
struct
{
    int x;
    int y;
} p1 = {1, 3};

struct
{
    double x;
    double y;
} p2{1.1, 3.3};

// Useless struct
struct
{
    int x = 0;
    double y = 1.0;
};
#endif //!__ANONYMOUSSTRUCT__H__