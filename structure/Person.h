#ifndef __PERSON__H__
#define __PERSON__H__
struct Person
{
public:
    // NB: Single argument constructor must be marked with explicit to avoid unintentional implicit conversions.
    explicit Person(int age);

private:
    int age;
};
#endif //!__PERSON__H__