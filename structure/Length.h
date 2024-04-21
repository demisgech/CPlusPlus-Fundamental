#ifndef __LENGTH__H__
#define __LENGTH__H__
struct Length
{
public:
    double x1 = 10;
    double x2 = x1;
    // Converting constructor (implicitly)
    Length(int linCount);

private:
    int lineCount;
};
#endif // __LENGTH__H