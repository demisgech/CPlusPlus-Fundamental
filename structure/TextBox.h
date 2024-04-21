#ifndef __TEXBOX__H__
#define __TEXBOX__H__

#include <string>

using namespace std;

struct TextBox
{
public:
    TextBox() = default;
    explicit TextBox(const string &value);

    void setValue(const string &value);
    string getValue();

private:
    string value;
};

#endif //!__TEXBOX__H__