#ifndef __BOX__H__
#define __BOX__H__ ;

struct Box
{
public:
    Box() = default;
    Box(const Box &source) = delete;
    Box(double widht, double length, double height);
    ~Box() = default;

private:
    double width;
    double height;
    double length;
};
#endif //!__BOX__H__