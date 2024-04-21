#include "TextBox.h"

void TextBox::setValue(const string &value)
{
    this->value = value;
}

string TextBox::getValue()
{
    return value;
}

explicit TextBox::TextBox(const string &value) : value{value}
{
}